#include "PhieuXuatNVL.h"

void PhieuXuatNVL::Nhap()
{
	cin.ignore();
	cout << "-------------------------PHIEU XUAT NGUYEN VAT LIEU--------------------";
	cout << "\nMa so phieu xuat: "; getline(cin, SoPhieu);
	cout << "\t\t Ngay xuat Kho:";
	Date.InDate();
	cout << "\nNhap so luong Chi Tiet NVL: ";
	cin >> SoLuongChiTietPhieuXuat;
	//cout << "\nSTT   |       Ma NVL      |    Ten NVL    |     Don Vi    |    SL     |" << endl;
	DSChiTietPhieuXuat = new ChiTietNhapNVL[SoLuongChiTietPhieuXuat];

	for (int i = 0; i < SoLuongChiTietPhieuXuat; i++)
	{
		Temp.Nhap();
		DSChiTietPhieuXuat[i] = Temp;
		Temp.Setter_STT(i + 1);

	}

}

void PhieuXuatNVL::Xuat()
{

	
	cout << "\n-------------------------PHIEU XUAT NGUYEN VAT LIEU--------------------";
	cout << "\nSo phieu: " << SoPhieu;
	cout << "\t\t Ngay:";
	Date.OutDate();
	//cout << "\nSTT   |       Ma NVL      |    Ten NVL    |     Don Vi    |    SL     |" << endl;

	for (int i = 0; i < SoLuongChiTietPhieuXuat; i++)
	{

		DSChiTietPhieuXuat[i].Xuat();
		cout << endl;
	}



}

PhieuXuatNVL& PhieuXuatNVL::operator=(const  PhieuXuatNVL &x)
{
	Temp = x.Temp;
	Date = x.Date;
	SoPhieu = x.SoPhieu;
	LyDo = x.LyDo;
	SoLuongChiTietPhieuXuat = x.SoLuongChiTietPhieuXuat;
	DSachNVL = x.DSachNVL;

	DSChiTietPhieuXuat = new ChiTietNhapNVL[SoLuongChiTietPhieuXuat];
	for (int i = 0; i < SoLuongChiTietPhieuXuat; i++)
	{
		DSChiTietPhieuXuat[i] = x.DSChiTietPhieuXuat[i];
	}

	return *this;

}

PhieuXuatNVL::PhieuXuatNVL(const DanhSachNVL x, const ChiTietNhapNVL DS)
{
	DSachNVL = x;
	Temp = DS;

}
PhieuXuatNVL::PhieuXuatNVL(const PhieuXuatNVL &x)
{
	SoLuongChiTietPhieuXuat = x.SoLuongChiTietPhieuXuat;
	SoPhieu = x.SoPhieu;
	LyDo = x.LyDo;
	DSachNVL = x.DSachNVL;
	Temp = x.Temp;
	DSChiTietPhieuXuat = new ChiTietNhapNVL[SoLuongChiTietPhieuXuat];
	for (int i = 0; i < SoLuongChiTietPhieuXuat; i++)
	{
		DSChiTietPhieuXuat[i] = x.DSChiTietPhieuXuat[i];
	}

}
ChiTietNhapNVL PhieuXuatNVL::CopyChiTietXuat(int n)
{
	return DSChiTietPhieuXuat[n];

}


PhieuXuatNVL::PhieuXuatNVL()
{
}


PhieuXuatNVL::~PhieuXuatNVL()
{
}
