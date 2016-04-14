

/* this ALWAYS GENERATED file contains the proxy stub code */


 /* File created by MIDL compiler version 7.00.0555 */
/* at Thu Apr 14 15:32:02 2016
 */
/* Compiler settings for C:\Users\Cole Swackhamer\Documents\MATLAB\Chromatography\Final Scripts\manualint\for_testing\manualint_idl.idl:
    Oicf, W1, Zp8, env=Win64 (32b run), target_arch=IA64 7.00.0555 
    protocol : dce , ms_ext, c_ext, robust
    error checks: allocation ref bounds_check enum stub_data 
    VC __declspec() decoration level: 
         __declspec(uuid()), __declspec(selectany), __declspec(novtable)
         DECLSPEC_UUID(), MIDL_INTERFACE()
*/
/* @@MIDL_FILE_HEADING(  ) */

#if defined(_M_IA64) 


#pragma warning( disable: 4049 )  /* more than 64k source lines */
#if _MSC_VER >= 1200
#pragma warning(push)
#endif

#pragma warning( disable: 4211 )  /* redefine extern to static */
#pragma warning( disable: 4232 )  /* dllimport identity*/
#pragma warning( disable: 4024 )  /* array to pointer mapping*/
#pragma warning( disable: 4152 )  /* function/data pointer conversion in expression */

#define USE_STUBLESS_PROXY


/* verify that the <rpcproxy.h> version is high enough to compile this file*/
#ifndef __REDQ_RPCPROXY_H_VERSION__
#define __REQUIRED_RPCPROXY_H_VERSION__ 475
#endif


#include "rpcproxy.h"
#ifndef __RPCPROXY_H_VERSION__
#error this stub requires an updated version of <rpcproxy.h>
#endif /* __RPCPROXY_H_VERSION__ */


#include "manualint_idl.h"

#define TYPE_FORMAT_STRING_SIZE   1035                              
#define PROC_FORMAT_STRING_SIZE   177                               
#define EXPR_FORMAT_STRING_SIZE   1                                 
#define TRANSMIT_AS_TABLE_SIZE    0            
#define WIRE_MARSHAL_TABLE_SIZE   2            

typedef struct _manualint_idl_MIDL_TYPE_FORMAT_STRING
    {
    short          Pad;
    unsigned char  Format[ TYPE_FORMAT_STRING_SIZE ];
    } manualint_idl_MIDL_TYPE_FORMAT_STRING;

typedef struct _manualint_idl_MIDL_PROC_FORMAT_STRING
    {
    short          Pad;
    unsigned char  Format[ PROC_FORMAT_STRING_SIZE ];
    } manualint_idl_MIDL_PROC_FORMAT_STRING;

typedef struct _manualint_idl_MIDL_EXPR_FORMAT_STRING
    {
    long          Pad;
    unsigned char  Format[ EXPR_FORMAT_STRING_SIZE ];
    } manualint_idl_MIDL_EXPR_FORMAT_STRING;


static const RPC_SYNTAX_IDENTIFIER  _RpcTransferSyntax = 
{{0x8A885D04,0x1CEB,0x11C9,{0x9F,0xE8,0x08,0x00,0x2B,0x10,0x48,0x60}},{2,0}};


extern const manualint_idl_MIDL_TYPE_FORMAT_STRING manualint_idl__MIDL_TypeFormatString;
extern const manualint_idl_MIDL_PROC_FORMAT_STRING manualint_idl__MIDL_ProcFormatString;
extern const manualint_idl_MIDL_EXPR_FORMAT_STRING manualint_idl__MIDL_ExprFormatString;


extern const MIDL_STUB_DESC Object_StubDesc;


extern const MIDL_SERVER_INFO IClass1_ServerInfo;
extern const MIDL_STUBLESS_PROXY_INFO IClass1_ProxyInfo;


extern const USER_MARSHAL_ROUTINE_QUADRUPLE UserMarshalRoutines[ WIRE_MARSHAL_TABLE_SIZE ];

#if !defined(__RPC_WIN64__)
#error  Invalid build platform for this stub.
#endif

