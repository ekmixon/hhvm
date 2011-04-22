/*
   +----------------------------------------------------------------------+
   | HipHop for PHP                                                       |
   +----------------------------------------------------------------------+
   | Copyright (c) 2010- Facebook, Inc. (http://www.facebook.com)         |
   | Copyright (c) 1997-2010 The PHP Group                                |
   +----------------------------------------------------------------------+
   | This source file is subject to version 3.01 of the PHP license,      |
   | that is bundled with this package in the file LICENSE, and is        |
   | available through the world-wide-web at the following url:           |
   | http://www.php.net/license/3_01.txt                                  |
   | If you did not receive a copy of the PHP license and are unable to   |
   | obtain it through the world-wide-web, please send a note to          |
   | license@php.net so we can mail you a copy immediately.               |
   +----------------------------------------------------------------------+
*/

#ifndef EXT_ICU_USPOOF_H
#define EXT_ICU_USPOOF_H

// >>>>>> Generated by idl.php. Do NOT modify. <<<<<<

#include <runtime/base/base_includes.h>

// Avoid dragging in the icu namespace.
#ifndef U_USING_ICU_NAMESPACE
#define U_USING_ICU_NAMESPACE 0
#endif

#include "unicode/uspoof.h"
#include "unicode/utypes.h"
namespace HPHP {
///////////////////////////////////////////////////////////////////////////////

extern const int q_SpoofChecker_SINGLE_SCRIPT_CONFUSABLE;
extern const int q_SpoofChecker_MIXED_SCRIPT_CONFUSABLE;
extern const int q_SpoofChecker_WHOLE_SCRIPT_CONFUSABLE;
extern const int q_SpoofChecker_ANY_CASE;
extern const int q_SpoofChecker_SINGLE_SCRIPT;
extern const int q_SpoofChecker_INVISIBLE;
extern const int q_SpoofChecker_CHAR_LIMIT;

///////////////////////////////////////////////////////////////////////////////
// class SpoofChecker

FORWARD_DECLARE_CLASS(SpoofChecker);
class c_SpoofChecker : public ExtObjectData {
 public:
  BEGIN_CLASS_MAP(SpoofChecker)
  END_CLASS_MAP(SpoofChecker)
  DECLARE_CLASS(SpoofChecker, SpoofChecker, ObjectData)

  // need to implement
  public: c_SpoofChecker();
  public: ~c_SpoofChecker();
  public: void t___construct();
  DECLARE_METHOD_INVOKE_HELPERS(__construct);
  public: bool t_issuspicious(CStrRef text, VRefParam issuesFound = null);
  DECLARE_METHOD_INVOKE_HELPERS(issuspicious);
  public: bool t_areconfusable(CStrRef s1, CStrRef s2, VRefParam issuesFound = null);
  DECLARE_METHOD_INVOKE_HELPERS(areconfusable);
  public: void t_setallowedlocales(CStrRef localesList);
  DECLARE_METHOD_INVOKE_HELPERS(setallowedlocales);
  public: void t_setchecks(int checks);
  DECLARE_METHOD_INVOKE_HELPERS(setchecks);
  public: Variant t___destruct();
  DECLARE_METHOD_INVOKE_HELPERS(__destruct);

  // implemented by HPHP
  public: c_SpoofChecker *create();
  public: void dynConstruct(CArrRef Params);
  public: void dynConstructFromEval(Eval::VariableEnvironment &env,
                                    const Eval::FunctionCallExpression *call);
  public: void getConstructor(MethodCallPackage &mcp);
  public: virtual void destruct();

  private: USpoofChecker *m_spoof_checker;
};

///////////////////////////////////////////////////////////////////////////////
}

#endif // EXT_ICU_USPOOF_H
