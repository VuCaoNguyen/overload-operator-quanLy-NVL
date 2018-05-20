#include "DanhSachPhieuNhap.h"


void DanhSachPhieuNhap::Nhap()
{
	cout << "\nNhap so luong Phieu Nhap: ";
	cin >> SoLuong;
	ListPhieuNhap = new PhieuNhapNVL[SoLuong];
	//cin.ignore();
	for (int i = 0; i < SoLuong; i++)
	{
		Temp.Nhap();
		ListPhieuNhap[i] = Temp;
	}
}

void DanhSachPhieuNhap::Xuat()
{
	cout << "\n==============================================================";
	cout << "\n=======----XUAT DANH SACH PHIEU NHAP NVL----------===========" << endl;
	for (int i = 0; i < SoLuong; i++)
	{

		ListPhieuNhap[i].Xuat();
	}
}

DanhSachPhieuNhap & DanhSachPhieuNhap::operator- (PhieuNhapNVL x)
{
	PhieuNhapNVL *Temp = new PhieuNhapNVL[SoLuong - 1];
	for (int i = 0; i < SoLuong; i++)
	{
		if (x == ListPhieuNhap[i])
		{

			continue;

		}
		else
		{
			Temp[i] = ListPhieuNhap[i];

		}

	}
	ListPhieuNhap = new PhieuNhapNVL[SoLuong - 1];
	for (int i = 0; i < SoLuong - 1; i++)
	{
		ListPhieuNhap[i] = Temp[i];
	}
	SoLuong--;
	return *this;
}



DanhSachPhieuNhap& DanhSachPhieuNhap::operator = (const DanhSachPhieuNhap x)
{
	SoLuong = x.SoLuong;
	Temp = x.Temp;
	DSachNVL = x.DSachNVL;
	ListPhieuNhap = new PhieuNhapNVL[SoLuong];
	for (int i = 0; i < SoLuong; i++)
	{
		ListPhieuNhap[i] = x.ListPhieuNhap[i];
	}


	return *this;
}

DanhSachPhieuNhap::DanhSachPhieuNhap(const DanhSachPhieuNhap  &x)
{
	SoLuong = x.SoLuong;
	Temp = x.Temp;
	ListPhieuNhap = new PhieuNhapNVL[SoLuong];
	DSachNVL = x.DSachNVL;
	for (int i = 0; i < SoLuong; i++)
	{

		ListPhieuNhap[i] = x.ListPhieuNhap[i];
	}


}
//Thêm Đầu
DanhSachPhieuNhap& DanhSachPhieuNhap::operator++ ()
{

	PhieuNhapNVL *temp = new PhieuNhapNVL[SoLuong];

	for (int i = SoLuong - 1; i >= 0; i--)
	{
		temp[i] = ListPhieuNhap[i];
	}

	SoLuong += 1;
	ListPhieuNhap = new PhieuNhapNVL[SoLuong];

	Temp.Nhap();
	ListPhieuNhap[0] = Temp;
	for (int i = 0; i < SoLuong - 1; i++)
	{
		ListPhieuNhap[i + 1] = temp[i];
	}
	delete[] temp;
	return *this;
}

//Thêm cuối

DanhSachPhieuNhap& DanhSachPhieuNhap::operator++ (int x)
{
	PhieuNhapNVL *temp = new PhieuNhapNVL[SoLuong];
	//cin.ignore();
	for (int i = 0; i < SoLuong; i++)
	{
		temp[i] = ListPhieuNhap[i];
	}

	SoLuong += 1;
	ListPhieuNhap = new PhieuNhapNVL[SoLuong];

	for (int i = 0; i < SoLuong - 1; i++)
	{
		temp[i] = ListPhieuNhap[i];
	}

	Temp.Nhap();
	ListPhieuNhap[SoLuong - 1] = Temp;
	delete[] temp;
	return *this;
}

//Xóa  Đầu
DanhSachPhieuNhap& DanhSachPhieuNhap::operator-- ()
{

	PhieuNhapNVL *temp = new PhieuNhapNVL[SoLuong - 1];
	//cin.ignore();
	for (int i = SoLuong - 1; i > 0; i--)
	{
		temp[i - 1] = ListPhieuNhap[i];
	}

	SoLuong -= 1;
	ListPhieuNhap = new PhieuNhapNVL[SoLuong];
	

	for (int i = 0; i < SoLuong ; i++)
	{
		ListPhieuNhap[i] = temp[i];
	}
	delete[] temp;
	return *this;
}
// Xóa Cuối
DanhSachPhieuNhap& DanhSachPhieuNhap::operator-- (int x)
{

	PhieuNhapNVL *temp = new PhieuNhapNVL[SoLuong - 1];
	//cin.ignore();
	for (int i = 0; i < SoLuong- 1; i++)
	{
		temp[i] = ListPhieuNhap[i];
	}

	SoLuong -= 1;
	ListPhieuNhap = new PhieuNhapNVL[SoLuong];

	for (int i = 0; i < SoLuong; i++)
	{
		ListPhieuNhap[i] = temp[i];
	}
	delete[] temp;
	return *this;
}



DanhSachPhieuNhap::DanhSachPhieuNhap(const PhieuNhapNVL x)
{
	Temp = x;

}


DanhSachPhieuNhap::DanhSachPhieuNhap()
{

}


DanhSachPhieuNhap::~DanhSachPhieuNhap()
{
}
