/*
 * If not stated otherwise in this file or this component's Licenses.txt file the
 * following copyright and licenses apply:
 *
 * Copyright 2015 RDK Management
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 * http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
*/

/**********************************************************************
   Copyright [2014] [Cisco Systems, Inc.]
 
   Licensed under the Apache License, Version 2.0 (the "License");
   you may not use this file except in compliance with the License.
   You may obtain a copy of the License at
 
       http://www.apache.org/licenses/LICENSE-2.0
 
   Unless required by applicable law or agreed to in writing, software
   distributed under the License is distributed on an "AS IS" BASIS,
   WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
   See the License for the specific language governing permissions and
   limitations under the License.
**********************************************************************/


/**********************************************************************

    module:	ssp_ccsp_cwmp_cfg.h

        For CCSP TR-069 PA SSP,
        BroadWay Service Delivery System

    ---------------------------------------------------------------

    copyright:

        Cisco Systems, Inc., 2011
        All Rights Reserved.

    ---------------------------------------------------------------

    description:

        Implementation of the CCSP CWMP Cfg interface for CCSP TR-069 
        PA.

    ---------------------------------------------------------------

    environment:

        platform dependent

    ---------------------------------------------------------------

    author:

        Kang Quan

    ---------------------------------------------------------------

    revision:

        08/03/2011  initial revision.

**********************************************************************/


#ifndef  _SSP_CCSP_CWMP_CFG_
#define  _SSP_CCSP_CWMP_CFG_

#ifdef   _ANSC_USE_OPENSSL_
ANSC_STATUS  
CcspTr069PaSsp_SetOpensslCertificateLocation
    (
        char*                       pCfgFileName,
        char**                      returnCA,
        char**                      returnDEV,
        char**                      returnPKey
    );
#endif

int  
CcspTr069PaSsp_InitCcspCwmpCfgIf
    (
    );

ULONG
CcspTr069PaSsp_CcspCwmpCfgNoRPCMethods
    (
        ANSC_HANDLE                 hThisObject
    );

ANSC_STATUS
CcspTr069PaSsp_CcspCwmpCfgGetDevDataModelVersion
    (
        ANSC_HANDLE                 hThisObject,
        PULONG                      pulDevVerionMajor,
        PULONG                      pulDevVersionMinor
    );

ULONG
CcspTr069PaSsp_GetHttpSessionIdleTimeout
    (
        ANSC_HANDLE                 hThisObject
    );

ULONG
CcspTr069PaSsp_GetCwmpRpcTimeout
    (
        ANSC_HANDLE                 hThisObject
    );

char*
CcspTr069PaSsp_GetCustomForcedInformParams
    (
        ANSC_HANDLE                 hThisObject
    );

#endif

