#include "StackFactory.h"
#include <new>

volatile ULONG usageCount = 0;
HRESULT __stdcall DllCanUnloadNow() {
	return usageCount > 0 ? S_FALSE : S_OK;
};

HRESULT __stdcall DllGetClassObject(REFCLSID cls, REFIID iid, void **ptr) {
	if (ptr == NULL) return E_INVALIDARG;
	*ptr = NULL;
	if (cls != CLSID_Stack) return CLASS_E_CLASSNOTAVAILABLE;
	if (iid != IID_IUnknown && iid != IID_IClassFactory) return E_NOINTERFACE;
	StackFactory *fact = new (std::nothrow) StackFactory();
	if (fact == NULL) return E_OUTOFMEMORY;
	HRESULT rv = fact->QueryInterface(iid, ptr);
	if (FAILED(rv)) { delete fact; *ptr = NULL; };
	return rv;
};
