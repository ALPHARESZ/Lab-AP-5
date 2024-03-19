#include <bits/stdc++.h>
using namespace std;

int main(){
  int I = 2, K = 7, L = 1, C = 9, U = 5, S = 6, result;

  // program a
  cout << ((3 - 1 < I) || (K - 5 < 8 + 2) && (L + 7 >= 9 + 3)) << endl;
  /*hitungan manualnya : 
  pertama mencari nilai dari (3 - 1 < I) --> (2 < 2) akan bernilai false(0)
  kedua mencari nilai dari (K - 5 < 8 + 2) --> (2 < 10) akan bernilai true(1)
  ketiga mencari nilai dari (L + 7 >= 9 + 3) --> (8 >= 12) akan bernilai false(0)
  keempat mencari nilai dari (3 - 1 < I) || (K - 5 < 8 + 2) --> 0 or 1 --> 1
  kelima mencari nilai (3 - 1 < I) || (K - 5 < 8 + 2) && (L + 7 >= 9 + 3) --> 1 and 0 --> 0
  maka hasilnya adalah false(0)*/

  // program b
  cout << ((L % 3 > U) && ((C / U < S) || (3 * I - K > 0))) << endl;
  /*hitungan manualnya:
  pertama mencari nilai dari (C / U < S) --> (1 < 5) akan bernilai false(0)
  kedua mencari nilai dari (3 * I - K > 0) --> (-1 > 0) akan bernilai false(0)
  ketiga mencari nilai (L % 3 > U) --> (3 > 5) akan bernilai false(0)
  keempat mencari nilai ((C / U < S) || (3 * I - K > 0)) --> 0 or 0 --> false(0)
  kelima mencari nilai (L % 3 > U) && ((C / U < S) || (3 * I - K > 0) --> 0 and 0 --> false(0)
  maka hasilnya adalah false(0)*/

  // program c
  cout << ((I - 9 > K) || (L + 3 < 4 * C)) << endl;
  /*hitungan manualnya:
  pertama mencari nilai (I - 9 > K) --> (-7 > 7) akan bernilai false(0)
  kedua mencari nilai (L + 3 < 4 * C) --> (4 < 36) akan bernilai true(1)
  ketika mencari nilai (I - 9 > K) || (L + 3 < 4 * C) --> 0 or 1 --> true(1)
  maka hasilnya adalah true(1)*/

  // program d
  result = I | K & L ^ 3 << 2;
  cout << result << endl;
  /*hitungan manualnya:
  pertama mencari nilai 3 shl 2 dalam bentuk bitnya --> 0011 shl 2 --> 1100(12) 
  kedua mencari nilai 7 and 1 dalam bentuk bitnya --> 0111 and 0001 --> 0001(1)
  ketiga mencari nilai 1 xor 12 dalam bentuk bitnya --> 0001 xor 1100 --> 1101(13)
  keempa mencari nilai 2 or 13 dalam bentuk bitnya --> 0010 or 1101 --> 1111(15)
  maka hasilnya adalah 1111(15)*/
  return 0;
}