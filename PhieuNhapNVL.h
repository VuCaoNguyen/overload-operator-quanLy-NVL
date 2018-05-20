#pragma once
#include "Ngay.h"

#include "ChiTietNhapNVL.h"

class PhieuNhapNVL
{
private:

	ChiTietNhapNVL  Temp; //Lay Data de Nhap vao DS
	ChiTietNhapNVL  *DSChiTietPhieuNhap;
	Ngay Date;
	string SoPhieu;
	string LyDo;
	int SoLuongChiTietPhieuNhap;
	DanhSachNVL DSachNVL;

public:

	void Nhap();
	void  Xuat();

	string Getter_SoPhieu();
	int Getter_soLuong();

	PhieuNhapNVL & operator = (const PhieuNhapNVL &);

	bool operator == (const PhieuNhapNVL &);

	ChiTietNhapNVL CopyChiTiet(int);
	PhieuNhapNVL(const DanhSachNVL, const ChiTietNhapNVL );
	PhieuNhapNVL(const PhieuNhapNVL &);
	PhieuNhapNVL();
	~PhieuNhapNVL();
};

