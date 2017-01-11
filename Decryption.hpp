#ifndef Decryption_hpp
#define Decryption_hpp

#include "File.hpp"
#include <string>

class Decryption {
private:
  std::string decrypted_text;
public:
  Decryption();
  std::string decrypt(std::string text, int shift);
};

#endif /* Decryption_hpp */
