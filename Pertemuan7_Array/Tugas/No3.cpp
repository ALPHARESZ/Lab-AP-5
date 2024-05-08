#include <iostream>
using namespace std;

int main() {
  system("CLS");
  
  string input, upperInput;

  cout << "Input suatu string yang ingin diperbaiki :";
  getline(cin, input);

  while (input.length() < 1 || input.length() > 100){
    cout << "Inputan invalid\n";
    cout << "Input suatu string yang ingin diperbaiki :";
    getline(cin, input);
  }
  
  for (char c : input){
    upperInput += toupper(c);
  }
  
  for (int i = upperInput.length() / 2 - 1; i >= 0; i--){
    cout << upperInput[i];
  }

  for (int i = upperInput.length(); i >= upperInput.length() / 2; i--){
    cout << upperInput[i];
  }
  return 0;
}