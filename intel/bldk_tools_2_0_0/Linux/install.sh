#! /usr/bin/env bash
#
# Copyright (c)  2010 Intel Corporation All Rights Reserved.
#
# The source code contained or described herein and all documents related to 
# the source code ("Material") are owned by Intel Corporation or its suppliers
# or licensors. Title to the Material remains with Intel Corporation or its
# suppliers and licensors. The Material contains trade secrets and proprietary
# and confidential information of Intel or its suppliers and licensors. The
# Material is protected by worldwide copyright and trade secret laws and
# treaty provisions. No part of the Material may be used, copied, reproduced,
# modified, published, uploaded, posted, transmitted, distributed, or disclosed
# in any way without Intels prior express written permission.
#
# No license under any patent, copyright, trade secret or other intellectual
# property right is granted to or conferred upon you by disclosure or delivery
# of the Materials, either expressly, by implication, inducement, estoppel or
# otherwise. Any license under such intellectual property rights must be
# express and approved by Intel in writing.
#

checkInstalled()
{
    rpm -q bldk &> /dev/null
    if [ $? -eq 0 ]; then
        echo -n "
    A previous version of Intel (R) Boot Loader Development Kit is installed
on this machine. Do you want to uninstall it? (Y/N): "
    read var1
    if echo "$var1" | grep -qi "y"
    then
       checkDebianFileForDebianSwitch
       if [ $? -eq 0 ]; then
          more_opt=""
       else
          more_opt=" --force-debian "
       fi
       rpm -ev $more_opt bldk
       if [ $? -eq 0 ]; then
           echo "The previous version of Intel (R) Boot Loader Development Kit 
		   was uninstalled successfully.
Press Enter to continue the installation: 
"
           read var1
       else
           echo "The previous version of Intel (R) Boot Loader Development Kit 
cannot be uninstalled. This installation will cancel. Please uninstall
it manually. Press Enter to quit the installation."
           read var1
           exit 1
       fi
    else
       echo "
    The previous version of Intel (R) Boot Loader Development Kit must be 
uninstalled before a newer version can be installed. The installation
has been canceled.
"
       read var1
       exit 1
    fi
    fi
}

checkRPMSystem()
{
    rpm --help &> /dev/null
    if [ $? -ne 0 ]; then
        echo "
The RPM utility is not installed in this machine.
Please install the RPM system first.
On a RedHat system, please try:
    ~$ sudo yum install rpm
For Ubuntu or Debian system, please try
    ~$ sudo apt-get install rpm
Press Enter to quit the installation: 
"
    read var1
    exit 1
    fi
}

checkHost()
{
  if [ "`uname -m`" == "x86_64" ]; then
    return 1
  fi

  return 0
}

checkDebianFileForDebianSwitch()
{
	ver=`rpm --version`
	ver_base="RPM version 4.7.0"
	if [ "$ver" \> "$ver_base" ] || [ "$ver" == "$ver_base" ] ;then
		if [ -f "/etc/debian_version" ];then
			return 1
		fi
	fi
	return 0
}

installPkgs()
{
    checkRPMSystem
    checkInstalled
    checkHost
    if [ $? -eq 0 ]; then
      cpu_arch="i386"
    else
      cpu_arch="x86_64"
    fi
    checkDebianFileForDebianSwitch
    if [ $? -eq 0 ]; then
      more_opt=""
    else
      more_opt=" --force-debian "
    fi
    
    rpm -ivh --nodeps $more_opt bldk-2.0.0-2010-07-12.$cpu_arch.rpm
    
}

presentReadme()
{
    if [ -r README ]; then
        echo -n "Do you want to view the README file ? (Y/N) : "
        read var1
        if echo "$var1" | grep -qi "y"; then
            more -d README
        fi
    fi
}

echo "



















Intel(R) Boot Loader Development Kit, v2.0.0 20100402

Copyright (c) 2008 - 2010, Intel Corporation.  All rights reserved.

Press Ctrl-C to terminate installation, otherwise, press Enter to continue.

"
read var1

echo "



SOFTWARE TOOLS LICENSE AGREEMENT 

