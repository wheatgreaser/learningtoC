#include <iostream>
#include <fstream>
using namespace std;

int main() {
  ofstream file1("file1.txt");
  ofstream file2("file2.txt");
  file1 << "this is the most beautiful file that has ever been created";
  file1.close();
  string text;
  ifstream file3("file1.txt");
  while(getline(file3, text)){
    file2 << text;
  }
  file2.close();
  file3.close();
}