

/* this ALWAYS GENERATED file contains the IIDs and CLSIDs */

/* link this file in with the server and any clients */


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

#pragma warning( disable: 4049 )  /* more than 64k source lines */


#ifdef __cplusplus
extern "C"{
#endif 


#include <rpc.h>
#include <rpcndr.h>

#ifdef _MIDL_USE_GUIDDEF_

#ifndef INITGUID
#define INITGUID
#include <guiddef.h>
#undef INITGUID
#else
#include <guiddef.h>
#endif

#define MIDL_DEFINE_GUID(type,name,l,w1,w2,b1,b2,b3,b4,b5,b6,b7,b8) \
        DEFINE_GUID(name,l,w1,w2,b1,b2,b3,b4,b5,b6,b7,b8)

#else // !_MIDL_USE_GUIDDEF_

#ifndef __IID_DEFINED__
#define __IID_DEFINED__

typedef struct _IID
{
    unsigned long x;
    unsigned short s1;
    unsigned short s2;
    unsigned char  c[8];
} IID;

#endif // __IID_DEFINED__

#ifndef CLSID_DEFINED
#define CLSID_DEFINED
typedef IID CLSID;
#endif // CLSID_DEFINED

#define MIDL_DEFINE_GUID(type,name,l,w1,w2,b1,b2,b3,b4,b5,b6,b7,b8) \
        const type name = {l,w1,w2,{b1,b2,b3,b4,b5,b6,b7,b8}}

#endif !_MIDL_USE_GUIDDEF_

MIDL_DEFINE_GUID(IID, IID_IClass1,0xB54A1F15,0xCCD5,0x4C6B,0xAA,0x30,0x69,0xF2,0xBE,0x0C,0xEC,0x65);


MIDL_DEFINE_GUID(IID, LIBID_manualint,0x948AB939,0x5EF0,0x468E,0xB6,0xDB,0xEC,0x71,0x6C,0x7E,0x74,0x40);


MIDL_DEFINE_GUID(CLSID, CLSID_Class1,0x36DFDE34,0xC0F3,0x4B0A,0x91,0xF5,0x97,0x3D,0x2B,0xD0,0x07,0xEF);

#undef MIDL_DEFINE_GUID

#ifdef __cplusplus
}
#endif



