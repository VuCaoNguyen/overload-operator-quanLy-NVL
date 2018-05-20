#include "DanhSachPhieuXuat.h"


void DanhSachPhieuXuat::Nhap()
{
	cout << "\nNhap so luong Phieu Xuat: ";
	cin >> SoLuong;
	ListPhieuXuat = new PhieuXuatNVL[SoLuong];
	//cin.ignore();
	for (int i = 0; i < SoLuong; i++)
	{
		Temp.Nhap();
		ListPhieuXuat[i] = Temp;
	}
}


void DanhSachPhieuXuat::Xuat()
{
	cout << "\n==============================================================";
	cout << "\n=======----XUAT DANH SACH PHIEU XUAT NVL----------===========" << endl;
	for (int i = 0; i < SoLuong; i++)
	{

		ListPhieuXuat[i].Xuat();
	}
}





DanhSachPhieuXuat::DanhSachPhieuXuat(const DanhSachPhieuXuat  &x)
{
	SoLuong = x.SoLuong;
	Temp = x.Temp;
	ListPhieuXuat = new PhieuXuatNVL[SoLuong];
	DSachNVL = x.DSachNVL;
	for (int i = 0; i < SoLuong; i++)
	{

		ListPhieuXuat[i] = x.ListPhieuXuat[i];
	}


}

DanhSachPhieuXuat::DanhSachPhieuXuat(const PhieuXuatNVL x)
{
	Temp = x;
}

DanhSachPhieuXuat::DanhSachPhieuXuat()
{
}


DanhSachPhieuXuat::~DanhSachPhieuXuat()
{
}
