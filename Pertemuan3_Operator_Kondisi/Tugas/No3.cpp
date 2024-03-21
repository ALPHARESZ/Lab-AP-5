#include <bits/stdc++.h> //header cmath untuk import function pow(pangkat)
using namespace std;

int main() {
  system("CLS");
  
  float tinggi[2], berat, BMI;

  cout << "Input tinggi anda dalam cm : ";
  cin >> tinggi[0]; //tinggi index 0 adalah tinggi dalam cm
  tinggi[1] = tinggi[0] / 100.0; //tinggi index 1 adalah tinggi dalam m
  cout << "Input berat anda dalam kg : ";
  cin >> berat;
  BMI = berat / pow(tinggi[1], 2);

  if (BMI < 18.5){
    cout << "BMI anda : " << BMI << endl;
    cout << "Kategori berat badan : Berat badan kurang" << endl;
  } else if (BMI >= 18.5 && BMI < 25.0){
    cout << "BMI anda : " << BMI << endl;
    cout << "Kategori berat badan : Berat badan normal" << endl;
  } else if (BMI >= 25.0 && BMI < 30.0){
    cout << "BMI anda : " << BMI << endl;
    cout << "Kategori berat badan : Berat badan berlebih" << endl;
  } else {
    cout << "BMI anda : " << BMI << endl;
    cout << "Kategori berat badan : Obesitas" << endl;
  }
  return 0;
}