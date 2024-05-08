#include <iostream>
using namespace std;

int main() {
  system("CLS");

  int nilai[5] = {1,2,3,4,5};

  for (int i = 0; i < 5; i++){
    cout << &nilai[i] << " "<< nilai[i] << endl;
  }

  // cara mengubah isi array dengan pointer
  int *ptr = nilai;
  *(ptr + 2) = 6; // mengganti isi dari array index ke-2

  cout << endl;

  for (int i = 0; i < 5; i++){
    cout << &nilai[i] << " "<< nilai[i] << endl;
  }

  cout << "Ukuran array = " <<  sizeof(nilai) << " byte" << endl;
  cout << "Jumlah member array = " <<  sizeof(nilai)/sizeof(int);
  
  return 0;
}