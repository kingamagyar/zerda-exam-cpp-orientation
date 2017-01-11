#ifndef File_hpp
#define File_hpp

#include <iostream>
#include <fstream>

class File {
private:
  std::string content;
public:
  File();
  std::string read_in_file(std::string input_file_name);
  void write_to_file(std::string output_file_name, std::string content);
  void print_content_to_screen(std::string input_file_name);
  std::string get_content();
};

#endif /* File_hpp */
