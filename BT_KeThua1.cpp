#include <iostream>
#include <string>
using namespace std;
class Nguoi {
	string HoTen;
	usigned int NamSinh;
	public:
		void Nhap (){
			cout<<"Nhap ho ten: ";
			getline (cin,HoTen);
			cout<<"Nhap nam sinh: ";
			cin.ignore();//xoa ki tu enter sau khi nhap ns
		}
		void Xuat (){
			cout<<"Ho ten: "<<HoTen<<endl;
			cout<<"Nam sinh: "<<NamSinh<<endl;
		}
		unsigned int tinhtuoi (){
			return 2026-NamSinh;
		}
};
