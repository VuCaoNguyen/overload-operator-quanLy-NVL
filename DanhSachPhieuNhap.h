#pragma once
#include "PhieuNhapNVL.h"
class DanhSachPhieuNhap
{
private:
	int SoLuong;
	PhieuNhapNVL Temp;
	PhieuNhapNVL *ListPhieuNhap;
	DanhSachNVL DSachNVL;

public:

	void Nhap();
	void Xuat();
	DanhSachPhieuNhap(const PhieuNhapNVL);
	DanhSachPhieuNhap(const DanhSachPhieuNhap &);

	DanhSachPhieuNhap& operator - (PhieuNhapNVL);

	DanhSachPhieuNhap& operator = (const DanhSachPhieuNhap);

	//Tiền tố
	DanhSachPhieuNhap& operator ++ ();
	// Hậu tố
	DanhSachPhieuNhap& operator ++ (int);// int là tham số giả lập
	//Tiền tố
	DanhSachPhieuNhap& operator -- ();
	// Hậu tố
	DanhSachPhieuNhap& operator -- (int);
	
	DanhSachPhieuNhap();
	~DanhSachPhieuNhap();
};
