#include <iostream>
using namespace std;

void calculator(char *op, int *num1, int *num2){
  if (*op == '+'){
    cout << *num1 + *num2;
  } else if (*op == '-'){
    cout << *num1 - *num2;
  } else if (*op == '/'){
    cout << float(*num1) / *num2;
  } else {
    cout << *num1 * *num2;
  }
}

int main() {
  system("CLS");
  
  char op;
  int num1, num2;

  do {
    cout << "Input sebuah operator arithmetika (+ - * /):";
    cin >> op;
  } while (op != '+' && op != '-' && op != '*' && op != '/');

  cout << "Input dua bilangan : ";
  cin >> num1 >> num2;

  calculator(&op, &num1, &num2);
  return 0;
}