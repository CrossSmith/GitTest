#include <iostream>

using namespace std;

int sum(int n);
int product(int n);

int main() {

  int n;

  cout << "Please enter a number: ";
  cin >> n;

  cout << "The sum of the numbers from 1 to " << n << " is: " << sum(n) << endl;
  cout << "The product of the numbers from 1 to " << n << " is: " << product(n) << endl;
  
  return 0;

}

int sum(int n) {

  int value = 0;

  for (int i = 1; i <= n; i++) {
    value += i;
  }

  return value;

}

int product(int n) {

  int value = 1;

  for (int i = 1; i <= n; i++) {
    value *= i;
  }

  return value;

}
