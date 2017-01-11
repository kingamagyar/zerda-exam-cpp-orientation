#ifndef CaesarsCipher_hpp
#define CaesarsCipher_hpp

#include <vector>
#include "Command.hpp"
#include "Argument.hpp"
#include "Decryption.hpp"
#include "File.hpp"

class CaesarsCipher {
private:
  std::vector<Command*> commands;
public:
  CaesarsCipher();
  ~CaesarsCipher();
  void run(int argc, char** argv);
};

#endif /* CaesarsCipher_hpp */