static const manualint_idl_MIDL_PROC_FORMAT_STRING manualint_idl__MIDL_ProcFormatString =
    {
        0,
        {

	/* Procedure get_MWFlags */

			0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/*  2 */	NdrFcLong( 0x0 ),	/* 0 */
/*  6 */	NdrFcShort( 0x7 ),	/* 7 */
/*  8 */	NdrFcShort( 0x18 ),	/* ia64 Stack size/offset = 24 */
/* 10 */	NdrFcShort( 0x0 ),	/* 0 */
/* 12 */	NdrFcShort( 0x8 ),	/* 8 */
/* 14 */	0x45,		/* Oi2 Flags:  srv must size, has return, has ext, */
			0x2,		/* 2 */
/* 16 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 18 */	NdrFcShort( 0x0 ),	/* 0 */
/* 20 */	NdrFcShort( 0x0 ),	/* 0 */
/* 22 */	NdrFcShort( 0x0 ),	/* 0 */
/* 24 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter ppvFlags */

/* 26 */	NdrFcShort( 0x13 ),	/* Flags:  must size, must free, out, */
/* 28 */	NdrFcShort( 0x8 ),	/* ia64 Stack size/offset = 8 */
/* 30 */	NdrFcShort( 0x2 ),	/* Type Offset=2 */

	/* Return value */

/* 32 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 34 */	NdrFcShort( 0x10 ),	/* ia64 Stack size/offset = 16 */
/* 36 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure put_MWFlags */

/* 38 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 40 */	NdrFcLong( 0x0 ),	/* 0 */
/* 44 */	NdrFcShort( 0x8 ),	/* 8 */
/* 46 */	NdrFcShort( 0x18 ),	/* ia64 Stack size/offset = 24 */
/* 48 */	NdrFcShort( 0x0 ),	/* 0 */
/* 50 */	NdrFcShort( 0x8 ),	/* 8 */
/* 52 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x2,		/* 2 */
/* 54 */	0xa,		/* 10 */
			0x1,		/* Ext Flags:  new corr desc, */
/* 56 */	NdrFcShort( 0x0 ),	/* 0 */
/* 58 */	NdrFcShort( 0x0 ),	/* 0 */
/* 60 */	NdrFcShort( 0x0 ),	/* 0 */
/* 62 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter pvFlags */

/* 64 */	NdrFcShort( 0xb ),	/* Flags:  must size, must free, in, */
/* 66 */	NdrFcShort( 0x8 ),	/* ia64 Stack size/offset = 8 */
/* 68 */	NdrFcShort( 0x6 ),	/* Type Offset=6 */

	/* Return value */

/* 70 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 72 */	NdrFcShort( 0x10 ),	/* ia64 Stack size/offset = 16 */
/* 74 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure manualint */

/* 76 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 78 */	NdrFcLong( 0x0 ),	/* 0 */
/* 82 */	NdrFcShort( 0x9 ),	/* 9 */
/* 84 */	NdrFcShort( 0x70 ),	/* ia64 Stack size/offset = 112 */
/* 86 */	NdrFcShort( 0x0 ),	/* 0 */
/* 88 */	NdrFcShort( 0x8 ),	/* 8 */
/* 90 */	0x46,		/* Oi2 Flags:  clt must size, has return, has ext, */
			0x5,		/* 5 */
/* 92 */	0xa,		/* 10 */
			0x5,		/* Ext Flags:  new corr desc, srv corr check, */
/* 94 */	NdrFcShort( 0x0 ),	/* 0 */
/* 96 */	NdrFcShort( 0x1 ),	/* 1 */
/* 98 */	NdrFcShort( 0x0 ),	/* 0 */
/* 100 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter x */

/* 102 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 104 */	NdrFcShort( 0x8 ),	/* ia64 Stack size/offset = 8 */
/* 106 */	NdrFcShort( 0x3e4 ),	/* Type Offset=996 */

	/* Parameter y */

/* 108 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 110 */	NdrFcShort( 0x20 ),	/* ia64 Stack size/offset = 32 */
/* 112 */	NdrFcShort( 0x3e4 ),	/* Type Offset=996 */

	/* Parameter s */

/* 114 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 116 */	NdrFcShort( 0x38 ),	/* ia64 Stack size/offset = 56 */
/* 118 */	NdrFcShort( 0x3e4 ),	/* Type Offset=996 */

	/* Parameter e */

/* 120 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 122 */	NdrFcShort( 0x50 ),	/* ia64 Stack size/offset = 80 */
/* 124 */	NdrFcShort( 0x3e4 ),	/* Type Offset=996 */

	/* Return value */

/* 126 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 128 */	NdrFcShort( 0x68 ),	/* ia64 Stack size/offset = 104 */
/* 130 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

	/* Procedure get_help */

/* 132 */	0x33,		/* FC_AUTO_HANDLE */
			0x6c,		/* Old Flags:  object, Oi2 */
/* 134 */	NdrFcLong( 0x0 ),	/* 0 */
/* 138 */	NdrFcShort( 0xa ),	/* 10 */
/* 140 */	NdrFcShort( 0x20 ),	/* ia64 Stack size/offset = 32 */
/* 142 */	NdrFcShort( 0x0 ),	/* 0 */
/* 144 */	NdrFcShort( 0x8 ),	/* 8 */
/* 146 */	0x47,		/* Oi2 Flags:  srv must size, clt must size, has return, has ext, */
			0x3,		/* 3 */
/* 148 */	0xa,		/* 10 */
			0x7,		/* Ext Flags:  new corr desc, clt corr check, srv corr check, */
/* 150 */	NdrFcShort( 0x1 ),	/* 1 */
/* 152 */	NdrFcShort( 0x1 ),	/* 1 */
/* 154 */	NdrFcShort( 0x0 ),	/* 0 */
/* 156 */	NdrFcShort( 0x0 ),	/* 0 */

	/* Parameter funcname */

/* 158 */	NdrFcShort( 0x8b ),	/* Flags:  must size, must free, in, by val, */
/* 160 */	NdrFcShort( 0x8 ),	/* ia64 Stack size/offset = 8 */
/* 162 */	NdrFcShort( 0x3ee ),	/* Type Offset=1006 */

	/* Parameter helptext */

/* 164 */	NdrFcShort( 0x2113 ),	/* Flags:  must size, must free, out, simple ref, srv alloc size=8 */
/* 166 */	NdrFcShort( 0x10 ),	/* ia64 Stack size/offset = 16 */
/* 168 */	NdrFcShort( 0x400 ),	/* Type Offset=1024 */

	/* Return value */

/* 170 */	NdrFcShort( 0x70 ),	/* Flags:  out, return, base type, */
/* 172 */	NdrFcShort( 0x18 ),	/* ia64 Stack size/offset = 24 */
/* 174 */	0x8,		/* FC_LONG */
			0x0,		/* 0 */

			0x0
        }
    };

