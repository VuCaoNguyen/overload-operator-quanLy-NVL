#include "TonKho.h"

TonKho::TonKho(const PhieuNhapNVL x, const PhieuXuatNVL y, const DanhSachNVL k)
{
	DSPhieuNhap = x;
	DSPhieuXuat = y;
	DSNVL = k;
	
}

void  TonKho::KiemTraTonKho()
{
	TonDau = 0;
	TonCuoi = 0;
	PhatSinhGiam = 0;
	PhatSinhhTang = 0;
	//----------------------------------------------------------------------------------------------
	int SoLuongNVLCuaDSNVL = DSNVL.Getter_LaySoLuong();//l?y s? l??ng NVL co trong danh sach
	
	NguyenVatLieu * Temp = new NguyenVatLieu[SoLuongNVLCuaDSNVL];
	for (int i = 0; i < SoLuongNVLCuaDSNVL; i++)
	{
		Temp[i] = DSNVL.TraVeNVLTaiViTri(i);
		//danh sach nvl duoc dua vao bien temp
		Temp[i].Getter_MaNVL();

	}
	//-----------------------------------------------------------------------------------------------------------
	//CoPy danh sach chi tiet nhap trong PhieuNhapNVL
	int SoLuongChiTietNVLNhap = DSPhieuNhap.Getter_soLuong();
	ChiTietPhieuNhap = new	ChiTietNhapNVL[SoLuongChiTietNVLNhap];

	for (int k = 0; k < SoLuongChiTietNVLNhap; k++)
	{
		ChiTietPhieuNhap[k] = DSPhieuNhap.CopyChiTiet(k);
		
	}
	
	//----------------------------------------------------


	int SoLuongChiTietNVLXuat = DSPhieuXuat.Getter_SoLuong();
	ChiTietPhieuXuat = new	ChiTietNhapNVL[SoLuongChiTietNVLXuat];

	for (int k = 0; k < SoLuongChiTietNVLXuat; k++)
	{
		ChiTietPhieuXuat[k] = DSPhieuXuat.CopyChiTietXuat(k);
		
	}


	//-----------------------------------------
	//Tinh PSTang
	/*for (int i = 0; i < SoLuongNVLCuaDSNVL; i++)
	{
		for (int k = 0; k < SoLuongChiTietNVLNhap; k++)
		{
			if (Temp[i].Getter_MaNVL() == ChiTietPhieuNhap[k].Getter_MaNVLCuaChiTiet())
			{
				PhatSinhhTang += ChiTietPhieuNhap[k].Getter_SoLuongCuaNVL();
			}


		}

	}*/
	//---------------------------------------------------------

	
	//----------------------------------------------------
	//Tinh PSTang

	int STT = 1;
	for (int i = 0; i < SoLuongNVLCuaDSNVL; i++)
	{
		for (int k = 0; k < SoLuongChiTietNVLXuat; k++)
		{
			if (Temp[i].Getter_MaNVL() == ChiTietPhieuNhap[k].Getter_MaNVLCuaChiTiet())
			{
				PhatSinhGiam += ChiTietPhieuXuat[k].Getter_SoLuongCuaNVL();
			}


		}
		for (int k = 0; k < SoLuongChiTietNVLNhap; k++)
		{
			if (Temp[i].Getter_MaNVL() == ChiTietPhieuNhap[k].Getter_MaNVLCuaChiTiet())
			{
				PhatSinhhTang += ChiTietPhieuNhap[k].Getter_SoLuongCuaNVL();
			}


		}

		if ((PhatSinhhTang - PhatSinhGiam) > 0)
		{ 
			cout << "\nSTT: " << STT;
			TonCuoi = TonCuoi + PhatSinhhTang - PhatSinhGiam;
			Temp[i].OutNguyenVatLieu();
			cout << "\nSo luong ton cuoi: " << TonCuoi << endl << "~~~~~~~~~~~~~";

		}

		TonDau = 0;
		TonCuoi = 0;
		PhatSinhGiam = 0;
		PhatSinhhTang = 0;

	}
	//---------------------------------------------------------------------
	
	//-------------------------
}

TonKho::TonKho()
{
}


TonKho::~TonKho()
{
}
