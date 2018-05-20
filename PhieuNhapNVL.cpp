#include "PhieuNhapNVL.h"



void PhieuNhapNVL::Nhap()
{
	
	
	cout << "\n-------------------------PHIEU NHAP NGUYEN VAT LIEU--------------------";
	cin.ignore();
	cout << "\nMa So Phieu: "; getline(cin, SoPhieu);
	cout << "\t\t Ngay nhap kho: ";
	Date.InDate();
	cout << "\nNhap so luong NVL: ";
	cin >> SoLuongChiTietPhieuNhap;
	//cout << "\nSTT   |       Ma NVL      |    Ten NVL    |     Don Vi    |    SL     |" << endl;
	DSChiTietPhieuNhap = new ChiTietNhapNVL[SoLuongChiTietPhieuNhap];
	
	for (int i = 0; i < SoLuongChiTietPhieuNhap; i++)
	{
		Temp.Nhap();
		DSChiTietPhieuNhap[i] = Temp;
		
		
	}



}
void PhieuNhapNVL::Xuat()
{

	
	cout << "\n\a-------------------------IN PHIEU NHAP NGUYEN VAT LIEU--------------------";
	cout << "\nMa So Phieu: " << SoPhieu;
	cout << "\t\t Ngay:";
	Date.OutDate();
	//cout << "\nSTT   |       Ma NVL      |    Ten NVL    |     Don Vi    |    SL     |" << endl;

	for (int i = 0; i < SoLuongChiTietPhieuNhap; i++)
	{

		DSChiTietPhieuNhap[i].Xuat();
	}



}
PhieuNhapNVL & PhieuNhapNVL::operator= (const PhieuNhapNVL &x)
{
	this->Temp = x.Temp;
	this ->Date = x.Date;
	this ->SoPhieu = x.SoPhieu;
	this ->LyDo = x.LyDo;
	this -> SoLuongChiTietPhieuNhap = x.SoLuongChiTietPhieuNhap;
	this ->DSachNVL = x.DSachNVL;
	this ->DSChiTietPhieuNhap = new ChiTietNhapNVL[this ->SoLuongChiTietPhieuNhap];
	for (int i = 0; i < this ->SoLuongChiTietPhieuNhap; i++)
	{
		this ->DSChiTietPhieuNhap[i] = x.DSChiTietPhieuNhap[i];
	}
	return *this;

}

bool  PhieuNhapNVL::operator == (const PhieuNhapNVL &x)
{
	if (SoLuongChiTietPhieuNhap == x.SoLuongChiTietPhieuNhap && SoPhieu == x.SoPhieu)
		return true;
	return false;

}
PhieuNhapNVL::PhieuNhapNVL(const DanhSachNVL x, const ChiTietNhapNVL DS)
{
	DSachNVL = x;
	Temp = DS;
	
}

PhieuNhapNVL::PhieuNhapNVL( const PhieuNhapNVL &x)
{
	SoLuongChiTietPhieuNhap = x.SoLuongChiTietPhieuNhap;
	SoPhieu = x.SoPhieu;
	LyDo = x.LyDo;
	DSachNVL = x.DSachNVL;
	Temp = x.Temp;
	DSChiTietPhieuNhap = new ChiTietNhapNVL[SoLuongChiTietPhieuNhap];
	for (int i = 0; i < SoLuongChiTietPhieuNhap; i++)
	{
		DSChiTietPhieuNhap[i] = x.DSChiTietPhieuNhap[i];
	}
	


}

string PhieuNhapNVL::Getter_SoPhieu()
{
	return SoPhieu;
}
//Lay so luong cua tat ca cac chi tiet nhap
int PhieuNhapNVL::Getter_soLuong()
{
	return SoLuongChiTietPhieuNhap;
}

ChiTietNhapNVL PhieuNhapNVL::CopyChiTiet(int n)
{
	return DSChiTietPhieuNhap[n];

}

PhieuNhapNVL::PhieuNhapNVL()
{
}

PhieuNhapNVL::~PhieuNhapNVL()
{
}
