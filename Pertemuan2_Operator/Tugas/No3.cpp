#include <bits/stdc++.h> //pakai library/header "cmath" untuk import function akar kuadrat(sqrt) dan pangkat(pow)
using namespace std;

int main(){
  int pilihan;
  float height[2], radius, s, surfaceArea, Volume, base, area, circumference;
  const float pi = 3.1416;

  cout << "Silahkan input pilihan anda\n";
  cout << "1.Kerucut\n";
  cout << "2.Limas Segitiga\n";
  cout << "3.Bola\n";
  cout << "4.Prisma\n";
  cin >> pilihan;

  if (pilihan == 1){
    cout << "Input tinggi kerucut : ";
    cin >> height[0];
    cout << "Input jari-jari kerucut : ";
    cin >> radius;
    s = sqrt((pow(height[0], 2) + pow(radius, 2)));
    Volume = (pi * pow(radius, 2) * height[0]) / 3;
    surfaceArea =  pi * radius * (s + radius);
    cout << "Volume kerucut adalah " << Volume << endl;
    cout << "Luas permukaan kerucut adalah " << surfaceArea << endl;
  } else if (pilihan == 2){
    cout << "Input sisi segitiga : ";
    cin >> base;
    cout << "Input tinggi segitiga : ";
    cin >> height[0];
    cout << "Input tinggi limas : ";
    cin >> height[1];
    area = base * height[0] * 0.5;
    surfaceArea = area * 4;
    Volume = (area * height[1]) / 6;
    cout << "Volume limas segitiga adalah " << Volume << endl;
    cout << "Luas permukaan limas segitiga adalah " << surfaceArea << endl;
  } else if (pilihan == 3){
    cout << "Input jari-jari bola : ";
    cin >> radius;
    surfaceArea = 4 * pi * pow(radius, 2);
    Volume = (4* pi * pow(radius, 3)) / 3;
    cout << "Volume bola adalah " << Volume << endl;
    cout << "Luas permukaan bola adalah " << surfaceArea << endl;
  } else if (pilihan == 4){
    cout << "Input sisi segitiga : ";
    cin >> base;
    cout << "Input tinggi segitiga : ";
    cin >> height[0];
    cout << "Input tinggi prisma : ";
    cin >> height[1];
    area = base * height[0] * 0.5;
    circumference = 3 * base;
    surfaceArea = circumference * height[1] + area * 2;
    Volume = area * height[1];
    cout << "Volume prisma adalah " << Volume << endl;
    cout << "Luas permukaan prisma adalah " << surfaceArea << endl;
  } else {
    cout << "Pilihan anda tidak valid";
  }
  return 0;
}