#include <iostream>
#include "Ngay.h"
using namespace std;
CDate::CDate(){
	ngay = 5;
	thang = 4;
	nam = 2005;
}
CDate::CDate(int ngaym, int thangm, int namm){
	ngay = ngaym;
	thang = thangm;
	nam = namm;
}
CDate::CDate(const CDate &d){
	ngay = d.ngay;
	thang = d.thang;
	nam = d.nam;
}
bool CDate::isNamNhuan(){
	if ((nam%4==0 && nam%100!=0)||(nam%400==0))
		return 1;
	else 
		return 0; 
	 
}
int CDate::NgayTrongThang(){
	int songay=0;
	switch (thang){
		case 1: case 3: case 5: case 7: case 8: case 10: case 12:
			songay=31;
			break;
		case 2:
			songay = isNamNhuan()?29:28;
			break;
		case 4: case 6: case 9: case 11:
			songay=30;	
			break;
	}
	return songay;
}
bool CDate::ishople(){
	if (ngay<=0||thang<=0||nam<=0) return false;
	if (ngay>NgayTrongThang()) return false;
	return true;
}
CDate CDate::ngayKeTiep() {
    CDate kq = *this;
    kq.ngay++;
    if (kq.ngay > kq.NgayTrongThang()) {
        kq.ngay = 1;
        kq.thang++;

        if (kq.thang > 12) {
            kq.thang = 1;
            kq.nam++;
        }
    }
    return kq;
}
CDate CDate::ngayTruocDo(){
	CDate kq = *this;
    kq.ngay--;
    if (kq.ngay == 0) {
        kq.thang--;
		
        if (kq.thang < 1) {
            kq.thang = 12;
            kq.nam--;
        }	
		kq.ngay = kq.NgayTrongThang();

    }
    return kq;
}
void CDate::Xuat(){
	cout<<ngay<<"/"<<thang<<"/"<<nam;
}
CDate CDate :: operator++(){
	CDate kq = *this;
    kq.ngay++;
    if (kq.ngay > kq.NgayTrongThang()) {
        kq.ngay = 1;
        kq.thang++;

        if (kq.thang > 12) {
            kq.thang = 1;
            kq.nam++;
        }
    }
    return kq;
}
CDate CDate :: operator--(){
	CDate kq = *this;
    kq.ngay--;
    if (kq.ngay == 0) {
        kq.thang--;
		
        if (kq.thang < 1) {
            kq.thang = 12;
            kq.nam--;
        }	
		kq.ngay = kq.NgayTrongThang();

    }
    return kq;
} 
