#pragma once
#include "ALStackTypeLib_h.h"
#include "Stack.h"

class StackFactory : public IClassFactory {
public:
	StackFactory();
	~StackFactory();

	virtual HRESULT STDMETHODCALLTYPE QueryInterface(REFIID id, void **rv);
	virtual ULONG STDMETHODCALLTYPE AddRef();
	virtual ULONG STDMETHODCALLTYPE Release();

	virtual HRESULT STDMETHODCALLTYPE LockServer(BOOL v);
	virtual HRESULT STDMETHODCALLTYPE CreateInstance(IUnknown *outer,
		REFIID id, void **rv);
private:
	volatile ULONG m_ref;
};