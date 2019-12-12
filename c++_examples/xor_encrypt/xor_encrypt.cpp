// Example program
#include <iostream>
#include <string>
#include <string.h>


class A {
    
  public:
  void virtual Encode(char * str) = 0;
  void virtual Decode( ) = 0;

  protected:
  char * key;
    
};


class B : public A {
  char * cipher;
  unsigned int cipherLen;
    
  public:
  B(const char * key) { this->key = new char[16]; key = strcpy( this->key, key); };
  ~B() { delete key; };

  void Encode(char * str );
  void Decode( );
  void View() { 
      for (unsigned int i=0 ; i < cipherLen;i++ ) {
      std::cout << ":" << cipher[i] << ":";
      }
  }
};

void B::Encode(char * str ) {
    std::cout << "enc\n";
    cipherLen = strlen(str);
    cipher = new char[cipherLen];
    for (unsigned int i =0; i < cipherLen;i++ ) {
        cipher[i] = str[i] ^ key[i % 16];
    }
};

void B::Decode() {
    std::cout << "dec\n";
    for (unsigned int i =0; i < cipherLen;i++ ) {
        std::cout <<  char(cipher[i] ^ key[i % 16]);
        //std::cout << str[i];
    }
};

int main()
{
  B b("fkgithcysifnvcqp");//key
  b.Encode("hello this is a test that will be xor'd");
  b.View();
  b.Decode();
  
}

