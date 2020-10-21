#include "Header.h"
using namespace std;
int tong(int a, int b)
{
	return a + b;
}
int hieu(int a, int b) {
	return a - b;
}
int tich(int a, int b)
{
	return a * b;
}
float thuong(int a, int b)
{
	if (b != 0)
		return a / b;
	return -9999999999999;
}
int main()
{
	int chon;
	cout << "Nhap 1 de tinh phep tinh co ban!" << endl;
	cout << "Nhap 2 de tinh chu vi va dien tich!" << endl;
	cout << "Nhap 3 de luyen tap phep cong!" << endl;
	cout << "Nhap 4 de luyen tap phep tru!" << endl;
	cout << "Moi ban chon: ";
	cin >> chon;

	switch (chon)
	{
	case 1:
		int a, b;
		char phepToan;

		cout << "Nhap 2 so nguyen: ";
		cin >> a >> b;
		cout << "Tinh gi? (+,-,*,/) ";
		cin >> phepToan;
		switch (phepToan)
		{
		case '+':
			cout << "Tong :" << tong(a, b);
			break;
		case '-':
			cout << "Hieu :" << hieu(a, b);
			break;
		case '*':
			cout << "Tich :" << tich(a, b);
			break;
		case '/':
			if (-9999999999999 != thuong(a, b))
				cout << "Thuong :" << thuong(a, b);
			else
				cout << "phep tinh chia het cho 0";
			break;
		default:
			cout << "Chon sai phep toan";
			break;
		}
		break;
	case 2:
		break;
	case 3:
	{
		int so1 = 0,ketQua;
		int so2 = tao2SoNgauNhien(so1);
		cout << so1 << " + " << so2 << " =?" << endl;
		cin >> ketQua;
		if (kiemTraCong(so1, so2, ketQua)) cout << "Dung" << endl;
		else cout << "Sai" << endl;

		break;
	}
	case 4:
		break;

	default:
		cout << "vui long chon chuc nang!" << endl;
		break;
	}

	system("pause");
	return 0;
}