static const manualint_idl_MIDL_TYPE_FORMAT_STRING manualint_idl__MIDL_TypeFormatString =
    {
        0,
        {
			NdrFcShort( 0x0 ),	/* 0 */
/*  2 */	
			0x11, 0x10,	/* FC_RP [pointer_deref] */
/*  4 */	NdrFcShort( 0x2 ),	/* Offset= 2 (6) */
/*  6 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/*  8 */	NdrFcLong( 0xa295776 ),	/* 170481526 */
/* 12 */	NdrFcShort( 0x23a1 ),	/* 9121 */
/* 14 */	NdrFcShort( 0x410a ),	/* 16650 */
/* 16 */	0x94,		/* 148 */
			0xbd,		/* 189 */
/* 18 */	0xc,		/* 12 */
			0x6c,		/* 108 */
/* 20 */	0x61,		/* 97 */
			0xb8,		/* 184 */
/* 22 */	0x91,		/* 145 */
			0xb7,		/* 183 */
/* 24 */	
			0x12, 0x0,	/* FC_UP */
/* 26 */	NdrFcShort( 0x3b6 ),	/* Offset= 950 (976) */
/* 28 */	
			0x2b,		/* FC_NON_ENCAPSULATED_UNION */
			0x9,		/* FC_ULONG */
/* 30 */	0x7,		/* Corr desc: FC_USHORT */
			0x0,		/*  */
/* 32 */	NdrFcShort( 0xfff8 ),	/* -8 */
/* 34 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 36 */	NdrFcShort( 0x2 ),	/* Offset= 2 (38) */
/* 38 */	NdrFcShort( 0x10 ),	/* 16 */
/* 40 */	NdrFcShort( 0x2f ),	/* 47 */
/* 42 */	NdrFcLong( 0x14 ),	/* 20 */
/* 46 */	NdrFcShort( 0x800b ),	/* Simple arm type: FC_HYPER */
/* 48 */	NdrFcLong( 0x3 ),	/* 3 */
/* 52 */	NdrFcShort( 0x8008 ),	/* Simple arm type: FC_LONG */
/* 54 */	NdrFcLong( 0x11 ),	/* 17 */
/* 58 */	NdrFcShort( 0x8001 ),	/* Simple arm type: FC_BYTE */
/* 60 */	NdrFcLong( 0x2 ),	/* 2 */
/* 64 */	NdrFcShort( 0x8006 ),	/* Simple arm type: FC_SHORT */
/* 66 */	NdrFcLong( 0x4 ),	/* 4 */
/* 70 */	NdrFcShort( 0x800a ),	/* Simple arm type: FC_FLOAT */
/* 72 */	NdrFcLong( 0x5 ),	/* 5 */
/* 76 */	NdrFcShort( 0x800c ),	/* Simple arm type: FC_DOUBLE */
/* 78 */	NdrFcLong( 0xb ),	/* 11 */
/* 82 */	NdrFcShort( 0x8006 ),	/* Simple arm type: FC_SHORT */
/* 84 */	NdrFcLong( 0xa ),	/* 10 */
/* 88 */	NdrFcShort( 0x8008 ),	/* Simple arm type: FC_LONG */
/* 90 */	NdrFcLong( 0x6 ),	/* 6 */
/* 94 */	NdrFcShort( 0xe8 ),	/* Offset= 232 (326) */
/* 96 */	NdrFcLong( 0x7 ),	/* 7 */
/* 100 */	NdrFcShort( 0x800c ),	/* Simple arm type: FC_DOUBLE */
/* 102 */	NdrFcLong( 0x8 ),	/* 8 */
/* 106 */	NdrFcShort( 0xe2 ),	/* Offset= 226 (332) */
/* 108 */	NdrFcLong( 0xd ),	/* 13 */
/* 112 */	NdrFcShort( 0xf6 ),	/* Offset= 246 (358) */
/* 114 */	NdrFcLong( 0x9 ),	/* 9 */
/* 118 */	NdrFcShort( 0x102 ),	/* Offset= 258 (376) */
/* 120 */	NdrFcLong( 0x2000 ),	/* 8192 */
/* 124 */	NdrFcShort( 0x10e ),	/* Offset= 270 (394) */
/* 126 */	NdrFcLong( 0x24 ),	/* 36 */
/* 130 */	NdrFcShort( 0x304 ),	/* Offset= 772 (902) */
/* 132 */	NdrFcLong( 0x4024 ),	/* 16420 */
/* 136 */	NdrFcShort( 0x2fe ),	/* Offset= 766 (902) */
/* 138 */	NdrFcLong( 0x4011 ),	/* 16401 */
/* 142 */	NdrFcShort( 0x2fc ),	/* Offset= 764 (906) */
/* 144 */	NdrFcLong( 0x4002 ),	/* 16386 */
/* 148 */	NdrFcShort( 0x2fa ),	/* Offset= 762 (910) */
/* 150 */	NdrFcLong( 0x4003 ),	/* 16387 */
/* 154 */	NdrFcShort( 0x2f8 ),	/* Offset= 760 (914) */
/* 156 */	NdrFcLong( 0x4014 ),	/* 16404 */
/* 160 */	NdrFcShort( 0x2f6 ),	/* Offset= 758 (918) */
/* 162 */	NdrFcLong( 0x4004 ),	/* 16388 */
/* 166 */	NdrFcShort( 0x2f4 ),	/* Offset= 756 (922) */
/* 168 */	NdrFcLong( 0x4005 ),	/* 16389 */
/* 172 */	NdrFcShort( 0x2f2 ),	/* Offset= 754 (926) */
/* 174 */	NdrFcLong( 0x400b ),	/* 16395 */
/* 178 */	NdrFcShort( 0x2dc ),	/* Offset= 732 (910) */
/* 180 */	NdrFcLong( 0x400a ),	/* 16394 */
/* 184 */	NdrFcShort( 0x2da ),	/* Offset= 730 (914) */
/* 186 */	NdrFcLong( 0x4006 ),	/* 16390 */
/* 190 */	NdrFcShort( 0x2e4 ),	/* Offset= 740 (930) */
/* 192 */	NdrFcLong( 0x4007 ),	/* 16391 */
/* 196 */	NdrFcShort( 0x2da ),	/* Offset= 730 (926) */
/* 198 */	NdrFcLong( 0x4008 ),	/* 16392 */
/* 202 */	NdrFcShort( 0x2dc ),	/* Offset= 732 (934) */
/* 204 */	NdrFcLong( 0x400d ),	/* 16397 */
/* 208 */	NdrFcShort( 0x2da ),	/* Offset= 730 (938) */
/* 210 */	NdrFcLong( 0x4009 ),	/* 16393 */
/* 214 */	NdrFcShort( 0x2d8 ),	/* Offset= 728 (942) */
/* 216 */	NdrFcLong( 0x6000 ),	/* 24576 */
/* 220 */	NdrFcShort( 0x2d6 ),	/* Offset= 726 (946) */
/* 222 */	NdrFcLong( 0x400c ),	/* 16396 */
/* 226 */	NdrFcShort( 0x2d4 ),	/* Offset= 724 (950) */
/* 228 */	NdrFcLong( 0x10 ),	/* 16 */
/* 232 */	NdrFcShort( 0x8002 ),	/* Simple arm type: FC_CHAR */
/* 234 */	NdrFcLong( 0x12 ),	/* 18 */
/* 238 */	NdrFcShort( 0x8006 ),	/* Simple arm type: FC_SHORT */
/* 240 */	NdrFcLong( 0x13 ),	/* 19 */
/* 244 */	NdrFcShort( 0x8008 ),	/* Simple arm type: FC_LONG */
/* 246 */	NdrFcLong( 0x15 ),	/* 21 */
/* 250 */	NdrFcShort( 0x800b ),	/* Simple arm type: FC_HYPER */
/* 252 */	NdrFcLong( 0x16 ),	/* 22 */
/* 256 */	NdrFcShort( 0x8008 ),	/* Simple arm type: FC_LONG */
/* 258 */	NdrFcLong( 0x17 ),	/* 23 */
/* 262 */	NdrFcShort( 0x8008 ),	/* Simple arm type: FC_LONG */
/* 264 */	NdrFcLong( 0xe ),	/* 14 */
/* 268 */	NdrFcShort( 0x2b2 ),	/* Offset= 690 (958) */
/* 270 */	NdrFcLong( 0x400e ),	/* 16398 */
/* 274 */	NdrFcShort( 0x2b6 ),	/* Offset= 694 (968) */
/* 276 */	NdrFcLong( 0x4010 ),	/* 16400 */
/* 280 */	NdrFcShort( 0x2b4 ),	/* Offset= 692 (972) */
/* 282 */	NdrFcLong( 0x4012 ),	/* 16402 */
/* 286 */	NdrFcShort( 0x270 ),	/* Offset= 624 (910) */
/* 288 */	NdrFcLong( 0x4013 ),	/* 16403 */
/* 292 */	NdrFcShort( 0x26e ),	/* Offset= 622 (914) */
/* 294 */	NdrFcLong( 0x4015 ),	/* 16405 */
/* 298 */	NdrFcShort( 0x26c ),	/* Offset= 620 (918) */
/* 300 */	NdrFcLong( 0x4016 ),	/* 16406 */
/* 304 */	NdrFcShort( 0x262 ),	/* Offset= 610 (914) */
/* 306 */	NdrFcLong( 0x4017 ),	/* 16407 */
/* 310 */	NdrFcShort( 0x25c ),	/* Offset= 604 (914) */
/* 312 */	NdrFcLong( 0x0 ),	/* 0 */
/* 316 */	NdrFcShort( 0x0 ),	/* Offset= 0 (316) */
/* 318 */	NdrFcLong( 0x1 ),	/* 1 */
/* 322 */	NdrFcShort( 0x0 ),	/* Offset= 0 (322) */
/* 324 */	NdrFcShort( 0xffff ),	/* Offset= -1 (323) */
/* 326 */	
			0x15,		/* FC_STRUCT */
			0x7,		/* 7 */
/* 328 */	NdrFcShort( 0x8 ),	/* 8 */
/* 330 */	0xb,		/* FC_HYPER */
			0x5b,		/* FC_END */
/* 332 */	
			0x12, 0x0,	/* FC_UP */
/* 334 */	NdrFcShort( 0xe ),	/* Offset= 14 (348) */
/* 336 */	
			0x1b,		/* FC_CARRAY */
			0x1,		/* 1 */
/* 338 */	NdrFcShort( 0x2 ),	/* 2 */
/* 340 */	0x9,		/* Corr desc: FC_ULONG */
			0x0,		/*  */
/* 342 */	NdrFcShort( 0xfffc ),	/* -4 */
/* 344 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 346 */	0x6,		/* FC_SHORT */
			0x5b,		/* FC_END */
/* 348 */	
			0x17,		/* FC_CSTRUCT */
			0x3,		/* 3 */
/* 350 */	NdrFcShort( 0x8 ),	/* 8 */
/* 352 */	NdrFcShort( 0xfff0 ),	/* Offset= -16 (336) */
/* 354 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 356 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 358 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 360 */	NdrFcLong( 0x0 ),	/* 0 */
/* 364 */	NdrFcShort( 0x0 ),	/* 0 */
/* 366 */	NdrFcShort( 0x0 ),	/* 0 */
/* 368 */	0xc0,		/* 192 */
			0x0,		/* 0 */
/* 370 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 372 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 374 */	0x0,		/* 0 */
			0x46,		/* 70 */
/* 376 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 378 */	NdrFcLong( 0x20400 ),	/* 132096 */
/* 382 */	NdrFcShort( 0x0 ),	/* 0 */
/* 384 */	NdrFcShort( 0x0 ),	/* 0 */
/* 386 */	0xc0,		/* 192 */
			0x0,		/* 0 */
/* 388 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 390 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 392 */	0x0,		/* 0 */
			0x46,		/* 70 */
/* 394 */	
			0x12, 0x10,	/* FC_UP [pointer_deref] */
/* 396 */	NdrFcShort( 0x2 ),	/* Offset= 2 (398) */
/* 398 */	
			0x12, 0x0,	/* FC_UP */
/* 400 */	NdrFcShort( 0x1e4 ),	/* Offset= 484 (884) */
/* 402 */	
			0x2a,		/* FC_ENCAPSULATED_UNION */
			0x89,		/* 137 */
/* 404 */	NdrFcShort( 0x20 ),	/* 32 */
/* 406 */	NdrFcShort( 0xa ),	/* 10 */
/* 408 */	NdrFcLong( 0x8 ),	/* 8 */
/* 412 */	NdrFcShort( 0x50 ),	/* Offset= 80 (492) */
/* 414 */	NdrFcLong( 0xd ),	/* 13 */
/* 418 */	NdrFcShort( 0x70 ),	/* Offset= 112 (530) */
/* 420 */	NdrFcLong( 0x9 ),	/* 9 */
/* 424 */	NdrFcShort( 0x90 ),	/* Offset= 144 (568) */
/* 426 */	NdrFcLong( 0xc ),	/* 12 */
/* 430 */	NdrFcShort( 0xb0 ),	/* Offset= 176 (606) */
/* 432 */	NdrFcLong( 0x24 ),	/* 36 */
/* 436 */	NdrFcShort( 0x102 ),	/* Offset= 258 (694) */
/* 438 */	NdrFcLong( 0x800d ),	/* 32781 */
/* 442 */	NdrFcShort( 0x11e ),	/* Offset= 286 (728) */
/* 444 */	NdrFcLong( 0x10 ),	/* 16 */
/* 448 */	NdrFcShort( 0x138 ),	/* Offset= 312 (760) */
/* 450 */	NdrFcLong( 0x2 ),	/* 2 */
/* 454 */	NdrFcShort( 0x14e ),	/* Offset= 334 (788) */
/* 456 */	NdrFcLong( 0x3 ),	/* 3 */
/* 460 */	NdrFcShort( 0x164 ),	/* Offset= 356 (816) */
/* 462 */	NdrFcLong( 0x14 ),	/* 20 */
/* 466 */	NdrFcShort( 0x17a ),	/* Offset= 378 (844) */
/* 468 */	NdrFcShort( 0xffff ),	/* Offset= -1 (467) */
/* 470 */	
			0x21,		/* FC_BOGUS_ARRAY */
			0x3,		/* 3 */
/* 472 */	NdrFcShort( 0x0 ),	/* 0 */
/* 474 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 476 */	NdrFcShort( 0x0 ),	/* 0 */
/* 478 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 480 */	NdrFcLong( 0xffffffff ),	/* -1 */
/* 484 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 486 */	
			0x12, 0x0,	/* FC_UP */
/* 488 */	NdrFcShort( 0xff74 ),	/* Offset= -140 (348) */
/* 490 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 492 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 494 */	NdrFcShort( 0x10 ),	/* 16 */
/* 496 */	NdrFcShort( 0x0 ),	/* 0 */
/* 498 */	NdrFcShort( 0x6 ),	/* Offset= 6 (504) */
/* 500 */	0x8,		/* FC_LONG */
			0x40,		/* FC_STRUCTPAD4 */
/* 502 */	0x36,		/* FC_POINTER */
			0x5b,		/* FC_END */
/* 504 */	
			0x11, 0x0,	/* FC_RP */
/* 506 */	NdrFcShort( 0xffdc ),	/* Offset= -36 (470) */
/* 508 */	
			0x21,		/* FC_BOGUS_ARRAY */
			0x3,		/* 3 */
/* 510 */	NdrFcShort( 0x0 ),	/* 0 */
/* 512 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 514 */	NdrFcShort( 0x0 ),	/* 0 */
/* 516 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 518 */	NdrFcLong( 0xffffffff ),	/* -1 */
/* 522 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 524 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 526 */	NdrFcShort( 0xff58 ),	/* Offset= -168 (358) */
/* 528 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 530 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 532 */	NdrFcShort( 0x10 ),	/* 16 */
/* 534 */	NdrFcShort( 0x0 ),	/* 0 */
/* 536 */	NdrFcShort( 0x6 ),	/* Offset= 6 (542) */
/* 538 */	0x8,		/* FC_LONG */
			0x40,		/* FC_STRUCTPAD4 */
/* 540 */	0x36,		/* FC_POINTER */
			0x5b,		/* FC_END */
/* 542 */	
			0x11, 0x0,	/* FC_RP */
/* 544 */	NdrFcShort( 0xffdc ),	/* Offset= -36 (508) */
/* 546 */	
			0x21,		/* FC_BOGUS_ARRAY */
			0x3,		/* 3 */
/* 548 */	NdrFcShort( 0x0 ),	/* 0 */
/* 550 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 552 */	NdrFcShort( 0x0 ),	/* 0 */
/* 554 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 556 */	NdrFcLong( 0xffffffff ),	/* -1 */
/* 560 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 562 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 564 */	NdrFcShort( 0xff44 ),	/* Offset= -188 (376) */
/* 566 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 568 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 570 */	NdrFcShort( 0x10 ),	/* 16 */
/* 572 */	NdrFcShort( 0x0 ),	/* 0 */
/* 574 */	NdrFcShort( 0x6 ),	/* Offset= 6 (580) */
/* 576 */	0x8,		/* FC_LONG */
			0x40,		/* FC_STRUCTPAD4 */
/* 578 */	0x36,		/* FC_POINTER */
			0x5b,		/* FC_END */
/* 580 */	
			0x11, 0x0,	/* FC_RP */
/* 582 */	NdrFcShort( 0xffdc ),	/* Offset= -36 (546) */
/* 584 */	
			0x21,		/* FC_BOGUS_ARRAY */
			0x3,		/* 3 */
/* 586 */	NdrFcShort( 0x0 ),	/* 0 */
/* 588 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 590 */	NdrFcShort( 0x0 ),	/* 0 */
/* 592 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 594 */	NdrFcLong( 0xffffffff ),	/* -1 */
/* 598 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 600 */	
			0x12, 0x0,	/* FC_UP */
/* 602 */	NdrFcShort( 0x176 ),	/* Offset= 374 (976) */
/* 604 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 606 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 608 */	NdrFcShort( 0x10 ),	/* 16 */
/* 610 */	NdrFcShort( 0x0 ),	/* 0 */
/* 612 */	NdrFcShort( 0x6 ),	/* Offset= 6 (618) */
/* 614 */	0x8,		/* FC_LONG */
			0x40,		/* FC_STRUCTPAD4 */
/* 616 */	0x36,		/* FC_POINTER */
			0x5b,		/* FC_END */
/* 618 */	
			0x11, 0x0,	/* FC_RP */
/* 620 */	NdrFcShort( 0xffdc ),	/* Offset= -36 (584) */
/* 622 */	
			0x2f,		/* FC_IP */
			0x5a,		/* FC_CONSTANT_IID */
/* 624 */	NdrFcLong( 0x2f ),	/* 47 */
/* 628 */	NdrFcShort( 0x0 ),	/* 0 */
/* 630 */	NdrFcShort( 0x0 ),	/* 0 */
/* 632 */	0xc0,		/* 192 */
			0x0,		/* 0 */
/* 634 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 636 */	0x0,		/* 0 */
			0x0,		/* 0 */
/* 638 */	0x0,		/* 0 */
			0x46,		/* 70 */
/* 640 */	
			0x1b,		/* FC_CARRAY */
			0x0,		/* 0 */
/* 642 */	NdrFcShort( 0x1 ),	/* 1 */
/* 644 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 646 */	NdrFcShort( 0x4 ),	/* 4 */
/* 648 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 650 */	0x1,		/* FC_BYTE */
			0x5b,		/* FC_END */
/* 652 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 654 */	NdrFcShort( 0x18 ),	/* 24 */
/* 656 */	NdrFcShort( 0x0 ),	/* 0 */
/* 658 */	NdrFcShort( 0xa ),	/* Offset= 10 (668) */
/* 660 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 662 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 664 */	NdrFcShort( 0xffd6 ),	/* Offset= -42 (622) */
/* 666 */	0x36,		/* FC_POINTER */
			0x5b,		/* FC_END */
/* 668 */	
			0x12, 0x0,	/* FC_UP */
/* 670 */	NdrFcShort( 0xffe2 ),	/* Offset= -30 (640) */
/* 672 */	
			0x21,		/* FC_BOGUS_ARRAY */
			0x3,		/* 3 */
/* 674 */	NdrFcShort( 0x0 ),	/* 0 */
/* 676 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 678 */	NdrFcShort( 0x0 ),	/* 0 */
/* 680 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 682 */	NdrFcLong( 0xffffffff ),	/* -1 */
/* 686 */	NdrFcShort( 0x0 ),	/* Corr flags:  */
/* 688 */	
			0x12, 0x0,	/* FC_UP */
/* 690 */	NdrFcShort( 0xffda ),	/* Offset= -38 (652) */
/* 692 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 694 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 696 */	NdrFcShort( 0x10 ),	/* 16 */
/* 698 */	NdrFcShort( 0x0 ),	/* 0 */
/* 700 */	NdrFcShort( 0x6 ),	/* Offset= 6 (706) */
/* 702 */	0x8,		/* FC_LONG */
			0x40,		/* FC_STRUCTPAD4 */
/* 704 */	0x36,		/* FC_POINTER */
			0x5b,		/* FC_END */
/* 706 */	
			0x11, 0x0,	/* FC_RP */
/* 708 */	NdrFcShort( 0xffdc ),	/* Offset= -36 (672) */
/* 710 */	
			0x1d,		/* FC_SMFARRAY */
			0x0,		/* 0 */
/* 712 */	NdrFcShort( 0x8 ),	/* 8 */
/* 714 */	0x1,		/* FC_BYTE */
			0x5b,		/* FC_END */
/* 716 */	
			0x15,		/* FC_STRUCT */
			0x3,		/* 3 */
/* 718 */	NdrFcShort( 0x10 ),	/* 16 */
/* 720 */	0x8,		/* FC_LONG */
			0x6,		/* FC_SHORT */
/* 722 */	0x6,		/* FC_SHORT */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 724 */	0x0,		/* 0 */
			NdrFcShort( 0xfff1 ),	/* Offset= -15 (710) */
			0x5b,		/* FC_END */
/* 728 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 730 */	NdrFcShort( 0x20 ),	/* 32 */
/* 732 */	NdrFcShort( 0x0 ),	/* 0 */
/* 734 */	NdrFcShort( 0xa ),	/* Offset= 10 (744) */
/* 736 */	0x8,		/* FC_LONG */
			0x40,		/* FC_STRUCTPAD4 */
/* 738 */	0x36,		/* FC_POINTER */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 740 */	0x0,		/* 0 */
			NdrFcShort( 0xffe7 ),	/* Offset= -25 (716) */
			0x5b,		/* FC_END */
/* 744 */	
			0x11, 0x0,	/* FC_RP */
/* 746 */	NdrFcShort( 0xff12 ),	/* Offset= -238 (508) */
/* 748 */	
			0x1b,		/* FC_CARRAY */
			0x0,		/* 0 */
/* 750 */	NdrFcShort( 0x1 ),	/* 1 */
/* 752 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 754 */	NdrFcShort( 0x0 ),	/* 0 */
/* 756 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 758 */	0x1,		/* FC_BYTE */
			0x5b,		/* FC_END */
/* 760 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 762 */	NdrFcShort( 0x10 ),	/* 16 */
/* 764 */	NdrFcShort( 0x0 ),	/* 0 */
/* 766 */	NdrFcShort( 0x6 ),	/* Offset= 6 (772) */
/* 768 */	0x8,		/* FC_LONG */
			0x40,		/* FC_STRUCTPAD4 */
/* 770 */	0x36,		/* FC_POINTER */
			0x5b,		/* FC_END */
/* 772 */	
			0x12, 0x0,	/* FC_UP */
/* 774 */	NdrFcShort( 0xffe6 ),	/* Offset= -26 (748) */
/* 776 */	
			0x1b,		/* FC_CARRAY */
			0x1,		/* 1 */
/* 778 */	NdrFcShort( 0x2 ),	/* 2 */
/* 780 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 782 */	NdrFcShort( 0x0 ),	/* 0 */
/* 784 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 786 */	0x6,		/* FC_SHORT */
			0x5b,		/* FC_END */
/* 788 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 790 */	NdrFcShort( 0x10 ),	/* 16 */
/* 792 */	NdrFcShort( 0x0 ),	/* 0 */
/* 794 */	NdrFcShort( 0x6 ),	/* Offset= 6 (800) */
/* 796 */	0x8,		/* FC_LONG */
			0x40,		/* FC_STRUCTPAD4 */
/* 798 */	0x36,		/* FC_POINTER */
			0x5b,		/* FC_END */
/* 800 */	
			0x12, 0x0,	/* FC_UP */
/* 802 */	NdrFcShort( 0xffe6 ),	/* Offset= -26 (776) */
/* 804 */	
			0x1b,		/* FC_CARRAY */
			0x3,		/* 3 */
/* 806 */	NdrFcShort( 0x4 ),	/* 4 */
/* 808 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 810 */	NdrFcShort( 0x0 ),	/* 0 */
/* 812 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 814 */	0x8,		/* FC_LONG */
			0x5b,		/* FC_END */
/* 816 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 818 */	NdrFcShort( 0x10 ),	/* 16 */
/* 820 */	NdrFcShort( 0x0 ),	/* 0 */
/* 822 */	NdrFcShort( 0x6 ),	/* Offset= 6 (828) */
/* 824 */	0x8,		/* FC_LONG */
			0x40,		/* FC_STRUCTPAD4 */
/* 826 */	0x36,		/* FC_POINTER */
			0x5b,		/* FC_END */
/* 828 */	
			0x12, 0x0,	/* FC_UP */
/* 830 */	NdrFcShort( 0xffe6 ),	/* Offset= -26 (804) */
/* 832 */	
			0x1b,		/* FC_CARRAY */
			0x7,		/* 7 */
/* 834 */	NdrFcShort( 0x8 ),	/* 8 */
/* 836 */	0x19,		/* Corr desc:  field pointer, FC_ULONG */
			0x0,		/*  */
/* 838 */	NdrFcShort( 0x0 ),	/* 0 */
/* 840 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 842 */	0xb,		/* FC_HYPER */
			0x5b,		/* FC_END */
/* 844 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 846 */	NdrFcShort( 0x10 ),	/* 16 */
/* 848 */	NdrFcShort( 0x0 ),	/* 0 */
/* 850 */	NdrFcShort( 0x6 ),	/* Offset= 6 (856) */
/* 852 */	0x8,		/* FC_LONG */
			0x40,		/* FC_STRUCTPAD4 */
/* 854 */	0x36,		/* FC_POINTER */
			0x5b,		/* FC_END */
/* 856 */	
			0x12, 0x0,	/* FC_UP */
/* 858 */	NdrFcShort( 0xffe6 ),	/* Offset= -26 (832) */
/* 860 */	
			0x15,		/* FC_STRUCT */
			0x3,		/* 3 */
/* 862 */	NdrFcShort( 0x8 ),	/* 8 */
/* 864 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 866 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 868 */	
			0x1b,		/* FC_CARRAY */
			0x3,		/* 3 */
/* 870 */	NdrFcShort( 0x8 ),	/* 8 */
/* 872 */	0x7,		/* Corr desc: FC_USHORT */
			0x0,		/*  */
/* 874 */	NdrFcShort( 0xffc8 ),	/* -56 */
/* 876 */	NdrFcShort( 0x1 ),	/* Corr flags:  early, */
/* 878 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 880 */	NdrFcShort( 0xffec ),	/* Offset= -20 (860) */
/* 882 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 884 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x3,		/* 3 */
/* 886 */	NdrFcShort( 0x38 ),	/* 56 */
/* 888 */	NdrFcShort( 0xffec ),	/* Offset= -20 (868) */
/* 890 */	NdrFcShort( 0x0 ),	/* Offset= 0 (890) */
/* 892 */	0x6,		/* FC_SHORT */
			0x6,		/* FC_SHORT */
/* 894 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 896 */	0x40,		/* FC_STRUCTPAD4 */
			0x4c,		/* FC_EMBEDDED_COMPLEX */
/* 898 */	0x0,		/* 0 */
			NdrFcShort( 0xfe0f ),	/* Offset= -497 (402) */
			0x5b,		/* FC_END */
/* 902 */	
			0x12, 0x0,	/* FC_UP */
/* 904 */	NdrFcShort( 0xff04 ),	/* Offset= -252 (652) */
/* 906 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 908 */	0x1,		/* FC_BYTE */
			0x5c,		/* FC_PAD */
/* 910 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 912 */	0x6,		/* FC_SHORT */
			0x5c,		/* FC_PAD */
/* 914 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 916 */	0x8,		/* FC_LONG */
			0x5c,		/* FC_PAD */
/* 918 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 920 */	0xb,		/* FC_HYPER */
			0x5c,		/* FC_PAD */
/* 922 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 924 */	0xa,		/* FC_FLOAT */
			0x5c,		/* FC_PAD */
/* 926 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 928 */	0xc,		/* FC_DOUBLE */
			0x5c,		/* FC_PAD */
/* 930 */	
			0x12, 0x0,	/* FC_UP */
/* 932 */	NdrFcShort( 0xfda2 ),	/* Offset= -606 (326) */
/* 934 */	
			0x12, 0x10,	/* FC_UP [pointer_deref] */
/* 936 */	NdrFcShort( 0xfda4 ),	/* Offset= -604 (332) */
/* 938 */	
			0x12, 0x10,	/* FC_UP [pointer_deref] */
/* 940 */	NdrFcShort( 0xfdba ),	/* Offset= -582 (358) */
/* 942 */	
			0x12, 0x10,	/* FC_UP [pointer_deref] */
/* 944 */	NdrFcShort( 0xfdc8 ),	/* Offset= -568 (376) */
/* 946 */	
			0x12, 0x10,	/* FC_UP [pointer_deref] */
/* 948 */	NdrFcShort( 0xfdd6 ),	/* Offset= -554 (394) */
/* 950 */	
			0x12, 0x10,	/* FC_UP [pointer_deref] */
/* 952 */	NdrFcShort( 0x2 ),	/* Offset= 2 (954) */
/* 954 */	
			0x12, 0x0,	/* FC_UP */
/* 956 */	NdrFcShort( 0x14 ),	/* Offset= 20 (976) */
/* 958 */	
			0x15,		/* FC_STRUCT */
			0x7,		/* 7 */
/* 960 */	NdrFcShort( 0x10 ),	/* 16 */
/* 962 */	0x6,		/* FC_SHORT */
			0x1,		/* FC_BYTE */
/* 964 */	0x1,		/* FC_BYTE */
			0x8,		/* FC_LONG */
/* 966 */	0xb,		/* FC_HYPER */
			0x5b,		/* FC_END */
/* 968 */	
			0x12, 0x0,	/* FC_UP */
/* 970 */	NdrFcShort( 0xfff4 ),	/* Offset= -12 (958) */
/* 972 */	
			0x12, 0x8,	/* FC_UP [simple_pointer] */
/* 974 */	0x2,		/* FC_CHAR */
			0x5c,		/* FC_PAD */
/* 976 */	
			0x1a,		/* FC_BOGUS_STRUCT */
			0x7,		/* 7 */
/* 978 */	NdrFcShort( 0x20 ),	/* 32 */
/* 980 */	NdrFcShort( 0x0 ),	/* 0 */
/* 982 */	NdrFcShort( 0x0 ),	/* Offset= 0 (982) */
/* 984 */	0x8,		/* FC_LONG */
			0x8,		/* FC_LONG */
/* 986 */	0x6,		/* FC_SHORT */
			0x6,		/* FC_SHORT */
/* 988 */	0x6,		/* FC_SHORT */
			0x6,		/* FC_SHORT */
/* 990 */	0x4c,		/* FC_EMBEDDED_COMPLEX */
			0x0,		/* 0 */
/* 992 */	NdrFcShort( 0xfc3c ),	/* Offset= -964 (28) */
/* 994 */	0x5c,		/* FC_PAD */
			0x5b,		/* FC_END */
/* 996 */	0xb4,		/* FC_USER_MARSHAL */
			0x83,		/* 131 */
/* 998 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1000 */	NdrFcShort( 0x18 ),	/* 24 */
/* 1002 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1004 */	NdrFcShort( 0xfc2c ),	/* Offset= -980 (24) */
/* 1006 */	0xb4,		/* FC_USER_MARSHAL */
			0x83,		/* 131 */
/* 1008 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1010 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1012 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1014 */	NdrFcShort( 0xfd56 ),	/* Offset= -682 (332) */
/* 1016 */	
			0x11, 0x4,	/* FC_RP [alloced_on_stack] */
/* 1018 */	NdrFcShort( 0x6 ),	/* Offset= 6 (1024) */
/* 1020 */	
			0x13, 0x0,	/* FC_OP */
/* 1022 */	NdrFcShort( 0xfd5e ),	/* Offset= -674 (348) */
/* 1024 */	0xb4,		/* FC_USER_MARSHAL */
			0x83,		/* 131 */
/* 1026 */	NdrFcShort( 0x1 ),	/* 1 */
/* 1028 */	NdrFcShort( 0x8 ),	/* 8 */
/* 1030 */	NdrFcShort( 0x0 ),	/* 0 */
/* 1032 */	NdrFcShort( 0xfff4 ),	/* Offset= -12 (1020) */

			0x0
        }
    };

