/*
 * Copyright (c) 1998-2001 Apple Computer, Inc. All rights reserved.
 *
 * @APPLE_LICENSE_HEADER_START@
 *
 * The contents of this file constitute Original Code as defined in and
 * are subject to the Apple Public Source License Version 1.1 (the
 * "License").  You may not use this file except in compliance with the
 * License.  Please obtain a copy of the License at
 * http://www.apple.com/publicsource and read it before using this file.
 *
 * This Original Code and all software distributed under the License are
 * distributed on an "AS IS" basis, WITHOUT WARRANTY OF ANY KIND, EITHER
 * EXPRESS OR IMPLIED, AND APPLE HEREBY DISCLAIMS ALL SUCH WARRANTIES,
 * INCLUDING WITHOUT LIMITATION, ANY WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE OR NON-INFRINGEMENT.  Please see the
 * License for the specific language governing rights and limitations
 * under the License.
 *
 * @APPLE_LICENSE_HEADER_END@
 */

#ifndef _IOKIT_IOFIREWIREAVCUSERCLIENTCOMMON_H_
#define _IOKIT_IOFIREWIREAVCUSERCLIENTCOMMON_H_

#define kIOFireWireAVCLibConnection 13

enum IOFWAVCUserClientCommandCodes {
    kIOFWAVCUserClientOpen,						// kIOUCScalarIScalarO 0,0
    kIOFWAVCUserClientClose,					// kIOUCScalarIScalarO 0,0
    kIOFWAVCUserClientOpenWithSessionRef,		// kIOUCScalarIScalarO 1,0
	kIOFWAVCUserClientGetSessionRef,			// kIOUCScalarIScalarO 0,1
    kIOFWAVCUserClientAVCCommand,				// kIOUCStructIStructO -1,-1
    kIOFWAVCUserClientAVCCommandInGen,			// kIOUCStructIStructO -1,-1
    kIOFWAVCUserClientUpdateAVCCommandTimeout,	// kIOUCScalarIScalarO 0,0
    kIOFWAVCUserClientNumCommands
};


enum IOFWAVCProtocolUserClientCommandCodes {
    kIOFWAVCProtocolUserClientSendAVCResponse,   		// kIOUCScalarIStructI 2, -1
    kIOFWAVCProtocolUserClientFreeInputPlug,			// kIOUCScalarIScalarO 1, 0
    kIOFWAVCProtocolUserClientReadInputPlug,			// kIOUCScalarIScalarO 1, 1
    kIOFWAVCProtocolUserClientUpdateInputPlug,			// kIOUCScalarIScalarO 3, 0
    kIOFWAVCProtocolUserClientFreeOutputPlug,			// kIOUCScalarIScalarO 1, 0
    kIOFWAVCProtocolUserClientReadOutputPlug,			// kIOUCScalarIScalarO 1, 1
    kIOFWAVCProtocolUserClientUpdateOutputPlug,			// kIOUCScalarIScalarO 3, 0
    kIOFWAVCProtocolUserClientReadOutputMasterPlug,		// kIOUCScalarIScalarO 0, 1
    kIOFWAVCProtocolUserClientUpdateOutputMasterPlug,	// kIOUCScalarIScalarO 2, 0
    kIOFWAVCProtocolUserClientReadInputMasterPlug,		// kIOUCScalarIScalarO 0, 1
    kIOFWAVCProtocolUserClientUpdateInputMasterPlug,	// kIOUCScalarIScalarO 2, 0
    kIOFWAVCProtocolUserClientNumCommands
};

enum IOFWAVCProtocolUserClientAsyncCommandCodes {
    kIOFWAVCProtocolUserClientSetAVCRequestCallback,   		// kIOUCScalarIScalarO 2, 0
    kIOFWAVCProtocolUserClientAllocateInputPlug,			// kIOUCScalarIScalarO 1, 1
    kIOFWAVCProtocolUserClientAllocateOutputPlug,			// kIOUCScalarIScalarO 1, 1
    kIOFWAVCProtocolUserClientNumAsyncCommands
};

#endif // _IOKIT_IOFIREWIREAVCUSERCLIENTCOMMON_H_