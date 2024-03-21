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
    switch (umur){
    case 0 ... 5: cout << "Kamu masih balita"; break;
    case 6 ... 17: cout << "Kamu masih anak-anak"; break;
    case 18 ... 40: cout << "Kamu masih dewasa"; break;
    case 41 ... 60: cout << "Kamu masih lansia"; break;
    default: cout << "Kamu sepuh"; break;
    }
  }
  return 0;
}