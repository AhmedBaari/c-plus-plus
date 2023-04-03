// Write a program to calculate cube of a given variable using inline function and return the result by reference.
#include <iostream>

using namespace std;

inline int cube(int& num) {
  num = num * num * num;
  return num;
}


int main() {
  int x;
  cout << "Enter a number: ";
  cin >> x;
  cube(x);
  cout << "Cube of number is " << x << endl;
  return 0;
}
