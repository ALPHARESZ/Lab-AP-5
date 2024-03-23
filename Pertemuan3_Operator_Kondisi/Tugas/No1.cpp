#include <bits/stdc++.h>
using namespace std;

int main() {
  system("CLS");
  
  int bilangan;
  
  cout << "Input sebuah bilangan : ";
  cin >> bilangan;

  string result = bilangan % 2 == 0 ? "Bilangan genap" : "Bilangan ganjil";
  cout << result;
  return 0;
}