#include "Header.h"
using namespace std;

void onTapPhepTru() {
	srand(time(0));
	int a = rand() % 100 + 0;
	int b = rand() % 100 + 0;
	int kq, tru;
	tru = a - b;
	cout << "Ket qua " << a << " - " << b << " la: ?" << endl;
	cout << "Nhap ket qua: ";
	cin >> kq;
	if (kq == tru) {
		cout << "Dung";
	}
	else {
		cout << "Sai";
	}
}