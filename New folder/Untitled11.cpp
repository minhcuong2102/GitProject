#include <iostream>
#include <iomanip>
using namespace std;

int main(){
	int A[2][3] = {
	{2,4,6},
	{3,5,7}	
};
	cout << "*(A + 1) = " << *(A + 1) << ", &A[1] = " << &A[1] << ", &A[1][0] = " << &A[1][0] << endl;
	cout << "*(A + 1) + 2 = " << *(A + 1) + 2 << ", &A[1][2] = " << &A[1][2] << endl;
	cout << "*(*(A + 1) + 2) = " << *(*(A + 1) + 2) << ", A[1][2] = " << A[1][2] << endl;
	return 0;
}