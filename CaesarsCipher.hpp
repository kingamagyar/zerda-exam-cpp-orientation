#ifndef CaesarsCipher_hpp
#define CaesarsCipher_hpp

#include <vector>
#include "Argument.hpp"
#include "Decryption.hpp"
#include "File.hpp"

class CaesarsCipher {
private:
  std::string input_file_name;
protected:
  File file;
public:
  CaesarsCipher();
  void run(int argc, char** argv);
};

#endif /* CaesarsCipher_hpp */
