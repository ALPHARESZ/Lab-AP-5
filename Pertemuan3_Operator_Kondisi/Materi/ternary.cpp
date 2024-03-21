#include <iostream>
using namespace std;

int main() {
  system("CLS");
  
  int umur, tinggi;

  cout << "Berapa umur kamu :";
  cin >> umur;
  string result[0] = umur > 1000 ? "Kamu bukan manusia" : "Kamu mungkin manusia";
  cout << result[0];
  
  cout << "Input tinggi badan kamu :";
  cin >> tinggi;
  string result[1] = tinggi > 200 ? "Kamu berbakat jadi pebasket" : "Kamu tidak berbakat jadi pebasket";
  cout << result[1];
  return 0;
}