#pragma once
#include <string>
#include <msclr\marshal_cppstd.h>
using namespace System;
static const std::string SysToStd(System::String^ SysStr) //System::String^ переводит в std::string
{
	using namespace Runtime::InteropServices;
	char *v = (char*)(Marshal::StringToHGlobalAnsi(SysStr)).ToPointer();
	std::string result = std::string(v);
	Marshal::FreeHGlobal(System::IntPtr((void*)v));
	return result;
}
static System::String^ StdToSys(std::string StdStr) //std::string переводит в System::String^
{
	return gcnew System::String(StdStr.c_str());
}
