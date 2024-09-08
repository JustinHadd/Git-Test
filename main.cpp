
#include <iostream>

using namespace std;

int sum(int x);

int fact(int a);

int main() {
  int input;
  
  cout << "Enter a number: ";
  cin >> input;
  cout << sum(input) << endl << fact(input);
  return 0;
}

int sum(int x) {
  int y = 1;
  for(int i = 0;i < x; i++) {
    y += i;
  }
  return y;
}

int fact(int a) {
  if (a > 1) {
    return a * fact(a - 1);
  }
  else {
    return 1;
  }
}
