
#include "NguyenVatLieu.h"

void NguyenVatLieu::InNguyenVatLieu()
{
	cout << endl << "Nhap Ten NVL : ";  getline(cin, TenNguyenLieu);
	cout << endl << "Nhap Loai NVL :  ";  getline(cin, Loai);
	cout << "\nNhap vao don vi: "; getline(cin, Donvi);
}
void NguyenVatLieu::OutNguyenVatLieu()
{

	//cout << "\nMa NVL: " << MaNVL;
	//cout << endl << "Ten NVL :  " << TenNguyenLieu;
	//cout << endl << "Loai NVL : " << Loai;
	//cout << "\nDon vi: " << Donvi;
	cout << "\n||-----Ma NVL----||-----Ten----||-----Loai-----||------Don Vi-----||";
	cout << "\n||---" << MaNVL << "---||---" << TenNguyenLieu << "----||---" << Loai << "---||----" << Donvi << "----||" << endl;
}

istream& operator >>(istream &is, NguyenVatLieu &x)
{
	cout << endl << "Nhap Ten NVL : ";  getline(is, x.TenNguyenLieu);
	cout << endl << "Nhap Loai NVL :  ";  getline(is, x.Loai);
	cout << "\nNhap vao don vi: "; getline(is, x.Donvi);


	return is;
}

 ostream&  operator <<(ostream &os, NguyenVatLieu x)
{
	 os << "\n||-----Ma NVL----||-----Ten----||-----Loai-----||------Don Vi-----||";
	 os << "\n||---" << x.MaNVL << "---||---" << x.TenNguyenLieu << "----||---" << x.Loai << "---||----" << x.Donvi << "----||" << endl;
 
	return os;
}

string NguyenVatLieu::Getter_MaNVL()
{
	return MaNVL;
}

void NguyenVatLieu::Setter_MaNVL(string x)
{
	MaNVL = x;
}



NguyenVatLieu::NguyenVatLieu()
{
}


NguyenVatLieu::~NguyenVatLieu()
{
}
