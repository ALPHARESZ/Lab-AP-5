#include <iostream>
#include <vector>
using namespace std;

int main() {
  system("CLS");
  
  vector<int> oddNum;

  for (int i = 1; i <= 20; i++){
    if (i % 2 == 1){
      oddNum.push_back(i);
    }
  }
  
  for (int i = 0; i < oddNum.size(); i++){
    cout << "Nilai " << oddNum[i] << ", alamat memori = " << &oddNum[i] <<  endl;
  }
  return 0;
}