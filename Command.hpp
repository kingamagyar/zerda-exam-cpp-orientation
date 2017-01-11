#ifndef Command_hpp
#define Command_hpp

#include "Argument.hpp"
#include "Decryption.hpp"
#include "File.hpp"

class Command {
private:
  std::string flag;
protected:
  File file;
public:
  Command(std::string f);
};

#endif /* Command_hpp */
