
#include <iostream> 

using namespace std;

void func(int &n, int m) {
	int n1 = n;
	for (int i = 1; i < m; i++) {
		n *= n1;
	}
}

int main() {

	setlocale(LC_ALL, "Russian");
	

	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	cout << "Task 1.\nThe original array:\n[";
	for (int i = 0; i < 10; i++) {
		cout << *(arr + i) << ", ";
	}
	cout << "\b\b]\n";
	for (int i = 0; i < 10; i++) 
		if (i % 2 == 0)
		swap(*(arr + i), *(arr + i + 1));
		
	cout << "The finished array:\n[";
	for (int i = 0; i < 10; i++) {
		cout << *(arr + i) << ", ";
	}
	cout << "\b\b]\n";
	
	cout << "Task 2.\n";
	int n = 10, m;
	int &refn = n;
	cout << "The original number = " << n << endl << "Enter number: ";
	cin >> m;
	func(refn, m);
	cout << "The finished number " << n << endl;

	return 0;
}