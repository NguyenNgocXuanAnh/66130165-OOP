#ifndef DIEM_H
#define DIEM_H
#include <iostream>
using namespace std;
class Diem {
	int x;
	int y;
	public: 
	Diem ();
	Diem (int x, int y);
	Diem (const Diem &p);
	float khoangcach(const Diem &b);
	friend istream& operator>>(istream& in, Diem &obj);
	friend ostream& operator<<(ostream& out, const Diem &obj);
};
#endif
