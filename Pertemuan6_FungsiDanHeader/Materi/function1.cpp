#include <iostream>
using namespace std;

int num3 = 10; // variabel global

int sum(int num1, int num2){
  return num1 + num2;
}

int sumNumber(int num1, int num2 = 10){ //default parameter
  return num1 + num2;
}

int main() {
  system("CLS");
  
  int hasil = sum(5, 10);
  int hasil1 = sumNumber(5);

  cout << "Hasil = " << hasil << endl;
  cout << "Hasil = " << hasil1;
  
  return 0;
}