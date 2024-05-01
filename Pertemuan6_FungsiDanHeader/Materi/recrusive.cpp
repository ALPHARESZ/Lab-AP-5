#include <iostream>
using namespace std;

int factorial(int num){
  if (num == 1){
    return 1;
  } else {
    return num * factorial(num - 1);
  }
}
int main() {
  system("CLS");
  
  int num;

  cin >> num;
  cout << num << "! adalah " << factorial(num);
  
  return 0;
}