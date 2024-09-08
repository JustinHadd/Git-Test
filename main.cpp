
#include <iostream>

using namespace std;

int sum(int x);

int main() {
  int input;
  
  cout << "Enter a number: ";
  cin >> input;
  cout << sum(input);
  return 0;
}

int sum(int x) {
  int y = 1;
  for(int i = 0;i < x; i++) {
    y += i;
  }
  return y;
}