static const USER_MARSHAL_ROUTINE_QUADRUPLE UserMarshalRoutines[ WIRE_MARSHAL_TABLE_SIZE ] = 
        {
            
            {
            VARIANT_UserSize
            ,VARIANT_UserMarshal
            ,VARIANT_UserUnmarshal
            ,VARIANT_UserFree
            },
            {
            BSTR_UserSize
            ,BSTR_UserMarshal
            ,BSTR_UserUnmarshal
            ,BSTR_UserFree
            }

        };



/* Object interface: IUnknown, ver. 0.0,
   GUID={0x00000000,0x0000,0x0000,{0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x46}} */


/* Object interface: IDispatch, ver. 0.0,
   GUID={0x00020400,0x0000,0x0000,{0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x46}} */


/* Object interface: IClass1, ver. 0.0,
   GUID={0xB54A1F15,0xCCD5,0x4C6B,{0xAA,0x30,0x69,0xF2,0xBE,0x0C,0xEC,0x65}} */

#pragma code_seg(".orpc")
static const unsigned short IClass1_FormatStringOffsetTable[] =
    {
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    (unsigned short) -1,
    0,
    38,
    76,
    132
    };

static const MIDL_STUBLESS_PROXY_INFO IClass1_ProxyInfo =
    {
    &Object_StubDesc,
    manualint_idl__MIDL_ProcFormatString.Format,
    &IClass1_FormatStringOffsetTable[-3],
    0,
    0,
    0
    };


