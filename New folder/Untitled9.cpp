#include <iostream>
#include <iomanip>
using namespace std;

int main() {
	int A[4] = {5, 3, 7, 9};
	int *p = A;
	cout << "p = " << p << ", A = " << A << ", &A[0] = " << &A[0] << endl;
//	A[i] <-> p + i	
	cout << "&A[1] = " << &A[1] << ", p + 1 = " << p + 1 << endl;
//	*(p + 1) <-> A[i];
	cout << "A[1] = " << A[1] << ", *(p + 1) = " << *(p + 1) << endl;
//	A[i] <-> p[i], &A[i] <-> &p[i]
	cout << "A[2] = " << A[2] << ", p[2] = " << p[2] << endl;
	return 0;	
}