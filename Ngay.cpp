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