static const MIDL_SERVER_INFO IClass1_ServerInfo = 
    {
    &Object_StubDesc,
    0,
    manualint_idl__MIDL_ProcFormatString.Format,
    &IClass1_FormatStringOffsetTable[-3],
    0,
    0,
    0,
    0};
CINTERFACE_PROXY_VTABLE(11) _IClass1ProxyVtbl = 
{
    &IClass1_ProxyInfo,
    &IID_IClass1,
    IUnknown_QueryInterface_Proxy,
    IUnknown_AddRef_Proxy,
    IUnknown_Release_Proxy ,
    0 /* IDispatch::GetTypeInfoCount */ ,
    0 /* IDispatch::GetTypeInfo */ ,
    0 /* IDispatch::GetIDsOfNames */ ,
    0 /* IDispatch_Invoke_Proxy */ ,
    (void *) (INT_PTR) -1 /* IClass1::get_MWFlags */ ,
    (void *) (INT_PTR) -1 /* IClass1::put_MWFlags */ ,
    (void *) (INT_PTR) -1 /* IClass1::manualint */ ,
    (void *) (INT_PTR) -1 /* IClass1::get_help */
};


static const PRPC_STUB_FUNCTION IClass1_table[] =
{
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    STUB_FORWARDING_FUNCTION,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2,
    NdrStubCall2
};

