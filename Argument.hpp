#ifndef Argument_hpp
#define Argument_hpp

#include <iostream>
#include <string>

enum ArgType {NONE, INPUT_FILE, WITH_FLAG_S, WITH_SHIFT, WITH_FLAG_O, OUTPUT_FILE};
const int FLAG1_ARG_INDEX = 3;
const int FLAG2_ARG_INDEX = 5;
const int CHAR_INDEX = 1;

class Argument {
private:
  int argc;
  char** argv;
  std::string flag1;
  std::string flag2;
  ArgType type;
  void parse_type_from_args();
  void parse_flag_from_args();
public:
  Argument(int argc, char** argv);
  void check_arg1();
  ArgType get_type();
  std::string get_flag1();
  std::string get_flag2();
};

#endif /* Argument_hpp */
