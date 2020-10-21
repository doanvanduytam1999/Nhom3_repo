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

float chuviHV(int canh)
{
	return canh * 4;
}
float dientichHV(int canh)
{
	return canh * canh;
}
float chuviHCN(int dai, int rong)
{
	return (dai + rong) * 2;
}
float dientichHCN(int dai, int rong)
{
	return dai * rong;
}
float chuviHTr(int bankinh)
{
	return (2 * bankinh) * 3.14;
}
float dientichHTr(int bankinh)
{
	return (bankinh*bankinh) * 3.14;
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
		int chon;

		cout << "Nhap so de thuc hien phep tinh: ";
		cout << "1.Tinh Chu vi Hinh vuong";
		cout << "2.Tinh Dien tich Hinh vuong";
		cout << "3.Tinh Chu vi Hinh chu nhat";
		cout << "4.Tinh Dien tich Hinh chu nhat";
		cout << "5.Tinh Chu vi Hinh tron";
		cout << "6.Tinh Dien tich Hinh tron";
		cin >> chon;
		switch (chon)
		{
		case 1:
			cout << "Nhap canh hinh vuong";
			cin >> a;
			cout << "Chu vi Hinh vuong canh " << a << " la :" << chuviHV(a);
			break;
		case 2:
			cout << "Nhap canh hinh vuong";
			cin >> a;
			cout << "Dien tich Hinh vuong canh " << a << " la :" << dientichHV(a);
			break;
		case 3:
			cout << "Nhap chieu dai hinh chu nhat";
			cin >> a;
			cout << "Nhap chieu rong hinh chu nhat";
			cin >> b;
			cout << "Chu vi Hinh chu nhat canh la :" << chuviHCN(a, b);
			break;
		case 4:
			cout << "Nhap chieu dai hinh chu nhat";
			cin >> a;
			cout << "Nhap chieu rong hinh chu nhat";
			cin >> b;
			cout << "Dien tich Hinh chu nhat la :" << dientichHCN(a, b);
			break;
		case 5:
			cout << "Nhap ban kinh hinh tron";
			cin >> a;
			cout << "Chu vi Hinh tron la :" << chuviHTr(a);
			break;
		case 6:
			cout << "Nhap ban kinh hinh tron";
			cin >> a;
			cout << "Dien tich Hinh tron la :" << dientichHTr(a);
			break;
		default:
			cout << "Chon sai phep tinh";
			break;
		}
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