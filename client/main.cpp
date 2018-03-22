#import "cpp-com-stack.tlb" no_namespace
#include <iostream>
#include <Windows.h>

int main()
{
	CoInitializeEx(NULL, COINIT_APARTMENTTHREADED);

	IStack* myPtr = nullptr;
	CLSID clsid = __uuidof(Stack);

	HRESULT rv = CoCreateInstance(clsid, NULL, CLSCTX_INPROC_SERVER, __uuidof(IStack), reinterpret_cast<LPVOID *>(&myPtr));

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

