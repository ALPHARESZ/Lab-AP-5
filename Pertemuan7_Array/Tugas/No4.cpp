#include <iostream>
#include <vector>
#include <sstream>
using namespace std;

int main() {
  system("CLS");

  string input;
  vector<int> numbers;
  int num;

  cout << "Input deret angka dan pisahkan dengan menggunakan spasi : ";
  getline(cin, input); 
  stringstream ss(input); 

  while (ss >> num) { 
    numbers.push_back(num); 
  }
  
  cout << "Panjang vektor : "<< numbers.size() << endl;
  for (int i = 0; i < numbers.size(); i++) {
    cout << numbers[i] << endl;
    numbers.erase(numbers.begin()); 
    i--;
  }
  cout << "Panjang vektor : " << numbers.size();

  return 0;
}