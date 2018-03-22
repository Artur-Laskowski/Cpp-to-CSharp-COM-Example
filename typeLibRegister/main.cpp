#include <windows.h>
#include "oleauto.h"
#include "..\cpp-com-stack\ALStackTypeLib_h.h"

int main() {
	HRESULT rc;
	OLECHAR filename[MAX_PATH];
	ITypeLib *tl;
	CoInitializeEx(NULL, COINIT_APARTMENTTHREADED);

	mbstowcs(filename, "..\\cpp-com-stack\\Debug\\cpp-com-stack.tlb", sizeof(filename));
	rc = LoadTypeLibEx(filename, REGKIND_REGISTER, &tl);
	if (rc == S_OK) tl->Release();

	//rc = UnRegisterTypeLib(LIBID_ALStack, 1, 0, LANG_NEUTRAL, SYS_WIN32);
	CoUninitialize();
	return 0;
};
