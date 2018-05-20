#pragma once
#pragma once
#include <iostream>
using namespace std;
#define FALSE 0
#define TRUE !FALSE
class Ngay
{
private:
	int mNgay, mThang, mNam;
public:
	void InDate();
	void OutDate();
	void  Setter_Ngay(int);
	int Getter_Ngay();
	void  Setter_Thang(int);
	int Getter_Thang();
	void  Setter_Nam(int);
	int Getter_Nam();
	int KiemtraNgay();
	
	friend istream&  operator >>(istream &, Ngay &);
	friend ostream & operator <<(ostream &, Ngay);
	Ngay& operator = (const Ngay &);
	Ngay();
	~Ngay();
};
