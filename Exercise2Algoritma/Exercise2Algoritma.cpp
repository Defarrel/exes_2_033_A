#include <iostream>
using namespace std;

int defarrel[29];
int n = ( 13 ,23 ,35,12,42,52,19 );


void input() {
	while (true) {
		cout << "Masukan element array: ";
		cin >> n;

		if (n <= 20)
			break;
		else
			cout << "\nMaksimum panjang array adalah 20" << endl;

	}
	cout << endl;
	cout << "\n====================" << endl;
	cout << "\nMasukan Elemen Array" << endl;
	cout << "\n====================" << endl;

	for (int i = 0; i < n; i++) {

		cout << "<" << (i + 1) << ">";
		cin >> defarrel[i];
	}
}


void algoritma() {

	int lower = 0;
	int upper = n - 1;

	do {
		int mid = (lower + upper) / 2;



		if (defarrel[mid] == n) {
			cout << "found";
		}
		if (n < defarrel[mid]) {
			upper = mid - 1;
		}
		if (n > defarrel[mid]) {
			lower = mid + 1;
		}
		else
			lower <= upper;
		cout << "not found";
	} while (lower <= upper);
	
}

int main() {
	input();
	algoritma();
}
	
