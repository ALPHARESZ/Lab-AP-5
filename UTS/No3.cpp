#include <iostream>
using namespace std;

int main() {
  system("CLS");
  
  int angka;
  bool prima = true;

  cout << "Masukkan sebuah bilangan :";
  cin >> angka;

  while (angka < 0){
    cout << "Masukkan sebuah bilangan :";
    cin >> angka;
  }
  
  if (angka < 2){
    prima = false;
  } else {
    for (int i = 2; i <= angka / 2; i++){
      if (angka % i == 0){
        prima = false;
        break;
      }
    }
  }

  if (prima){
    cout << angka << " adalah bilangan prima";
  } else  {
    cout << angka << " bukan bilangan prima";
  }
  return 0;
}