CInterfaceStubVtbl _IClass1StubVtbl =
{
    &IID_IClass1,
    &IClass1_ServerInfo,
    11,
    &IClass1_table[-3],
    CStdStubBuffer_DELEGATING_METHODS
};

static const MIDL_STUB_DESC Object_StubDesc = 
    {
    0,
    NdrOleAllocate,
    NdrOleFree,
    0,
    0,
    0,
    0,
    0,
    manualint_idl__MIDL_TypeFormatString.Format,
    1, /* -error bounds_check flag */
    0x50002, /* Ndr library version */
    0,
    0x700022b, /* MIDL Version 7.0.555 */
    0,
    UserMarshalRoutines,
    0,  /* notify & notify_flag routine table */
    0x1, /* MIDL flag */
    0, /* cs routines */
    0,   /* proxy/server info */
    0
    };

const CInterfaceProxyVtbl * const _manualint_idl_ProxyVtblList[] = 
{
    ( CInterfaceProxyVtbl *) &_IClass1ProxyVtbl,
    0
};

const CInterfaceStubVtbl * const _manualint_idl_StubVtblList[] = 
{
    ( CInterfaceStubVtbl *) &_IClass1StubVtbl,
    0
};

PCInterfaceName const _manualint_idl_InterfaceNamesList[] = 
{
    "IClass1",
    0
};

const IID *  const _manualint_idl_BaseIIDList[] = 
{
    &IID_IDispatch,
    0
};


#define _manualint_idl_CHECK_IID(n)	IID_GENERIC_CHECK_IID( _manualint_idl, pIID, n)

int __stdcall _manualint_idl_IID_Lookup( const IID * pIID, int * pIndex )
{
    
    if(!_manualint_idl_CHECK_IID(0))
        {
        *pIndex = 0;
        return 1;
        }

    return 0;
}

const ExtendedProxyFileInfo manualint_idl_ProxyFileInfo = 
{
    (PCInterfaceProxyVtblList *) & _manualint_idl_ProxyVtblList,
    (PCInterfaceStubVtblList *) & _manualint_idl_StubVtblList,
    (const PCInterfaceName * ) & _manualint_idl_InterfaceNamesList,
    (const IID ** ) & _manualint_idl_BaseIIDList,
    & _manualint_idl_IID_Lookup, 
    1,
    2,
    0, /* table of [async_uuid] interfaces */
    0, /* Filler1 */
    0, /* Filler2 */
    0  /* Filler3 */
};
#if _MSC_VER >= 1200
#pragma warning(pop)
#endif


#endif /* defined(_M_IA64) */

