#include <iostream>
using namespace std;

int main() {
  system("CLS");
  
  int x = 5, angka;

  while (x > 0){
    cout << "hello world" << x << endl;
    x--;
  }
  
  cout << "Masukkan angka :";
  cin >> angka;

  while (angka < 0 || angka > 10){
    cout << "Inputan anda invalid\n";
    cout << "Masukkan angka :";
    cin >> angka;
    cout << angka << endl;
  }
  
  return 0;
}