#include <iostream>
using namespace std;

int main() {
	int x = 10, y = 20;
	int *p1 = &x, *p2 = &y;
	cout << "x = " << x;
	cout << ", y = " << y;
	cout << ", *p1 = " << *p1;
	cout << ", *p2 = " << *p2 << endl;
	
	*p1 = 50; *p2 = 90;
	cout << "x = " << x;
	cout << ", y = " << y;
	cout << ", *p1 = " << *p1;
	cout << ", *p2 = " << *p2 << endl;
	
	*p1 = *p2;
	cout << "x = " << x;
	cout << ", y = " << y;
	cout << ", *p1 = " << *p1;
	cout << ", *p2 = " << *p2;
	return 0;
}