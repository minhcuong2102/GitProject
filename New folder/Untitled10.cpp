#include <iostream>
#include <iomanip>
using namespace std;

void Show(int *p, int length){
	for (int i = 0; i < length; i++){
		cout << setw(3) << *(p + i);
	}
}

void Swap(int &x, int &y){
	int temp = x;
	x = y;
	y = temp;
}
bool ascending (int left, int right){
	return left > right;
}
bool descending (int left, int right){
	return right > left;
}

void SelectionSort(int *p, int length, bool (*CompFunc)(int, int)){
	for (int i = 0; i < length - 1; i++){
		for (int j = i + 1; j < length; j++){
			if (CompFunc(*(p + i), *(p + j))){
				Swap(*(p + i), *(p + j));
			}
		}
	}
}

int main() {
	int A[] = {1, 4, 2, 3, 6, 5, 8, 9, 7};
	int l = sizeof(A) / sizeof(int);
	SelectionSort(A, l, descending);
	Show(A, l);
	return 0;	
}