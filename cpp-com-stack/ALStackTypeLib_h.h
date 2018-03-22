

/* this ALWAYS GENERATED file contains the definitions for the interfaces */


 /* File created by MIDL compiler version 8.01.0622 */
/* at Tue Jan 19 04:14:07 2038
 */
/* Compiler settings for ALStackTypeLib.idl:
    Oicf, W1, Zp8, env=Win32 (32b run), target_arch=X86 8.01.0622 
    protocol : dce , ms_ext, c_ext, robust
    error checks: allocation ref bounds_check enum stub_data 
    VC __declspec() decoration level: 
         __declspec(uuid()), __declspec(selectany), __declspec(novtable)
         DECLSPEC_UUID(), MIDL_INTERFACE()
*/
/* @@MIDL_FILE_HEADING(  ) */



/* verify that the <rpcndr.h> version is high enough to compile this file*/
#ifndef __REQUIRED_RPCNDR_H_VERSION__
#define __REQUIRED_RPCNDR_H_VERSION__ 500
#endif

#include "rpc.h"
#include "rpcndr.h"

#ifndef __RPCNDR_H_VERSION__
#error this stub requires an updated version of <rpcndr.h>
#endif /* __RPCNDR_H_VERSION__ */

#ifndef COM_NO_WINDOWS_H
#include "windows.h"
#include "ole2.h"
#endif /*COM_NO_WINDOWS_H*/

#ifndef __ALStackTypeLib_h_h__
#define __ALStackTypeLib_h_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

/* Forward Declarations */ 

#ifndef __IStack_FWD_DEFINED__
#define __IStack_FWD_DEFINED__
typedef interface IStack IStack;

#endif 	/* __IStack_FWD_DEFINED__ */


#ifndef __IStack_FWD_DEFINED__
#define __IStack_FWD_DEFINED__
typedef interface IStack IStack;

#endif 	/* __IStack_FWD_DEFINED__ */


#ifndef __Stack_FWD_DEFINED__
#define __Stack_FWD_DEFINED__

#ifdef __cplusplus
typedef class Stack Stack;
#else
typedef struct Stack Stack;
#endif /* __cplusplus */

#endif 	/* __Stack_FWD_DEFINED__ */


/* header files for imported files */
#include "oaidl.h"
#include "ocidl.h"

#ifdef __cplusplus
extern "C"{
#endif 


#ifndef __IStack_INTERFACE_DEFINED__
#define __IStack_INTERFACE_DEFINED__

/* interface IStack */
/* [uuid][object] */ 


EXTERN_C const IID IID_IStack;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("CF20C977-8743-4521-B2C1-F62CB9417338")
    IStack : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE Push( 
            int val) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Pop( 
            /* [out] */ int *val) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Top( 
            /* [out] */ int *val) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IStackVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IStack * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IStack * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IStack * This);
        
        HRESULT ( STDMETHODCALLTYPE *Push )( 
            IStack * This,
            int val);
        
        HRESULT ( STDMETHODCALLTYPE *Pop )( 
            IStack * This,
            /* [out] */ int *val);
        
        HRESULT ( STDMETHODCALLTYPE *Top )( 
            IStack * This,
            /* [out] */ int *val);
        
        END_INTERFACE
    } IStackVtbl;

    interface IStack
    {
        CONST_VTBL struct IStackVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IStack_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IStack_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IStack_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IStack_Push(This,val)	\
    ( (This)->lpVtbl -> Push(This,val) ) 

#define IStack_Pop(This,val)	\
    ( (This)->lpVtbl -> Pop(This,val) ) 

#define IStack_Top(This,val)	\
    ( (This)->lpVtbl -> Top(This,val) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IStack_INTERFACE_DEFINED__ */



#ifndef __ALStack_LIBRARY_DEFINED__
#define __ALStack_LIBRARY_DEFINED__

/* library ALStack */
/* [version][helpstring][uuid] */ 



EXTERN_C const IID LIBID_ALStack;

EXTERN_C const CLSID CLSID_Stack;

#ifdef __cplusplus

class DECLSPEC_UUID("332F9EFA-2969-4990-83F9-6DB8E91A96F5")
Stack;
#endif
#endif /* __ALStack_LIBRARY_DEFINED__ */

/* Additional Prototypes for ALL interfaces */

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


