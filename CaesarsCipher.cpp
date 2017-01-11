#include "CaesarsCipher.hpp"

CaesarsCipher::CaesarsCipher() {
  file.read_in_file(input_file_name);
}

void CaesarsCipher::run(int argc, char** argv) {
  Argument argument(argc, argv);
  if (argument.get_type() == NONE) {
    std::cout << "No filename is provided." << std::endl;
  } else if (argument.get_type() == INPUT_FILE) {
    std::cout << "No shift is provided." << std::endl;
  } else if (argument.get_type() == WITH_FLAG_S || argument.get_type() == WITH_FLAG_O) {
    std::cerr << "Error: the arguments are missing after the flag(s)!" << std::endl;
  } else if (argument.get_type() == WITH_SHIFT) {
    file.print_content_to_screen(input_file_name);
  }
}
