#include <bits/stdc++.h>
using namespace std;

int main() {
  system("CLS");
  
  int umur;

  cout << "berapa umur kamu :";
  cin >> umur;

  if (umur < 0){
    cout << "Kamu bukan manusia";
  } else {
    if (umur > 0 && umur < 5){
      cout << "Kamu masih balita";
    } else if (umur > 5 && umur < 17){
      cout << "Kamu masih anak-anak";
    } else if (umur > 17 && umur < 40){
      cout << "Kamu dewasa";
    } else if (umur > 40 && umur < 70){
      cout << "Kamu lansia";
    } else {
      cout << "Kamu lebih tua dri lansia";
    }
  }
  return 0;
}