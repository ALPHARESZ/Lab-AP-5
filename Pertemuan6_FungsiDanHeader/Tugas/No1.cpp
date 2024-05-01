#include <iostream>
#include <vector>
#include <typeinfo>
#include <cctype>
using namespace std;

// function untuk mencetak deret dan disimpan ke dalam array dinamis (vektor)
vector<int> deret(int num){
  vector<int> list;
  int basis = 0, tambah = 2;

  for (int i = 0; i < num; i++){
    list.push_back(basis += tambah); // push_back() digunakan untuk memasukkan nilai ke vector
    tambah += 2;
  }
  return list;
}

// function untuk mengubah deret mejadi FizzBuzz
vector<string> fizzBuzz(vector<int> Deret){
  vector<string> result;

  for (auto c : Deret){ // for each untuk mengubah tiap-tiap elemen pada vector menjadi FizzBuzz
    if (c % 5 == 0 && c % 3 == 0){
      result.push_back("FizzBuzz");
    } else if (c % 3 == 0){
      result.push_back("Fizz");
    } else if (c % 5 == 0){
      result.push_back("Buzz");
    } else {
      result.push_back(to_string(c)); 
      // to_string() dgunakan untuk mengubah elemen yang awalnya bertipe data int menjadi string
    }
  }
  return result; 
}

// function unutk mencetak output
void cetakFizzBuzz(vector<string> FizzBuzz){
  string deretString;
  int deretAngka;

  // blok kode untuk meng-outputkan deret FizzBuzz
  for (int i = 0; i < FizzBuzz.size(); i++){
    cout << FizzBuzz[i];
    if (i != FizzBuzz.size() - 1){
      cout << ", ";
    }
  }

  // blok kode untuk memeriksa string numerik di deret FizzBuzz
  for (int i = 0; i < FizzBuzz.size(); i++){
    for (auto c : FizzBuzz[i]){
      if (isdigit(c)){ // isdigit() digunakan untuk memeriksa apakah string berupa numerik/tidak
        deretString = FizzBuzz[i];
        break;
      } 
    }
  }
  
  deretAngka = stoi(deretString); // stoi() digunakan untuk mengubah string numerik menjadi integer
  cout << endl;
  cout << "Tipe data " << deretAngka << " adalah " << typeid(deretAngka).name();
}

int main() {
  system("CLS");
  
  int num;

  cout << "Input batas perulangan pada deret : ";
  cin >> num;

  // blok kode untuk validasi inputan
  while (num < 3 || num > 100){
    cout << "Inputan invalid, silahkan input bilangan diantara 3 - 100\n";
    cout << "Input batas perulangan pada deret :";
    cin >> num;
  }
  
  // blok kode untuk pemanggilan function
  vector<int> Deret = deret(num);
  vector<string> FizzBuzz = fizzBuzz(Deret);
  cetakFizzBuzz(FizzBuzz);

  return 0;
}