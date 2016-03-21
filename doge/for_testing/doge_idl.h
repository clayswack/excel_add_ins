

/* this ALWAYS GENERATED file contains the definitions for the interfaces */


 /* File created by MIDL compiler version 7.00.0555 */
/* at Wed Mar 16 13:33:09 2016
 */
/* Compiler settings for C:\Users\Cole Swackhamer\Documents\MATLAB\doge\for_testing\doge_idl.idl:
    Oicf, W1, Zp8, env=Win64 (32b run), target_arch=IA64 7.00.0555 
    protocol : dce , ms_ext, c_ext, robust
    error checks: allocation ref bounds_check enum stub_data 
    VC __declspec() decoration level: 
         __declspec(uuid()), __declspec(selectany), __declspec(novtable)
         DECLSPEC_UUID(), MIDL_INTERFACE()
*/
/* @@MIDL_FILE_HEADING(  ) */

#pragma warning( disable: 4049 )  /* more than 64k source lines */


/* verify that the <rpcndr.h> version is high enough to compile this file*/
#ifndef __REQUIRED_RPCNDR_H_VERSION__
#define __REQUIRED_RPCNDR_H_VERSION__ 475
#endif

#include "rpc.h"
#include "rpcndr.h"

#ifndef __RPCNDR_H_VERSION__
#error this stub requires an updated version of <rpcndr.h>
#endif // __RPCNDR_H_VERSION__

#ifndef COM_NO_WINDOWS_H
#include "windows.h"
#include "ole2.h"
#endif /*COM_NO_WINDOWS_H*/

#ifndef __doge_idl_h__
#define __doge_idl_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

/* Forward Declarations */ 

#ifndef __IClass1_FWD_DEFINED__
#define __IClass1_FWD_DEFINED__
typedef interface IClass1 IClass1;
#endif 	/* __IClass1_FWD_DEFINED__ */


#ifndef __Class1_FWD_DEFINED__
#define __Class1_FWD_DEFINED__

#ifdef __cplusplus
typedef class Class1 Class1;
#else
typedef struct Class1 Class1;
#endif /* __cplusplus */

#endif 	/* __Class1_FWD_DEFINED__ */


/* header files for imported files */
#include "oaidl.h"
#include "ocidl.h"
#include "mwcomtypes.h"

#ifdef __cplusplus
extern "C"{
#endif 


#ifndef __IClass1_INTERFACE_DEFINED__
#define __IClass1_INTERFACE_DEFINED__

/* interface IClass1 */
/* [unique][helpstring][dual][uuid][object] */ 


EXTERN_C const IID IID_IClass1;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("86588888-F9B2-4D3B-B001-9F2D97EDC98A")
    IClass1 : public IDispatch
    {
    public:
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_MWFlags( 
            /* [retval][out] */ IMWFlags **ppvFlags) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_MWFlags( 
            /* [in] */ IMWFlags *pvFlags) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE doge( void) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_help( 
            /* [in] */ BSTR funcname,
            /* [retval][out] */ BSTR *helptext) = 0;
        
    };
    
#else 	/* C style interface */

    typedef struct IClass1Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IClass1 * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IClass1 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IClass1 * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IClass1 * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IClass1 * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IClass1 * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IClass1 * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_MWFlags )( 
            IClass1 * This,
            /* [retval][out] */ IMWFlags **ppvFlags);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_MWFlags )( 
            IClass1 * This,
            /* [in] */ IMWFlags *pvFlags);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *doge )( 
            IClass1 * This);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_help )( 
            IClass1 * This,
            /* [in] */ BSTR funcname,
            /* [retval][out] */ BSTR *helptext);
        
        END_INTERFACE
    } IClass1Vtbl;

    interface IClass1
    {
        CONST_VTBL struct IClass1Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IClass1_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IClass1_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IClass1_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IClass1_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IClass1_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IClass1_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IClass1_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IClass1_get_MWFlags(This,ppvFlags)	\
    ( (This)->lpVtbl -> get_MWFlags(This,ppvFlags) ) 

#define IClass1_put_MWFlags(This,pvFlags)	\
    ( (This)->lpVtbl -> put_MWFlags(This,pvFlags) ) 

#define IClass1_doge(This)	\
    ( (This)->lpVtbl -> doge(This) ) 

#define IClass1_get_help(This,funcname,helptext)	\
    ( (This)->lpVtbl -> get_help(This,funcname,helptext) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IClass1_INTERFACE_DEFINED__ */



#ifndef __doge_LIBRARY_DEFINED__
#define __doge_LIBRARY_DEFINED__

/* library doge */
/* [helpstring][version][uuid] */ 


EXTERN_C const IID LIBID_doge;

EXTERN_C const CLSID CLSID_Class1;

#ifdef __cplusplus

class DECLSPEC_UUID("2E3D9C75-F553-4959-925D-07D5C0F69013")
Class1;
#endif
#endif /* __doge_LIBRARY_DEFINED__ */

/* Additional Prototypes for ALL interfaces */

unsigned long             __RPC_USER  BSTR_UserSize(     unsigned long *, unsigned long            , BSTR * ); 
unsigned char * __RPC_USER  BSTR_UserMarshal(  unsigned long *, unsigned char *, BSTR * ); 
unsigned char * __RPC_USER  BSTR_UserUnmarshal(unsigned long *, unsigned char *, BSTR * ); 
void                      __RPC_USER  BSTR_UserFree(     unsigned long *, BSTR * ); 

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


