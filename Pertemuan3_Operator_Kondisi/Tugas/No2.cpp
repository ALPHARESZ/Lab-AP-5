#include <bits/stdc++.h>
using namespace std;

int main(){
  system("CLS");

  char nama[50];
  int golongan, anak;
  long gajiPokok, gajiKotor, gajiBersih, pajak, biayaAnak;

  cout << "Input nama anda : ";
  cin.getline(nama , 50); //panggil function getline agar user dapat menginput 'spasi' dari namanya
  cout << "Input golongan anda (1/2/3) : ";
  cin >> golongan;
  if (golongan > 0 && golongan < 4){
    if (golongan == 1){
      gajiPokok = 5000000;
    } else if (golongan == 2){  
      gajiPokok = 3000000;
    } else {  
      gajiPokok = 2500000;
    }
  } else {
    cout << "Inputan anda tidak valid, silahkan input golongan (1/2/3)";
    exit(0); //panggil function exit agar program langsung berhenti jika inputan salah
  }

  cout << "Input jumlah anak anda : ";
  cin >> anak;
  if (anak < 0){
    cout << "Inputan anda tidak valid, silahkan input jumlah anak lebih dari atau sama dengan 0";
    exit(0); //panggil function exit agar program langsung berhenti jika inputan salah
  } else {
    if (anak <= 2){
      biayaAnak = 500000 * anak;
    } else {
      biayaAnak = 500000 * 2 + (anak - 2) * 750000;
    }
  }
  
  gajiKotor = gajiPokok + biayaAnak;
  pajak = gajiKotor * 0.05;
  gajiBersih = gajiPokok - pajak;

  cout << "Nama anda adalah : " << nama << endl;
  cout << "Golongan anda adalah : " << golongan << endl;
  cout << "Jumlah anak anda adalah : " << anak << endl;
  cout << "Gaji bersih anda adalah : " << gajiBersih << endl;
  return 0;
}