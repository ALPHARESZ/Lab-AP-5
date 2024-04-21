#include <iostream>
using namespace std;

int main() {
  system("CLS");
  
  int angka;
  bool prima = true;

  cout << "Input sebuah bilangan untuk memeriksa prima/bukan: ";
  cin >> angka;

  //blok kode memvalidasi inputan agar user tidak men-ginput bilangan negatif
  while (angka < 0){
    cout << "Inputan invalid, silahkan input bilangan lebih dari 0\n";
    cout << "Input sebuah bilangan untuk memeriksa prima/bukan:";
    cin >> angka;
  }

  //blok kode untuk mengecek bilangan prima atau komposit
  if (angka < 2){
    prima = false;
  } else {
    for (int i = 2; i <= angka / 2; i++){
      if (angka % i == 0){
        prima = false;
      }
    }
  }

  //blok kode untuk menampilkan output
  if (prima){  
    cout << angka << " adalah bilangan prima";
  } else {
    cout << angka << " bukan bilangan prima";
  }
  return 0;
}