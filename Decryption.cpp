#include "Decryption.hpp"

Decryption::Decryption() : decrypted_text("") {}

std::string Decryption::decrypt(std::string text, int shift) {
  decrypted_text = text;
  for (int i = 0; i < decrypted_text.length(); ++i) {
    if (isalpha(decrypted_text[i])) {
      for (int j = 0; j < shift; ++j) {
        if (decrypted_text[i] == 'z') {
          decrypted_text[i] = 'a';
        } else if (decrypted_text[i] == 'Z') {
          decrypted_text[i] = 'A';
        } else {
          decrypted_text[i]++;
        }
      }
    }
  }
  return decrypted_text;
}
