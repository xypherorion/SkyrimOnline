#include "Stdafx.h"
#pragma managed
#include "Debug.h"
#pragma unmanaged
#include "common/skyscript.h"
#pragma managed
using namespace System;


void SkyrimScript::Wrapper::Debug::Notification(System::String^ pstr)
{
	char* str = (char*)(void*)
		Runtime::InteropServices::Marshal::StringToHGlobalAnsi(pstr);

	::Debug::Notification(str);
	::Debug::Notification("toto");

	Runtime::InteropServices::Marshal::FreeHGlobal(IntPtr(str));
}