#include "StackFactory.h"
#include <new>

extern volatile ULONG usageCount;

StackFactory::StackFactory() {
	usageCount++;
	m_ref = 0;

};

StackFactory::~StackFactory() {
	usageCount--;
};

HRESULT STDMETHODCALLTYPE StackFactory::QueryInterface(REFIID iid, void **ptr) {
	if (ptr == NULL) return E_POINTER;
	*ptr = NULL;
	if (iid == IID_IUnknown) *ptr = this;
	else if (iid == IID_IClassFactory) *ptr = this;
	if (*ptr != NULL) { AddRef(); return S_OK; };
	return E_POINTER;
	//return E_NOINTERFACE;
};

ULONG STDMETHODCALLTYPE StackFactory::AddRef() {
	InterlockedIncrement(&m_ref);
	return m_ref;
};

ULONG STDMETHODCALLTYPE StackFactory::Release() {
	ULONG rv = InterlockedDecrement(&m_ref);
	if (rv == 0) delete this;
	return rv;
};

HRESULT STDMETHODCALLTYPE StackFactory::LockServer(BOOL lock) {
	if (lock) InterlockedIncrement(&usageCount);
	else InterlockedDecrement(&usageCount);
	return S_OK;
};

HRESULT STDMETHODCALLTYPE StackFactory::CreateInstance(IUnknown *outer,
	REFIID iid, void **ptr) {
	if (ptr == NULL) return E_POINTER;
	*ptr = NULL;
	if (iid != IID_IUnknown && iid != IID_IStack) return E_NOINTERFACE;

	Stack *obj = new (std::nothrow) Stack();
	if (obj == NULL) return E_OUTOFMEMORY;
	HRESULT rv = obj->QueryInterface(iid, ptr);
	if (FAILED(rv)) { delete obj; *ptr = NULL; };
	return rv;
};
