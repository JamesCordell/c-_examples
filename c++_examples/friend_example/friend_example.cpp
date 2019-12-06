#include <iostream>
#include <string>

class Box {
  
  public:
  Box(int length=0,int width=0,int height=0) : length(length),width(width),height(height) { std::cout << "newbox\n"; };
  
  int volume() { return length*width*height; };
      
  //friend std::ostream & operator<<(std::ostream &os,const Box& obj);
  friend std::ostream & operator<<(std::ostream &os,const Box& obj) { //(std::ostream &os, const Samp& obj);
    return os << std::endl << "length:" << obj.length << " width:" << obj.width << " height:" << obj.height << std::endl;
  }
  
  private:
  int length,width,height;
    
};

int main() {

   Box b(4,2,1);
   std::cout << b.volume() << b ;
   
return 0;
}
