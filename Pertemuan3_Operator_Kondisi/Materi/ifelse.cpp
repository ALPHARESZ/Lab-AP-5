#include <bits/stdc++.h>
using namespace std;

int main() {
  system("CLS");
  
  char nilai;

  cout << "Berapa nilai kamu :";
  cin >> nilai;

  if (nilai == 'A'){
    cout << "Bagus, pertahankan";
  } else if (nilai == 'B'){
    cout << "Tingkatkan";
  } else if (nilai == 'C'){
    cout << "Tingkatkan";
  } else if (nilai == 'D'){
    cout << "Kamu mengulang tahun depan";
  } else if (nilai == 'E'){
    cout << "Kamu mengulang tahun depan";
  } else {
    cout << "Invalid, silahkan input yang lain";
  }
  return 0;
}