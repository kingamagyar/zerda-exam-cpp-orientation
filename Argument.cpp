#include "Argument.hpp"

Argument::Argument(int argc, char** argv) {
  this->argc = argc;
  this->argv = argv;
  parse_flag_from_args();
  parse_type_from_args();
}

void Argument::parse_type_from_args() {
  if (argc == 1) {
    type = NONE;
  } else if (argc == 2) {
    type = INPUT_FILE;
  } else if (argc == 3) {
    type = WITH_FLAG_S;
  } else if (argc == 4) {
    type = WITH_SHIFT;
  } else if (argc == 5) {
    type = WITH_FLAG_O;
  } else if (argc == 6) {
    type = OUTPUT_FILE;
  }
}

void Argument::parse_flag_from_args() {
  if (argc > 1) {
    flag1 = argv[FLAG1_ARG_INDEX][CHAR_INDEX];
    flag2 = argv[FLAG2_ARG_INDEX][CHAR_INDEX];
  }
}


ArgType Argument::get_type() {
  return type;
}

std::string Argument::get_flag1() {
  return flag1;
}

std::string Argument::get_flag2() {
  return flag2;
}
