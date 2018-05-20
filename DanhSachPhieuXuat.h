#pragma once
#include "PhieuXuatNVL.h"
class DanhSachPhieuXuat
{ private:
	int SoLuong;
	PhieuXuatNVL Temp;
	PhieuXuatNVL *ListPhieuXuat;
	DanhSachNVL DSachNVL;
public:
	void Nhap();
	void Xuat();
	DanhSachPhieuXuat(const PhieuXuatNVL);

	DanhSachPhieuXuat(const DanhSachPhieuXuat &);
	DanhSachPhieuXuat();
	~DanhSachPhieuXuat();
};

