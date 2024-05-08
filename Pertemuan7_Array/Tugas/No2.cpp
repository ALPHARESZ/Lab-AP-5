#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

float efisiensi(int matriks[3][3], int a, int b, int c){
  int A = matriks[0][a];
  int B = matriks[1][b];
  int C = matriks[2][c];
  return sqrt(pow(A, 2) + pow(B, 2) + pow(C, 2));
}

int main() {
  system("CLS");
  
  int matriks[3][3];
  for (int i = 0; i < 3; i++){
    for (int j = 0; j < 3; j++){
      cout << "Masukkan nilai A[" << i + 1 << "][" << j + 1 << "] : ";
      cin >> matriks[i][j];
    }
  }

  for (int i = 0; i < 3; i++){
    for (int j = 0; j < 3; j++){
      cout << matriks[i][j] << " ";
    }
    cout << endl;
  }

  float maksimumEfisiensi = 0.0;

  for (int a = 0; a < 3; a++){
    for (int b = 0; b < 3; b++){
      for (int c = 0; c < 3; c++){
        float efisien = efisiensi(matriks, a, b, c);
        if(maksimumEfisiensi < efisien){
          maksimumEfisiensi = efisien;
        }
      }
    }
  }

  cout << fixed << setprecision(2);
  cout << maksimumEfisiensi;
  return 0;
}