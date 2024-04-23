#include <iostream>
using namespace std;

int main() {
  system("CLS");
  
  int n;

  cout << "Input tinggi diamond (ganjil) :";
  cin >> n;

  while (n % 2 == 0){
    cout << "Input tinggi diamond (ganjil) :";
    cin >> n;
  }

  while (n <= 0){
    cout << "Input tinggi diamond (ganjil) :";
    cin >> n;
  }
  
  for (int i = 0; i < n; i++){
    for (int j = n / 2 + 1; j > i + 1; j--){
      cout << " ";
    }
    for (int k = 0; k >= n / 2 + 1; k--){
      cout << "* ";
    }
    cout << endl;
  }

  // for (int i = 0; i < n / 2; i++){
    // for (int j = 0; j <= i; j++){
      // cout << " ";
    // }
    // for (int k = n / 2; k > i; k--){
      // cout << "* ";
    // }
    // cout << endl;
  // }
  return 0;
}