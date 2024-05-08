#include <iostream>
using namespace std;

int main() {
  system("CLS");
  
  int pascalHeight;

  cout << "Input tinggi segitiga pascal :";
  cin >> pascalHeight;
  int pascal[pascalHeight][pascalHeight];

  for (int i = 0; i < pascalHeight; i++){
    for (int j = pascalHeight; j > i + 1; j--){
      cout << " ";
    }

    for (int k = 0; k <= i; k++){
      if(k == 0 || k == i){
        pascal[i][k] = 1;
      } else {
        pascal[i][k] = pascal[i - 1][k - 1] + pascal[i-  1][k];
      }
      cout << pascal[i][k] << " ";
    }
    cout << endl;
  }

  int x, y;
  cout << "Input index segitiga pascal yang ingin diperiksa : ";
  cin >> x >> y;

  while((x < 1 || y > 30) && (y > x)){
    cout << "Input index segitiga pascal yang ingin diperiksa : ";
    cin >> x >> y;
  }

  cout << "Nilai pada index [" << x << "][" << y << "] = " << pascal[x - 1][y - 1];
  return 0;
}