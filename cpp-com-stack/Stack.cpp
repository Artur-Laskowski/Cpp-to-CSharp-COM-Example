#include "Stack.h"

extern volatile ULONG usageCount;

Stack::Stack() {
	InterlockedIncrement(&usageCount);
	m_ref = 0;

};

Stack::~Stack() {
	InterlockedDecrement(&usageCount);
};

HRESULT STDMETHODCALLTYPE Stack::QueryInterface(REFIID iid, void **ptr) {
	if (ptr == NULL) return E_POINTER;
	*ptr = NULL;
	if (iid == IID_IUnknown) *ptr = this;
	else if (iid == IID_IStack) *ptr = this;
	if (*ptr != NULL) { AddRef(); return S_OK; };
	return E_NOINTERFACE;
};

ULONG STDMETHODCALLTYPE Stack::AddRef() {
	InterlockedIncrement(&m_ref);
	return m_ref;
};

ULONG STDMETHODCALLTYPE Stack::Release() {
	ULONG rv = InterlockedDecrement(&m_ref);
	if (rv == 0) delete this;
	return rv;
};

HRESULT Stack::Push(int val)
{
	return S_OK;
};

HRESULT Stack::Pop(int * val)
{
	*val = 123;
	return S_OK;
};

HRESULT Stack::Top(int * val)
{
	*val = 123;
	return S_OK;
};
