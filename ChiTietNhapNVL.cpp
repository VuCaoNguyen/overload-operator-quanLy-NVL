#include "ChiTietNhapNVL.h"
int ChiTietNhapNVL::Getter_SoLuongCuaNVL()
{
	return SoLuongCuaNVL;
}


void ChiTietNhapNVL::Nhap()
{
	cout << "--------------------Nhap chi tiet nguyen vat lieu----------------------\n";
	cin.ignore();
	do
	{

		cout << "\nNhap vao Ma so chi tiet phieu nhap NVL: ";
		getline(cin, MaChiTietNhapNVL);

		if (DSachNVL.KiemTraNVL(MaChiTietNhapNVL) != -1)
		{
			int n = DSachNVL.KiemTraNVL(MaChiTietNhapNVL);
			DSachNVL.XuatViTri(n);

			cout << "\nNhap vao so Luong: ";
			cin >> SoLuongCuaNVL;
			
		}
		else
		{
			cout << "\nMa NVL khong co trong danh sach xin nhap lai.";
		}
	} while (DSachNVL.KiemTraNVL(MaChiTietNhapNVL) == -1);
	

	

	
}
void ChiTietNhapNVL::Xuat()
{
	//cout << "\n-------------------Xuat chi tiet phieu nhap NVL: --------------------";
	cout << "\nSTT: " << STT;
	//cout << "\nMa so chi tiet phieu nhap NVL: " << MaChiTietNhapNVL << endl;
	int n = DSachNVL.KiemTraNVL(MaChiTietNhapNVL);
	DSachNVL.XuatViTri(n);
	cout << "\nSo Luong: " << SoLuongCuaNVL <<  endl  << "~~~~~~~~~~~~~~";
	
}

//=====================

istream& operator >>(istream &is, ChiTietNhapNVL &x)
{

	cout << "--------------------Nhap chi tiet nguyen vat lieu----------------------\n";
	//is.ignore();
	do
	{

		cout << "\nNhap vao Ma so chi tiet phieu nhap NVL: ";
		getline(is, x.MaChiTietNhapNVL);

		if (x.DSachNVL.KiemTraNVL(x.MaChiTietNhapNVL) != -1)
		{
			int n = x.DSachNVL.KiemTraNVL(x.MaChiTietNhapNVL);
			x.DSachNVL.XuatViTri(n);

			cout << "\nNhap vao so Luong: ";
			is >> x.SoLuongCuaNVL;
			x.STT++;
		}
		else
		{
			cout << "\nMa NVL khong co trong danh sach xin nhap lai.";
		}
	} while (x.DSachNVL.KiemTraNVL(x.MaChiTietNhapNVL) == -1);


	return is;
}

ostream& operator <<(ostream &os, ChiTietNhapNVL x)
{


	os << "\nSTT: " << x.STT;
	
	int n = x.DSachNVL.KiemTraNVL(x.MaChiTietNhapNVL);
	x.DSachNVL.XuatViTri(n);
	cout << "\nSo Luong: " << x.SoLuongCuaNVL << endl << "~~~~~~~~~~~~~~";

	return os;
}


//=======================

ChiTietNhapNVL::ChiTietNhapNVL(DanhSachNVL x)
{
	DSachNVL = x;
}

ChiTietNhapNVL::ChiTietNhapNVL(const ChiTietNhapNVL &x)
{
	STT = x.STT;
	SoLuongCuaNVL = x.SoLuongCuaNVL;
	MaChiTietNhapNVL = x.MaChiTietNhapNVL;
	DSachNVL = x.DSachNVL;
}


ChiTietNhapNVL::ChiTietNhapNVL()
{
}


ChiTietNhapNVL::~ChiTietNhapNVL()
{
}
