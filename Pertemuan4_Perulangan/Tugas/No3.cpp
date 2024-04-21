#include <iostream>
using namespace std;

int main() {
  system("CLS");
  
  int tahun, interval;
  
  cout << "Input tahun :";
  cin >> tahun;

  //blok kode untuk memvalidasi rentang dari tahun yang di-input
  while (tahun <= 1000 || tahun >= 9000){
    cout << "Inputan invalid\n";
    cout << "Input tahun :";
    cin >> tahun;
  }
  
  cout << "Input interval tahun:";
  cin >> interval;
  //blok kode untuk memvalidasi rentang dari tahun yang di-input
  while (interval <= -tahun || interval >= 9999 - tahun){
    cout << "Inputan invalid\n";
    cout << "Input interval tahun:";
    cin >> interval;
  }
  
  //blok kode untuk menampilkan output
  if (interval < 0){
    for (int i = interval; i <= 0; i++){
      if ((tahun % 4 == 0 && tahun % 100 != 0) || (tahun % 400 == 0)) {
        cout << tahun << " kabisat" << endl;
      } else {
        cout << tahun << " bukan kabisat" << endl;
      }
      tahun--;
    }
  } else {
    for (int i = 0; i <= interval; i++){
      if ((tahun % 4 == 0 && tahun % 100 != 0) || (tahun % 400 == 0)) {
        cout << tahun << " kabisat" << endl;
      } else {
        cout << tahun << " bukan kabisat" << endl;
      }
      tahun++;
    }
  }
  return 0;
}