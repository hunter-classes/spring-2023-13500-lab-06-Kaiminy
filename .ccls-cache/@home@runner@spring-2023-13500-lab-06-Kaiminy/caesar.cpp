#include <iostream>
#include <string>


char shiftChar(char c,int rshift){
  std::string result="";
  for (int i=0;i<text.length();i++){
    if (isupper(text[i]))
      result += char(int(text[i]+s-65)%26+65);
    else
      result += char(int(text[i]+s-97)%26+97);
  }
}





std::string encryptC(std::string plaintext, int rshift){
  std::string encrypted;
  for (int x=0;x<plaintext.length();x++){
    encrypted+=(int)shiftChar(plaintext[x],rshift);
  }
  return encrypted;

  
  }