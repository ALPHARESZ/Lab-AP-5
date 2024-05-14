#include <iostream>
using namespace std;

int main() {
  system("CLS");
  
  char *letter = "K O M P U T E R";

  letter += 8;

  cout << *letter;
  return 0;
}