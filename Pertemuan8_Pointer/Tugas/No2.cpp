#include <iostream>
using namespace std;

int main() {
  system("CLS");
  
  int x, *px;
  x = 25;

  px = &x;
  *px = x;
  return 0;
}