#include <bits/stdc++.h>
using namespace std;

int main(){
  float jarak[2];

  cout << "Masukkan jarak :";
  cin >> jarak[0];
  jarak[1] = jarak[0] / 1000;
  cout << "Jarak dalam meter adalah " << jarak[0] <<" m" << endl;
  cout << "Jarak dalam kilometer adalah " << jarak[1] << " km" << endl;
  return 0;
}