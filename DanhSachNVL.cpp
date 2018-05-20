#include "DanhSachNVL.h"
void DanhSachNVL::Setter_LaySoLuong(int x)
{
	SoLuongNVL = x;
}

int DanhSachNVL::Getter_LaySoLuong()
{
	return SoLuongNVL;
}
void DanhSachNVL::Nhap()
{
	
	cout << "\nNhap vao so luong nguyen vat lieu: ";
	cin >> SoLuongNVL;

	Danhsach = new NguyenVatLieu[SoLuongNVL];
	cin.ignore();
	for (int i = 0; i < SoLuongNVL; i++)
	{
		cout << "\nNhap vao NVL  thu: " << i + 1;
		
			string maso;
			bool Check;
			
			do
			{
				Check = true;
				cout << "\nNhap vao ma NVL:";
				getline(cin, maso);

				for (int i = 0; i < SoLuongNVL; i++)
				{
					if (maso == Danhsach[i].Getter_MaNVL())
					{
						cout << "\nMa so NVL khong duoc trung nhau xin nhap lai.";
						Check = false;
						break;
					}
				}

			} while (Check == false);


			Danhsach[i].InNguyenVatLieu();
			Danhsach[i].Setter_MaNVL(maso);
			cout << "~~~~~~~~~~~~~~~~~~~~~~~~~";


	}

}
void DanhSachNVL::Xuat()
{

	cout << "\n---------------------Xuat Nguyen vat lieu------------------------";
	for (int i = 0; i < SoLuongNVL; i++)
	{
		
		cout << "\nNguyen vat lieu thu " << i + 1 << ": ";

		Danhsach[i].OutNguyenVatLieu();
		cout << endl;
	}
}

//==================OVERLOAD OPERATOR==========================


istream& operator >>(istream &is, DanhSachNVL &x)
{
	cout << "\nNhap vao so luong nguyen vat lieu: ";
	is >> x.SoLuongNVL;

	x.Danhsach = new NguyenVatLieu[x.SoLuongNVL];
	is.ignore();
	for (int i = 0; i < x.SoLuongNVL; i++)
	{
		cout << "\nNhap vao NVL  thu: " << i + 1;

		string maso;
		bool Check;

		do
		{
			Check = true;
			cout << "\nNhap vao ma NVL:";
			getline(is, maso);

			for (int i = 0; i < x.SoLuongNVL; i++)
			{
				if (maso == x.Danhsach[i].Getter_MaNVL())
				{
					cout << "\nMa so NVL khong duoc trung nhau xin nhap lai.";
					Check = false;
					break;
				}
			}

		} while (Check == false);


		x.Danhsach[i].InNguyenVatLieu();
		x.Danhsach[i].Setter_MaNVL(maso);
		cout << "~~~~~~~~~~~~~~~~~~~~~~~~~";


	}
	return is;
}
ostream&  operator <<(ostream &os, DanhSachNVL x)
{
	os << "\n---------------------Xuat Nguyen vat lieu------------------------";
	for (int i = 0; i < x.SoLuongNVL; i++)
	{

		os << "\nNguyen vat lieu thu " << i + 1 << ": ";

		x.Danhsach[i].OutNguyenVatLieu();
		os << endl;
	}

	return os;
}







//============================================================

int DanhSachNVL::KiemTraNVL(string manvl)
{
	//Danhsach = new NguyenVatLieu[SoLuongNVL];
	
	for (int i = 0; i < SoLuongNVL; i++)

	{
		if (Danhsach[i].Getter_MaNVL() == manvl)
			return i;
	}
	return -1;

}

void DanhSachNVL::KiemTraNguyenVatLieu()
{
	string maso;
	//Danhsach = new NguyenVatLieu[SoLuongNVL];
	cin.ignore();
	do
	{

		int i;
		cout << "\nNhap ma NVL kiem tra: ";
		getline(cin, maso);
		for ( i = 0; i < SoLuongNVL; i++)
		{
		
			if (KiemTraNVL(maso) !=  -1)
			{
				i = KiemTraNVL(maso);
				cout << "\nMa NVL co trong DS";
				cout << "\nMa so NVL: " << Danhsach[i].Getter_MaNVL();
				Danhsach[i].OutNguyenVatLieu();
				break;

			}
			else
			{
				cout << "\nMa NVL nhap khong co trong DS xin kiem tra lai !";
				break;
			}

		}
		
	} while (KiemTraNVL(maso) == -1);
}


NguyenVatLieu DanhSachNVL::TraVeNVLTaiViTri(int  n)
{
	return Danhsach[n];
}

void DanhSachNVL::XuatViTri(int n)
{
	Danhsach[n].OutNguyenVatLieu();
}







//-------------------------------------------------------------

//Ham copy constructor khi co con tro;
DanhSachNVL::DanhSachNVL(const DanhSachNVL &x)
{
	SoLuongNVL = x.SoLuongNVL;
	Danhsach = new NguyenVatLieu[SoLuongNVL];

	for (int i = 0; i < SoLuongNVL; i++)
	{
		Danhsach[i] = x.Danhsach[i];
	}


}

DanhSachNVL::DanhSachNVL()
{

}


DanhSachNVL::~DanhSachNVL()
{
}
