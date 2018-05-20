

#include "Ngay.h"
int Ngay::KiemtraNgay()
{
	int MaxmNgay;
	switch (mThang)
	{
	case 1:
	case 3:
	case 5:
	case 7:
	case 8:
	case 10:
	case 12:
		MaxmNgay = 31;
	case 4:
	case 6:
	case 9:
	case 11:
		MaxmNgay = 30;
	default:
		break;
	}
	if ((mNam % 400 == 0) || (mNam % 100 != 0) && mNam % 4 == 0)
	{
		MaxmNgay = 29;
	}
	else
	{
		MaxmNgay = 28;
	}
	if (mNgay > MaxmNgay)
	{
		return -1;
	}
}
void Ngay::InDate()
{
	
	do {
		cout << endl << "Ngay: "; cin >> mNgay;

		cout << endl << "Thang: "; cin >> mThang;
	
		cout << endl << "Nam: "; cin >> mNam;
	
		
	} while (KiemtraNgay() == -1);

	
}
void Ngay::OutDate()
{
	cout << mNgay << "/" << mThang << "/" << mNam << endl;

}
istream & operator >>(istream &is, Ngay & x)
{
	do {
		cout << endl << "Ngay: "; cin >> x.mNgay;

		cout << endl << "Thang: "; cin >> x.mThang;

		cout << endl << "Nam: "; cin >> x.mNam;

		if (x.KiemtraNgay() == -1 || x.mThang > 12 || x.mThang < 1 || x.mNam < 2000)
		{
			cout << "\nNgay nhap vao khong hop le xin kiem tra lai!";
		}
	} while (x.KiemtraNgay() == -1 || x.mThang > 12 || x.mThang < 1 || x.mNam < 2000 );

	return is;
}
ostream& operator <<(ostream &os, Ngay x)
{
	os << x.mNgay << "/" << x.mThang << "/" << x.mNam << endl;
	return os;
}

Ngay& Ngay::operator= (const Ngay &x)
{
	mNam = x.mNam;
	mNgay = x.mNgay;
	mThang = x.mThang;
	return *this;
}

void  Ngay::Setter_Nam(int nam)
{
	mNam = nam;
}
void Ngay::Setter_Thang(int thang)
{
	mThang = thang;
}
void Ngay::Setter_Ngay(int ngay)
{
	mNgay = ngay;
}

int Ngay::Getter_Nam()
{
	return mNam;
}
int Ngay::Getter_Thang()
{

	return mThang;
}
int Ngay::Getter_Ngay()
{
	return mNgay;
}

Ngay::Ngay()
{
	mNgay = 12;
	mNam = 2018;
	mThang = 12;
}


Ngay::~Ngay()
{
}
