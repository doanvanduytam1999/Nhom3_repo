#include"Header.h"

bool kiemTraCong(int soCong1, int soCong2, float ketQua)
{
	return soCong1 + soCong2 == ketQua;
}

int tao2SoNgauNhien(int &so2) {
	srand(time(NULL));
	so2 = rand() % 100 + 1;
	return rand() % 100 + 1;
}
a