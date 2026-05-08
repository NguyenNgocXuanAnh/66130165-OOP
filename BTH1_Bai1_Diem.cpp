#include <iostream>
#include "BTH1_Bai1_Diem.h"
#include <math.h> 
using namespace std;
Diem::Diem () {
	x = 5;
	y = 10;
}
Diem::Diem (int xmoi, int ymoi) {
	x = xmoi;
	y = ymoi;
}
Diem::Diem (const Diem &p){
	x = p.x;
	y = p.y;
}
float Diem::khoangcach (const Diem &b) {
	float kq;
	kq = sqrt((this -> x - b.x)*(this -> x - b.x)+(this -> y - b.y)*(this -> y - b.y));
	return kq;
}
istream& operator>>(istream& in, Diem &obj) {
	cout<<"Nhap toa do x: ";
	in>>obj.x;
	cout<<"Nhap toa do y: ";
	in>>obj.y;
	return in;
}

ostream& operator<<(ostream& out, const Diem &obj) {
	out<<"("<<obj.x<<", "<<obj.y<<")"<<endl;
	return out;
}
