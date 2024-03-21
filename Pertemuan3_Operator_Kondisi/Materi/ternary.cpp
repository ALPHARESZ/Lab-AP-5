#include <iostream>
using namespace std;

int main() {
  system("CLS");
  
  int umur, tinggi;

  cout << "Berapa umur kamu :";
  cin >> umur;
  string result1 = umur > 1000 ? "Kamu bukan manusia\n" : "Kamu mungkin manusia\n";
  cout << result1;
  
  cout << "Input tinggi badan kamu :";
  cin >> tinggi;
  string result2 = tinggi > 200 ? "Kamu berbakat jadi pebasket\n" : "Kamu tidak berbakat jadi pebasket\n";
  cout << result2;
  return 0;
}