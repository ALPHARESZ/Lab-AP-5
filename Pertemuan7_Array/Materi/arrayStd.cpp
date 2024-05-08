#include <iostream>
#include <array>
using namespace std;

int main() {
  system("CLS");

  array<int, 5> nilai;

  for (int i = 0; i < 5; i++){
    nilai[i] = i + 1;
    cout << &nilai[i] << " " << nilai[i] << endl;
  }

  cout << nilai.size() << endl;
  cout << nilai.begin() << endl;
  cout << nilai.end() << endl;
  cout << nilai.at(2) << endl;
  return 0;
}