#include <iostream>
using namespace std;

int main() {
  system("CLS");
  
  int tinggi;

  cout << "Input tinggi segitiga :";
  cin >> tinggi;

  for (int i = tinggi; i > 0; i--){
    for (int j = i; j > 0; j--){
      cout << i;
    }
    cout << endl;
  }
  
  return 0;
}