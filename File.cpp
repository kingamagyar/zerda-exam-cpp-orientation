#include "File.hpp"

File::File() : input_file_name("input.txt"), output_file_name("output.txt"), content("") {}

std::string File::read_in_file() {
  std::ifstream myfile;
  myfile.open(input_file_name);
  std::string buffer;
  if (!myfile.is_open()) {
    throw "Error: your file is not open!\n";
  } else {
    while (getline(myfile, buffer)) {
      content += buffer + "\n";
    }
    myfile.close();
    return content;
  }
}

void File::write_to_file(std::string content) {
  std::ofstream myfile;
  myfile.open (output_file_name);
  if (!myfile.is_open()) {
    throw "Error: the file is not open\n";
  } else {
    myfile << content;
    myfile.close();
  }
}

std::string File::get_content() {
  return content;
}

