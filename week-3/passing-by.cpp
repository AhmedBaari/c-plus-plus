#include <iostream>
using namespace std;

void increment(int* ptr) {
  *ptr = *ptr + 1;
  cout << "Inside function: " << *ptr << endl;
}

int main() {
  int num = 10;
  increment(&num);
  cout << "Outside function: " << num << endl;
  return 0;
}
