#pragma once
#include"NguyenVatLieu.h"
class DanhSachNVL
{
private:
	int SoLuongNVL;
	NguyenVatLieu * Danhsach;

public:
	void Setter_LaySoLuong(int);
	int Getter_LaySoLuong();
	void Nhap();
	void Xuat();
	int KiemTraNVL(string);
	void KiemTraNguyenVatLieu();
	void XuatViTri(int);
	NguyenVatLieu TraVeNVLTaiViTri(int);
	friend istream& operator >>(istream&, DanhSachNVL &);
	friend ostream& operator <<(ostream&, DanhSachNVL);
	DanhSachNVL(const DanhSachNVL &);
	DanhSachNVL();
	~DanhSachNVL();
};

