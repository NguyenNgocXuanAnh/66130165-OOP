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
			cin>>NamSinh;
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
class SinhVien:public Nguoi{
	string MSSV;
	double Diem;
	public:
		void Nhap (){
			cout<<"Nhap MSSV: ";
			getline (cin,MSSV);
			cout<<"Nhap diem: ";
			cin>>Diem;
			cin.ignore();
		}
		void Xuat (){
			xuat();
			cout<<"MSSV: "<<MSSV<<endl;
			cout<<"Diem: "<<Diem<<endl;
		}
}; 
