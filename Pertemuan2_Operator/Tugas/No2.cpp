#include <bits/stdc++.h> //pakai library/header "cmath" untuk import function akar kuadrat(sqrt) dan pangkat(pow)
using namespace std;

int main(){
  float x[2]; 
  int a, b, c;

  cout << "Input nilai A, B, dan C dari suatu persamaan kuadrat :\n";
  cin >> a >> b >> c; 

  x[0] = (-b + sqrt(pow(b, 2) - 4 * a * c)) / (2 * a); 
  /*function pow akan mengalikan argumen pertama sebanyak argumen kedua.
  Dalam kasus ini maka b akan dikalikan sebanyak 2x atau b * b*/ 

  x[1] = (-b - sqrt(pow(b, 2) - 4 * a * c)) / (2 * a); 
  /*function  sqrt hanya menerima satu argumen saja, fungsi tersebut akan
  mengakarkuadratkan argumen yang diberikan. Dalam kasus ini function tersebut
  akan mengarkuadratkan hasil dari b * b - 4 * a * c (diskriminan)*/

  cout << "Akar-akarnya yaitu : " << x[0] << " dan " << x[1] << endl;
  /*apa bila outpunya 'nan(not a numer)' maka nilai dari akar-akar persamaan tersebut 
  bukan bilangan rill(mengandung bilangan imajiner)*/
  return 0;
}

