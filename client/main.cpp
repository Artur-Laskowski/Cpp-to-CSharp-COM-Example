#import "cpp-com-stack.tlb" no_namespace
#include <iostream>
#include <Windows.h>

int main()
{
	CoInitializeEx(NULL, COINIT_APARTMENTTHREADED);
	//IStosPtr myPtr(__uuidof(IStos));
	IStack* myPtr = nullptr;
	CLSID clsid = __uuidof(Stack);
	//CLSIDFromProgID(OLESTR("al.stack.1"), &clsid);
	//ITypeLib *pptlib;
	HRESULT rv = CoCreateInstance(clsid, NULL, CLSCTX_INPROC_SERVER, __uuidof(IStack), reinterpret_cast<LPVOID *>(&myPtr));

	//HRESULT rv2 = LoadRegTypeLib(
	//	__uuidof(__ALStack),
	//	1,
	//	0,
	//	2057,
	//	&pptlib
	//);
	//rv2 = pptlib->QueryInterface(IID_IClassFactory, (void**)&myPtr);
	//pptlib->
	int a = 0;
	std::cout << myPtr->Push(69) << std::endl;
	std::cout << myPtr->Push(69) << std::endl;
	myPtr->Pop(&a);
	std::cout << &a << ", val:" << a << std::endl;
	myPtr->Pop(&a);
	std::cout << &a << ", val:" << a << std::endl;
	std::cout << a << std::endl;
	myPtr->Release();
	//pptlib->Release();
	CoUninitialize();
	return 0;
}

