#ifndef Argument_hpp
#define Argument_hpp

#include <string>

enum ArgType {NONE, FLAG, FLAG_AND_ARG};

class Argument {
private:
  int argc;
  char** argv;
  std::string flag;
  int shift_by;
  ArgType type;
public:
  
  
};

#endif /* Argument_hpp */
