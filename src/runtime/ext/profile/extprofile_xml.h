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

#ifndef __EXTPROFILE_XML_H__
#define __EXTPROFILE_XML_H__

// >>>>>> Generated by idl.php. Do NOT modify. <<<<<<

#include <runtime/ext/ext_xml.h>

namespace HPHP {
///////////////////////////////////////////////////////////////////////////////

inline Object x_xml_parser_create(CStrRef encoding = null_string) {
  FUNCTION_INJECTION_BUILTIN(xml_parser_create);
  TAINT_OBSERVER(TAINT_BIT_NONE, TAINT_BIT_NONE);
  return f_xml_parser_create(encoding);
}

inline bool x_xml_parser_free(CObjRef parser) {
  FUNCTION_INJECTION_BUILTIN(xml_parser_free);
  TAINT_OBSERVER(TAINT_BIT_NONE, TAINT_BIT_NONE);
  return f_xml_parser_free(parser);
}

inline int x_xml_parse(CObjRef parser, CStrRef data, bool is_final = true) {
  FUNCTION_INJECTION_BUILTIN(xml_parse);
  TAINT_OBSERVER(TAINT_BIT_NONE, TAINT_BIT_NONE);
  return f_xml_parse(parser, data, is_final);
}

inline int x_xml_parse_into_struct(CObjRef parser, CStrRef data, VRefParam values, VRefParam index = null) {
  FUNCTION_INJECTION_BUILTIN(xml_parse_into_struct);
  TAINT_OBSERVER(TAINT_BIT_NONE, TAINT_BIT_NONE);
  return f_xml_parse_into_struct(parser, data, values, index);
}

inline Object x_xml_parser_create_ns(CStrRef encoding = null_string, CStrRef separator = null_string) {
  FUNCTION_INJECTION_BUILTIN(xml_parser_create_ns);
  TAINT_OBSERVER(TAINT_BIT_NONE, TAINT_BIT_NONE);
  return f_xml_parser_create_ns(encoding, separator);
}

inline Variant x_xml_parser_get_option(CObjRef parser, int option) {
  FUNCTION_INJECTION_BUILTIN(xml_parser_get_option);
  TAINT_OBSERVER(TAINT_BIT_NONE, TAINT_BIT_NONE);
  return f_xml_parser_get_option(parser, option);
}

inline bool x_xml_parser_set_option(CObjRef parser, int option, CVarRef value) {
  FUNCTION_INJECTION_BUILTIN(xml_parser_set_option);
  TAINT_OBSERVER(TAINT_BIT_NONE, TAINT_BIT_NONE);
  return f_xml_parser_set_option(parser, option, value);
}

inline bool x_xml_set_character_data_handler(CObjRef parser, CVarRef handler) {
  FUNCTION_INJECTION_BUILTIN(xml_set_character_data_handler);
  TAINT_OBSERVER(TAINT_BIT_NONE, TAINT_BIT_NONE);
  return f_xml_set_character_data_handler(parser, handler);
}

inline bool x_xml_set_default_handler(CObjRef parser, CVarRef handler) {
  FUNCTION_INJECTION_BUILTIN(xml_set_default_handler);
  TAINT_OBSERVER(TAINT_BIT_NONE, TAINT_BIT_NONE);
  return f_xml_set_default_handler(parser, handler);
}

inline bool x_xml_set_element_handler(CObjRef parser, CVarRef start_element_handler, CVarRef end_element_handler) {
  FUNCTION_INJECTION_BUILTIN(xml_set_element_handler);
  TAINT_OBSERVER(TAINT_BIT_NONE, TAINT_BIT_NONE);
  return f_xml_set_element_handler(parser, start_element_handler, end_element_handler);
}

inline bool x_xml_set_processing_instruction_handler(CObjRef parser, CVarRef handler) {
  FUNCTION_INJECTION_BUILTIN(xml_set_processing_instruction_handler);
  TAINT_OBSERVER(TAINT_BIT_NONE, TAINT_BIT_NONE);
  return f_xml_set_processing_instruction_handler(parser, handler);
}

inline bool x_xml_set_start_namespace_decl_handler(CObjRef parser, CVarRef handler) {
  FUNCTION_INJECTION_BUILTIN(xml_set_start_namespace_decl_handler);
  TAINT_OBSERVER(TAINT_BIT_NONE, TAINT_BIT_NONE);
  return f_xml_set_start_namespace_decl_handler(parser, handler);
}

inline bool x_xml_set_end_namespace_decl_handler(CObjRef parser, CVarRef handler) {
  FUNCTION_INJECTION_BUILTIN(xml_set_end_namespace_decl_handler);
  TAINT_OBSERVER(TAINT_BIT_NONE, TAINT_BIT_NONE);
  return f_xml_set_end_namespace_decl_handler(parser, handler);
}

inline bool x_xml_set_unparsed_entity_decl_handler(CObjRef parser, CVarRef handler) {
  FUNCTION_INJECTION_BUILTIN(xml_set_unparsed_entity_decl_handler);
  TAINT_OBSERVER(TAINT_BIT_NONE, TAINT_BIT_NONE);
  return f_xml_set_unparsed_entity_decl_handler(parser, handler);
}

inline bool x_xml_set_external_entity_ref_handler(CObjRef parser, CVarRef handler) {
  FUNCTION_INJECTION_BUILTIN(xml_set_external_entity_ref_handler);
  TAINT_OBSERVER(TAINT_BIT_NONE, TAINT_BIT_NONE);
  return f_xml_set_external_entity_ref_handler(parser, handler);
}

inline bool x_xml_set_notation_decl_handler(CObjRef parser, CVarRef handler) {
  FUNCTION_INJECTION_BUILTIN(xml_set_notation_decl_handler);
  TAINT_OBSERVER(TAINT_BIT_NONE, TAINT_BIT_NONE);
  return f_xml_set_notation_decl_handler(parser, handler);
}

inline bool x_xml_set_object(CObjRef parser, VRefParam object) {
  FUNCTION_INJECTION_BUILTIN(xml_set_object);
  TAINT_OBSERVER(TAINT_BIT_NONE, TAINT_BIT_NONE);
  return f_xml_set_object(parser, object);
}

inline int x_xml_get_current_byte_index(CObjRef parser) {
  FUNCTION_INJECTION_BUILTIN(xml_get_current_byte_index);
  TAINT_OBSERVER(TAINT_BIT_NONE, TAINT_BIT_NONE);
  return f_xml_get_current_byte_index(parser);
}

inline int x_xml_get_current_column_number(CObjRef parser) {
  FUNCTION_INJECTION_BUILTIN(xml_get_current_column_number);
  TAINT_OBSERVER(TAINT_BIT_NONE, TAINT_BIT_NONE);
  return f_xml_get_current_column_number(parser);
}

inline int x_xml_get_current_line_number(CObjRef parser) {
  FUNCTION_INJECTION_BUILTIN(xml_get_current_line_number);
  TAINT_OBSERVER(TAINT_BIT_NONE, TAINT_BIT_NONE);
  return f_xml_get_current_line_number(parser);
}

inline int x_xml_get_error_code(CObjRef parser) {
  FUNCTION_INJECTION_BUILTIN(xml_get_error_code);
  TAINT_OBSERVER(TAINT_BIT_NONE, TAINT_BIT_NONE);
  return f_xml_get_error_code(parser);
}

inline String x_xml_error_string(int code) {
  FUNCTION_INJECTION_BUILTIN(xml_error_string);
  TAINT_OBSERVER(TAINT_BIT_NONE, TAINT_BIT_NONE);
  return f_xml_error_string(code);
}

inline String x_utf8_decode(CStrRef data) {
  FUNCTION_INJECTION_BUILTIN(utf8_decode);
  TAINT_OBSERVER(TAINT_BIT_NONE, TAINT_BIT_NONE);
  return f_utf8_decode(data);
}

inline String x_utf8_encode(CStrRef data) {
  FUNCTION_INJECTION_BUILTIN(utf8_encode);
  TAINT_OBSERVER(TAINT_BIT_NONE, TAINT_BIT_NONE);
  return f_utf8_encode(data);
}


///////////////////////////////////////////////////////////////////////////////
}

#endif // __EXTPROFILE_XML_H__
