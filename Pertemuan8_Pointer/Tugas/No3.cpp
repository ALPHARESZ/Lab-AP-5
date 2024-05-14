#include <iostream>
using namespace std;

int main() {
  system("CLS");
  
  char *letter = "K O M P U T E R";

  cout << letter << endl;
  letter += 8;
  cout << "Huruf ke-5 dari K O M P U T E R adalah "<<*letter;
  return 0;
}