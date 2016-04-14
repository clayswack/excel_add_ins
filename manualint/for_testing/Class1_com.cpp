#include "Class1_com.hpp"
#include <string>

const wchar_t * Class1::manualint_help = L"\n Take Chroatogram data, identify peaks, determine area under the curve\
\nuse inputs x = data frame (times on left, signal on right - highlight all of both columns\
\ny = trigger height- single number\
\ns = start of peak (value on x axis)\
\ne = end of peak (value on x axis)\
\nClay Swackhamer 2016";
std::map<std::string, const wchar_t*> Class1::help_map = createHelpMap();
Class1::Class1()
{
  g_pModule->InitializeComponentInstanceEx(&m_hinst);
}
Class1::~Class1()
{
  if (m_hinst)
    g_pModule->TerminateInstance(&m_hinst);
}
HRESULT __stdcall Class1::get_help(/*[in]*/ BSTR bstrName, /*[out, retval*/ BSTR* pbstrText)
{
  int wslen = SysStringLen(bstrName);
  int len = ::WideCharToMultiByte(CP_ACP, 0, (wchar_t*)bstrName, wslen, NULL, 0, NULL, NULL);
  std::string strName(len, '\0');
  len = ::WideCharToMultiByte(CP_ACP, 0 /* no flags */,
                             (wchar_t*)bstrName, wslen /* not necessary NULL-terminated */,
                             &strName[0], len,
                             NULL, NULL /* no default char */);
  const wchar_t* help = help_map[strName];
  if (help != NULL)
  {
    *pbstrText = SysAllocString(help);
  }
  else
  {
    *pbstrText = SysAllocString(L"");
  }
  return S_OK;
}
std::map<std::string, const wchar_t*> Class1::createHelpMap()
{
  std::map<std::string, const wchar_t*> helpMap;
  helpMap["manualint"] = manualint_help;
  return helpMap;
}

HRESULT __stdcall Class1::manualint(/*[in]*/VARIANT x, /*[in]*/VARIANT y, /*[in]*/VARIANT 
                                     s, /*[in]*/VARIANT e) {
  return( CallComFcn( "manualint", 0, 0, 4, &x, &y, &s, &e ) );
}
