#pragma once
#include "DanhSachNVL.h"
using namespace std;
class ChiTietNhapNVL
{
private:

	int SoLuongCuaNVL;
	int STT = 0;
	string MaChiTietNhapNVL;
	DanhSachNVL DSachNVL;
	
public:

	void Nhap();
	void Xuat();
	string Getter_MaNVLCuaChiTiet()
	{
		return MaChiTietNhapNVL;
	}
	int Getter_SoLuongCuaNVL();
	void Setter_STT(int x)
	{
		STT = x;
	}
	ChiTietNhapNVL(const DanhSachNVL);
	ChiTietNhapNVL(const ChiTietNhapNVL &);

	friend istream& operator >>(istream &, ChiTietNhapNVL &);
	friend ostream& operator <<(ostream &, ChiTietNhapNVL);
	ChiTietNhapNVL();
	~ChiTietNhapNVL();
};

