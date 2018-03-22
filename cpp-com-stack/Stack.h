#pragma once
#include "ALStackTypeLib_h.h"

class Stack : public IStack {
public:
	Stack();
	~Stack();
	virtual HRESULT STDMETHODCALLTYPE QueryInterface(REFIID iid, void **ptr);
	virtual ULONG STDMETHODCALLTYPE AddRef();
	virtual ULONG STDMETHODCALLTYPE Release();
	virtual HRESULT STDMETHODCALLTYPE Push(int val);
	virtual HRESULT STDMETHODCALLTYPE Pop(int *val);
	virtual HRESULT STDMETHODCALLTYPE Top(int *val);
private:
	volatile ULONG m_ref;
	
};