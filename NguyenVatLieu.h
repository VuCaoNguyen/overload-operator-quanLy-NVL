#pragma once
#include "Ngay.h"
#include <string>
class NguyenVatLieu

{
private:
	string MaNVL;
	string TenNguyenLieu;
	string Loai;
	string Donvi;
public:
	void InNguyenVatLieu();
	void OutNguyenVatLieu();
	string Getter_MaNVL();
	void Setter_MaNVL(string);
	NguyenVatLieu();
	~NguyenVatLieu();


	//Sử dụng hàng copy constructor có sẵn không cần phải cài đặt lại vì trong NguyenVatLieu Khong có con trỏ
	// cú phap copy constructor 
	//NguyenVatLieu(const NguyenVatLieu &);
	friend istream& operator >>(istream &, NguyenVatLieu &);
	friend ostream& operator <<(ostream &, NguyenVatLieu);


};

