#include <iostream>
using namespace std;

int main() {
	int x = 1;
	int *p1, *p2;
	p1 = &x;
	cout << *p1 << endl;
	*p1 += 2;
	cout << x << endl;
	p2 = p1;
	*p2 += 3;
	cout << x;
	return 0;	
}