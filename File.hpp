#ifndef File_hpp
#define File_hpp

#include <iostream>
#include <fstream>

class File {
private:
  std::string input_file_name;
  std::string output_file_name;
  std::string content;
public:
  File();
  std::string read_in_file();
  void write_to_file(std::string content);
  std::string get_content();
};

#endif /* File_hpp */
