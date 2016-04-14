#ifndef _manualint_Class1_com_HPP
#define _manualint_Class1_com_HPP 1

#include <windows.h>
#include "manualint_idl.h"
#include "mclmcrrt.h"
#include "mclcom.h"
#include "mclxlmain.h"
#include "mclcomclass.h"

class Class1 : public CMCLClassImpl<IClass1, &IID_IClass1, Class1, &CLSID_Class1>
{
public:
  Class1();
  ~Class1();
  HRESULT __stdcall get_help(/*[in]*/ BSTR funcname, /*[out, retval*/ BSTR* text);

  HRESULT __stdcall manualint(/*[in]*/VARIANT x, /*[in]*/VARIANT y, /*[in]*/VARIANT s, 
                              /*[in]*/VARIANT e); 
private:
  static std::map<std::string, const wchar_t*> help_map;
  static std::map<std::string, const wchar_t*> createHelpMap();
  static const wchar_t * manualint_help;
};
#endif
