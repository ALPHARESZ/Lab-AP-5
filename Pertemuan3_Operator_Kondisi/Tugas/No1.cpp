#include <bits/stdc++.h>
using namespace std;

int main() {
  system("CLS");
  
  int bilangan;
  
  cout << "Input sebuah bilangan : ";
  cin >> bilangan;

  string result = bilangan > 0 ? "Bilangan positif" : "Bilangan negatif";
  cout << result;
  return 0;
}