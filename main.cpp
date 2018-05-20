#include "DanhSachTonKho.h"
#include "TonKho.h"

int main()
{

	DanhSachNVL x;
	cin >> x;
	cout << x;
	ChiTietNhapNVL NVL(x);
	PhieuNhapNVL New(x, NVL);	
	New.Nhap();
	PhieuNhapNVL Old;
	Old = New;
	cout << "\nXuat Old: ";
	Old.Xuat();

	DanhSachPhieuNhap d(New);
	d.Nhap();

	cout << "\n==========================Them Dau=================";
	d++;
	--d;
	
	d.Xuat();
	
	

	system("pause");
	return 0;
}