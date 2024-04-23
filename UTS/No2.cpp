#include <iostream>
using namespace std;

int main() {
  system("CLS");
  
  int angka;

  cout << "Input sebuah bilangan: ";
  cin >> angka;

  while (angka <= 0){
    cout << "Input sebuah bilangan: ";
    cin >> angka;
  } 

  int i = 0;
  while (i < 3){
    if (angka % 2 == 0){
      cout << angka << " bilangan genap" << endl;
      i++;
    } else {
      cout << angka << " bukan bilangan genap" << endl;
      i++;
    }

    if (angka % 3 == 0){
      cout << angka << " habis dibagi 3" << endl;
      i++;
    } else {
      cout << angka << " tidak habis dibagi 3" << endl;
      i++;
    }

    if (angka % 5 == 0){
      cout << angka << " habis dibagi 5" << endl;
      i++;
    } else {
      cout << angka << " tidak habis dibagi 5" << endl;
      i++;
    }

    if (angka % 7 == 0){
      cout << angka << " habis dibagi 7" << endl;
      i++;
    } else {
      cout << angka << " tidak habis dibagi 7" << endl;
      i++;
    }
  }
  return 0;
}