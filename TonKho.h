#pragma once
#include "PhieuXuatNVL.h"
#include "PhieuNhapNVL.h"


class TonKho
{
private:
	int TonDau;
	int TonCuoi;
	int PhatSinhhTang;
	int PhatSinhGiam;
	PhieuNhapNVL  DSPhieuNhap;
	PhieuXuatNVL DSPhieuXuat;
	DanhSachNVL DSNVL;
	ChiTietNhapNVL *ChiTietPhieuNhap;
	ChiTietNhapNVL *ChiTietPhieuXuat;


public:

	void KiemTraTonKho();
	TonKho(const PhieuNhapNVL, const PhieuXuatNVL, const DanhSachNVL);
	//TonKho(const TonKho &);
	TonKho();
	~TonKho(); 
};

