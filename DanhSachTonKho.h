#pragma once
#include "DanhSachPhieuXuat.h"
#include "DanhSachPhieuNhap.h"
class DanhSachTonKho
{
private:
	/*int TonDau;
	int TonCuoi;
	int PhatSinhhTang;
	int PhatSinhGiam;*/
	DanhSachPhieuNhap DSNhap;
	DanhSachPhieuXuat DSXuat;
	DanhSachNVL DsNVL;
public:
	void Xuat();
	int KiemTraTonKho();
	DanhSachTonKho(const DanhSachPhieuNhap , const DanhSachPhieuXuat );
	DanhSachTonKho();
	~DanhSachTonKho();
};

