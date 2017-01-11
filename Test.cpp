#define CATCH_CONFIG_MAIN

#include "Catch.hpp"
#include "Decryption.hpp"
#include "File.hpp"

TEST_CASE("Decrypts string by 3") {
  std::string str = "abcd";
  int shift = 3;
  Decryption d;
  REQUIRE(d.decrypt(str, shift) == "defg");
}

TEST_CASE("Decrypts string by 4, keeping capital letters") {
  std::string str = "AbcD";
  int shift = 4;
  Decryption d;
  REQUIRE(d.decrypt(str, shift) == "EfgH");
}

TEST_CASE("Decrypts string by 3 from the end of the alphabet, returns letters from the beginning of the alphabet") {
  std::string str = "XyZ";
  int shift = 3;
  Decryption d;
  REQUIRE(d.decrypt(str, shift) == "AbC");
}

TEST_CASE("Decrypts string by 2, keeping capital letters, spaces and numbers intact") {
  std::string str = "AbcD E 2";
  int shift = 2;
  Decryption d;
  REQUIRE(d.decrypt(str, shift) == "CdeF G 2");
}

TEST_CASE("Throws error when input file cannot be opened") {
  File f;
  REQUIRE_THROWS(f.read_in_file());
}


