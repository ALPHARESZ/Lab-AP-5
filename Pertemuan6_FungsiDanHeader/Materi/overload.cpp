#include <iostream>
using namespace std;

int operasi(int num1, int num2){
  return num1 * num2;
}

float operasi(float num1, float num2){
  return num1 / num2;
}

int main() {
  system("CLS");
  
  int x = 5, y = 4;
  float m = 2.3, n  = 2.2;

  cout << "Haisl perkalian : " << operasi(x, y) << endl;
  cout << "Haisl pembagian : " << operasi(m, n) << endl;
  
  return 0;
}