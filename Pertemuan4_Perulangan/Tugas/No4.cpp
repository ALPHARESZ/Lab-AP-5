#include <iostream>
using namespace std;

int main() {
  system("CLS");
  
  int n;
  string hasil = "";
  string duplikatO;
  string duplikatE;
  string duplikatTandaSeru;

  cout << "Input nilai n:";
  cin >> n;

  //blok kode untuk memvalidasi inputan agar user tidak men-ginput bilangan negatif
  while (n < 0){
    cout << "Inputan invalid, silahkan input bilangan positif\n";
    cout << "Input nilai n:";
    cin >> n;
  }
  

  //blok kode untuk memunculkan output
  hasil = 'H' + duplikatO.append(n, 'o') + 'r' + duplikatE.append(n, 'e') + duplikatTandaSeru.append(n, '!');
  cout << hasil;
  return 0;
}