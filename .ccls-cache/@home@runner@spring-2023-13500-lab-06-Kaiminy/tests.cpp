#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"
#include "caesar.h"
#include "vigenere.h"
#include "decrypt.h"

// add your tests here
TEST_CASE("Caesar Cipher") {
  CHECK(encryptC("Way to Go!",5)== "Bfd yt Lt");
}

TEST_CASE("Vigenere Cipher"){
  CHECK(encryptVigenere("Hello World!", cake) =="Jevpq, Wyvnd!");
}

TEST_CASE("Decrypt Vigenere Cipher"){
  CHECK(decryptVigenere("Jevpq, Wyvnd!", cake) =="Hello World!";
  }

TEST_CASE("Decrypt Caesar Cipher"){
  CHECK(encryptC("Bfd yt Lt", 5) =="Way to Go!");
}
