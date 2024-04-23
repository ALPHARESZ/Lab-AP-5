#include <iostream>
using namespace std;

int main() {
  system("CLS");
  
  string kalimat;

  cout << "Input sebuah kalimat: ";
  getline(cin, kalimat);

  for (int i = kalimat.length(); i >= 0; i--){
    cout << kalimat[i] << endl;
  }
  return 0;
}