IMPORTANT - READ BEFORE COPYING, INSTALLING OR USING. 
Do not use or load this software and any associated materials (collectively, 
the \"Software\") until you have carefully read the following terms and 
conditions. By loading or using the Software, you agree to the terms of this 
Agreement. If you do not wish to so agree, do not install or use the Software.

LICENSES: Please Note:
- If you are an end user, the \"Single User License\" shall apply to you.
- If you are an original equipment manufacturer (OEM), the \"OEM License\" shall 
apply to you. 
- If you are an Independent BIOS, Operating System or Software Vendor, the 
\"ISV License\" below shall apply to you.

DEFINITIONS 
¡°Licensed Software¡± means any computing programming code, including 
Pre-Production Licensed Software, that is provided in connection with, under, 
or subject to this Agreement, but does not include computing programming code 
that is (i) delivered with the Licensed Software that is Open Source Software 
and/or (ii) subject to an agreement, obligation and/or license (in each case 
whether or not accompanying such computing programming code) intended to 
supersede or override this Agreement. The file directories, sub-directories 
and individual File Headers included with the Licensed Software shall contain 
information to identify the Licensed Software and any Open Source Software. 

¡°File Header(s)¡± means the information provided with the Licensed Software and 
any Open Source Software that identifies (i) Internal Use Software, 
Distributable As Object Software, Distributable As Sample Source Software, or 
Open Source Software, and (ii) any notices or additional information about the 
Licensed Software or Open Source Software. 

¡°Open Source Software¡± means any software that requires as a condition of use, 
modification and/or distribution of such software that such software or other 
software incorporated into, derived from or distributed with such software (a) 
be disclosed or distributed in Source Code form; (b) be licensed by the user 
to third parties for the purpose of making and/or distributing derivative 
works; or (c) be redistributable at no charge. Open Source Software includes, 
without limitation, software licensed or distributed under any of the 
following licenses or distribution models, or licenses or distribution models 
substantially similar to any of the following: (a) GNU¡¯s General Public 
License (GPL) or Lesser/Library GPL (LGPL), (b) the Artistic License (e.g., 
PERL), (c) the Mozilla Public License, (d) the Netscape Public License, (e) 
the Sun Community Source License (SCSL), (f) the Sun Industry Source License 
(SISL), and (g) the Common Public License (CPL). 

SINGLE USER LICENSE. You may copy the Software onto a single computer for your 
personal, noncommercial use, and you may make one back-up copy of the 
Software, subject to these conditions:

1. This Software is licensed for use only in conjunction with Intel component 
products. Use of the Software in conjunction with non-Intel component products 
is not licensed hereunder. 
2. You may not copy, modify, rent, sell, distribute or transfer any part of 
the Software except as provided in this Agreement, and you agree to prevent 
unauthorized copying of the Software.
3. You may not reverse engineer, decompile, or disassemble any part of the 
Software not provided to you in source code form.
4. You may not sublicense or permit simultaneous use of the Software by more 
than one user.
5. The Software may include portions offered on terms in addition to those set 
out here, as set out in a license accompanying those portions. 

OEM LICENSE: You may reproduce and distribute the Software only as an integral 
part of or incorporated in Your product or as a standalone Software 
maintenance update for existing end users of Your products, 
excluding any other standalone products, subject to these conditions:

1. This Software is licensed for use only in conjunction with Intel component 
products. Use of the Software in conjunction with non-Intel component products 
is not licensed hereunder.
2. You may not copy, modify, rent, sell, distribute or transfer any part of 
the Software except as provided in this Agreement, and you agree to prevent 
unauthorized copying of the Software.
3. You may not reverse engineer, decompile, or disassemble any part of the 
Software not provided to you in source code form. 
4. You may only distribute the Software to your customers pursuant to a 
written license agreement. Such license agreement may be a \"break-the-seal\" 
license agreement. At a minimum such license shall safeguard 
Intel's ownership rights to the Software.
5. The Software may include portions offered on terms in addition to those set 
out here, as set out in a license accompanying those portions.

ISV LICENSE: You may reproduce, distribute and the Software only as an 
integral part of or incorporated in Your product or as a standalone Software 
maintenance update for existing customers of Your products such as your OEM 
customers, excluding any other standalone products, subject to these conditions:

1. This Software is licensed for use only in conjunction with Intel component 
products. Use of the Software in conjunction with non-Intel component products 
is not licensed hereunder.
2. You may not copy, modify, rent, sell, distribute or transfer any part of 
the Software except as provided in this Agreement, and you agree to prevent 
unauthorized copying of the Software.
3. You may not reverse engineer, decompile, or disassemble any part of the 
Software not provided to you in source code form. 
4. You may only or distribute the Software to your customers pursuant to a 
written license agreement. At a minimum such license shall safeguard Intel's 
ownership rights to the Software.
5. The Software may include portions offered on terms in addition to those set 
out here, as set out in a license accompanying those portions.

OPEN SOURCE SOFTWARE. In the event Open Source Software is included with 
Licensed Software, such Open Source Software is licensed pursuant to the 
applicable Open Source Software license agreement identified in the Open 
Source Software comments in the applicable source code file(s) and/or File 
Header provided with Licensed Software. Additional detail may be provided 
(where applicable) in the accompanying on-line documentation. With respect to 
the Open Source Software, nothing in this Agreement limits any rights under, 
or grants rights that supersede, the terms of any applicable Open Source 
Software license agreement.

NO OTHER RIGHTS. No rights or licenses are granted by Intel to You, expressly 
or by implication, with respect to any proprietary information or patent, 
copyright, mask work, trademark, trade secret, or other intellectual property 
right owned or controlled by Intel, except as expressly provided in this 
Agreement.

OWNERSHIP OF SOFTWARE AND COPYRIGHTS. Title to all copies of the Software 
remains with Intel or its suppliers. The Software is copyrighted and protected 
by the laws of the United States and other countries, and  international 
treaty provisions. You may not remove any copyright notices from the Software. 
Intel may make changes to the Software, or to items referenced therein, at any 
time without notice, but is not obligated to support or update the Software. 
Except as otherwise expressly provided, Intel grants no express or implied 
right under Intel patents, copyrights, trademarks, or other intellectual 
property rights. You may transfer the Software only if the recipient agrees to 
be fully bound by these terms and if you retain no copies of the Software.

LIMITED MEDIA WARRANTY. If the Software has been delivered by Intel on 
physical media, Intel warrants the media to be free from material physical 
defects for a period of ninety days after delivery by Intel. If such a defect 
is found, return the media to Intel for replacement or alternate delivery of 
the Software as Intel may select.

EXCLUSION OF OTHER WARRANTIES. EXCEPT AS PROVIDED ABOVE, THE SOFTWARE IS 
PROVIDED \"AS IS\" WITHOUT ANY EXPRESS OR IMPLIED WARRANTY OF ANY KIND INCLUDING 
WARRANTIES OF MERCHANTABILITY, NONINFRINGEMENT, OR FITNESS FOR A PARTICULAR 
PURPOSE. Intel does not warrant or assume responsibility for the accuracy or 
completeness of any information, text, graphics, links or other items 
contained within the Software.

LIMITATION OF LIABILITY. IN NO EVENT SHALL INTEL OR ITS SUPPLIERS BE LIABLE 
FOR ANY DAMAGES WHATSOEVER (INCLUDING, WITHOUT LIMITATION, LOST PROFITS, 
BUSINESS INTERRUPTION, OR LOST INFORMATION) ARISING OUT OF THE USE OF OR 
INABILITY TO USE THE SOFTWARE, EVEN IF INTEL HAS BEEN ADVISED OF THE 
POSSIBILITY OF SUCH DAMAGES. SOME JURISDICTIONS PROHIBIT EXCLUSION OR 
LIMITATION OF LIABILITY FOR IMPLIED WARRANTIES OR CONSEQUENTIAL OR INCIDENTAL 
DAMAGES, SO THE ABOVE LIMITATION MAY NOT APPLY TO YOU. YOU MAY ALSO HAVE OTHER 
LEGAL RIGHTS THAT VARY FROM JURISDICTION TO JURISDICTION. 

TERMINATION OF THIS AGREEMENT. Intel may terminate this Agreement at any time 
if you violate its terms. Upon termination, you will immediately destroy the 
Software or return all copies of the Software to Intel.

APPLICABLE LAWS. Claims arising under this Agreement shall be governed by the 
laws of California, excluding its principles of conflict of laws and the 
United Nations Convention on Contracts for the Sale of Goods. You may not 
export the Software in violation of applicable export laws and regulations. 
Intel is not obligated under any other agreements unless they are in writing 
and signed by an authorized representative of Intel.

GOVERNMENT RESTRICTED RIGHTS. The Software is provided with \"RESTRICTED 
RIGHTS.\" Use, duplication, or disclosure by the Government is subject to 
restrictions as set forth in FAR52.227-14 and DFAR252.227-7013 et seq. or its 
successor. Use of the Software by the Government constitutes acknowledgment of 
Intel's proprietary rights therein. Contractor or Manufacturer is Intel 2200 
Mission College Blvd., Santa Clara, CA 95052.



Press Enter to continue.
"
read var1

echo '






THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
"AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR
A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT
OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL,
SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT
LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE,
DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY
THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
(INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.

By accepting this license, you agree to the terms and conditions set 
forth in the license as noted above.


'
echo -n 'If you agree to these terms, enter "Accept": '

read var1

if echo "$var1" | grep -qi "accept"
then

    echo "
Installation Locations:
    Application Binaries: /opt/intel/bldk/bin
    Application Plug-ins: /opt/intel/bldk/lib
    License Files:        /opt/intel/bldk/licenses
    Man Pages:            /opt/intel/bldk/man/man1
    User Documentation:   /opt/intel/bldk/share/applications/bldk
    
    
Press Enter to continue installation.
    "
    read var1

    installPkgs
    
    if [ $? -eq 0 ];
    then
    
        echo "
The application, Intel (R) Boot Loader Development Kit, has been installed, 
and a symbolic link has been created in the /usr/bin directory. 
Please type
    ~$ bldk 
    or 
    ~$ bpp
to run the application. 
"
        presentReadme
        exit 0
    else
        echo "
Failed to install the application, Intel (R) Boot Loader Development Kit.
"
        exit 1
    fi
    
else
    echo "
Please remove all files provided by this distribution.
    "
    exit 1
fi
    
    
