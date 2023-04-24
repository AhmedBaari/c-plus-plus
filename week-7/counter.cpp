#include <iostream>
using namespace std;

// counter class
class counter {
	int count;

public:
	counter():count(100){}
	
	counter(int x) {
		count = x;
	}
	
	void operator ++() {
		count++;
	}
	
	void operator++(int) {
		++count;
	}
	
	void putData() {
		cout << count << endl;
	}
};

int main () {
	counter c1, c2(1000);
	
	c1.putData();
	c2.putData();
	
	++c1;
	++c2;
	
	c1.putData();
	c2.putData();
	
	c1++;
	c2++;
	
	c1.putData();
	c2.putData();
}
