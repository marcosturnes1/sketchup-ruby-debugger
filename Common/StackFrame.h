#ifndef RDEBUGGER_COMMON_STACKFRAME_H_
#define RDEBUGGER_COMMON_STACKFRAME_H_

#include <string>
#include <ruby/ruby.h>

namespace SketchUp {
namespace RubyDebugger {

struct StackFrame {
  std::string name;
  VALUE binding;
};

} // end namespace RubyDebugger
} // end namespace SketchUp

#endif // RDEBUGGER_COMMON_STACKFRAME_H_