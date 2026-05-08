#ifndef NGAY_H
#define NGAY_H
#include <iostream>
using namespace std;
class CDate {
	int ngay;
	int thang;
	int nam;
	public: 
	CDate ();
	CDate (int ngay,int thang,int nam);
	CDate (const CDate &d);
	bool isNamNhuan();
	int NgayTrongThang();
	bool ishople();
	CDate ngayKeTiep();
	CDate ngayTruocDo(); 
	void Xuat ();
	CDate operator++();
	CDate operator--();
};
#endif 
