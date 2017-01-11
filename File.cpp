#include "File.hpp"

File::File() : content("") {}

std::string File::read_in_file(std::string input_file_name) {
  std::ifstream myfile;
  myfile.open(input_file_name);
  std::string buffer;
  if (!myfile.is_open()) {
    std::cout << "Error: your file is not open!\n";
  } else {
    while (getline(myfile, buffer)) {
      content += buffer + "\n";
    }
    myfile.close();
  }
  return content;
}

void File::write_to_file(std::string output_file_name, std::string content) {
  std::ofstream myfile;
  myfile.open (output_file_name);
  if (!myfile.is_open()) {
    std::cout << "Error: the file is not open\n";
  } else {
    myfile << content;
    myfile.close();
  }
}

void File::print_content_to_screen(std::string input_file_name) {
  std::ifstream myfile;
  myfile.open(input_file_name);
  if (!myfile.is_open()) {
    std::cout << "Error: the file is not open\n";
  } else {
    while (getline(myfile, content)) {
      std::cout << content << std::endl;
    }
    myfile.close();
  }
}

std::string File::get_content() {
  return content;
}

