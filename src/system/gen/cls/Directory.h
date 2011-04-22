/*
   +----------------------------------------------------------------------+
   | HipHop for PHP                                                       |
   +----------------------------------------------------------------------+
   | Copyright (c) 2010- Facebook, Inc. (http://www.facebook.com)         |
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
// @generated by HipHop Compiler

#ifndef __GENERATED_cls_Directory_h6dfdf420__
#define __GENERATED_cls_Directory_h6dfdf420__

#include <cls/Directory.fw.h>

namespace HPHP {
///////////////////////////////////////////////////////////////////////////////

/* SRC: classes/directory.php line 3 */
FORWARD_DECLARE_CLASS(Directory);
class c_Directory : public ExtObjectData {
  public:

  // Properties
  Variant m_path;
  Variant m_handle;

  // Class Map
  virtual bool o_instanceof(CStrRef s) const;
  DECLARE_CLASS_COMMON(Directory, Directory)
  DECLARE_INVOKE_EX(Directory, Directory, ObjectData)

  // DECLARE_STATIC_PROP_OPS
  public:
  static Variant os_getInit(CStrRef s);
  #define OMIT_JUMP_TABLE_CLASS_STATIC_GET_Directory 1
  #define OMIT_JUMP_TABLE_CLASS_STATIC_LVAL_Directory 1
  #define OMIT_JUMP_TABLE_CLASS_CONSTANT_Directory 1

  // DECLARE_INSTANCE_PROP_OPS
  public:
  virtual void o_getArray(Array &props, bool pubOnly = false) const;
  #define OMIT_JUMP_TABLE_CLASS_SETARRAY_Directory 1
  #define OMIT_JUMP_TABLE_CLASS_realProp_Directory 1
  #define OMIT_JUMP_TABLE_CLASS_realProp_PRIVATE_Directory 1

  // DECLARE_INSTANCE_PUBLIC_PROP_OPS
  public:
  virtual Variant *o_realPropPublic(CStrRef s, int flags) const;

  // DECLARE_COMMON_INVOKE
  static bool os_get_call_info(MethodCallPackage &mcp, int64 hash = -1);
  #define OMIT_JUMP_TABLE_CLASS_STATIC_INVOKE_Directory 1
  virtual bool o_get_call_info(MethodCallPackage &mcp, int64 hash = -1);

  public:
  void init();
  public: void t___construct(Variant v_path);
  public: c_Directory *create(CVarRef v_path);
  public: void dynConstruct(CArrRef params);
  public: void getConstructor(MethodCallPackage &mcp);
  public: void dynConstructFromEval(Eval::VariableEnvironment &env, const Eval::FunctionCallExpression *call);
  public: Variant t_read();
  public: void t_rewind();
  public: void t_close();
  DECLARE_METHOD_INVOKE_HELPERS(__construct);
  DECLARE_METHOD_INVOKE_HELPERS(close);
  DECLARE_METHOD_INVOKE_HELPERS(read);
  DECLARE_METHOD_INVOKE_HELPERS(rewind);
};
extern struct ObjectStaticCallbacks cw_Directory;
Object co_Directory(CArrRef params, bool init = true);
Object coo_Directory();

///////////////////////////////////////////////////////////////////////////////
}

#endif // __GENERATED_cls_Directory_h6dfdf420__
