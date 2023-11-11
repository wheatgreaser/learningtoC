#include <iostream>

using namespace std;

class coolClass{
  public:
    int coolint;
  void coolprint(){
    cout << coolint;
    
  }

};

int main(){
  coolClass coolobject;
  coolobject.coolint = 322;
  coolobject.coolprint();
  
  return 0;
}