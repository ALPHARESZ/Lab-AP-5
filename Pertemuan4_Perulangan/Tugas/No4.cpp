#include <iostream>
using namespace std;

int main() {
  system("CLS");
  
  int n;
  string hasil;

  cout << "Input nilai n:";
  cin >> n;

  //blok kode untuk memvalidasi inputan agar user tidak men-ginput bilangan negatif
  while (n < 0){
    cout << "Inputan invalid, silahkan input bilangan positif\n";
    cout << "Input nilai n:";
    cin >> n;
  }

  //blok kode untuk memunculkan output
  hasil = 'H' + string(n, 'o') + 'r' + string(n, 'e') + string(n, '!');
  cout << hasil;
  return 0;
}