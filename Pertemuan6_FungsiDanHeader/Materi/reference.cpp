#include <iostream>
using namespace std;

int sum(int& num1, int& num2){ 
  //& = reference, untuk mengambil nilai asli dari sebuah variabel yang disimpan di alamat memori
  return num1 + num2;
}

int main() {
  system("CLS");
  
  int num1 = 10;
  int num2 = 20;

  cout << "Hasil = " << sum(num1, num2) << endl;
  cout << num1 << endl;
  cout << num2;
  
  return 0;
}