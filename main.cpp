#define WIN32_LEAN_AND_MEAN
#define NOMINMAX
#include <Windows.h>
#include <atlconv.h>
#include <string>
#include <iostream>

int main()
{
  const std::wstring& executable_path(L"abcdefg");
  TCHAR*              command_line;
  
  USES_CONVERSION;
  command_line = W2T(const_cast<wchar_t*>(executable_path.c_str()));
  
  std::cout << command_line << std::endl;
  
  return 0;
}