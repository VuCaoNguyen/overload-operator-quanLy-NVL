#pragma once
#include "ChiTietNhapNVL.h"
class PhieuXuatNVL
{
private:

	ChiTietNhapNVL  Temp;
	ChiTietNhapNVL  *DSChiTietPhieuXuat;
	Ngay Date;
	string SoPhieu;
	string LyDo;
	int SoLuongChiTietPhieuXuat;
	DanhSachNVL DSachNVL;
public:
	void Nhap();
	void Xuat();
	int Getter_SoLuong()
	{
		return SoLuongChiTietPhieuXuat;
	}

	ChiTietNhapNVL CopyChiTietXuat(int);
	PhieuXuatNVL(const DanhSachNVL, const ChiTietNhapNVL);
	PhieuXuatNVL(const PhieuXuatNVL &);
	PhieuXuatNVL& operator = (const PhieuXuatNVL &);

	PhieuXuatNVL();
	~PhieuXuatNVL();
};

