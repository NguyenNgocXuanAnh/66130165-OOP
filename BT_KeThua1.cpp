#include <iostream>
#include <string>
using namespace std;
class Nguoi {
	protected:
	string HoTen;
	unsigned int NamSinh;
	public:
		void Nhap (){
			cout<<"Nhap ho ten: ";
			getline (cin,HoTen);
			cout<<"Nhap nam sinh: ";
			cin>>NamSinh;
			cin.ignore();//xoa ki tu enter sau khi nhap ns
		}
		unsigned int tinhtuoi (){
			return 2026-NamSinh;
		}
		void Xuat (){
			cout<<"Ho ten: "<<HoTen<<endl;
			cout<<"Nam sinh: "<<NamSinh<<endl;
			cout<<"Tuoi: "<<tinhtuoi()<<endl;
		}
};
class SinhVien:public Nguoi{
	protected:
	string MSSV;
	double Diem;
	public:
		void NhapSV (){
			cout<<"Nhap MSSV: ";
			getline (cin,MSSV);
			cout<<"Nhap diem: ";
			cin>>Diem;
			cin.ignore();
		}
		void XuatSV (){
			Xuat();
			cout<<"MSSV: "<<MSSV<<endl;
			cout<<"Diem: "<<Diem<<endl;
		}
}; 
int main (){
//	Nguoi n1;
//	n1.Nhap();
//	n1.Xuat();
//	n1.tinhtuoi();
	SinhVien sv1;
	sv1.Nhap();
	sv1.tinhtuoi();
	sv1.NhapSV();
	cout<<"_________THONG TIN SINH VIEN_________"<<endl;
	sv1.XuatSV();
	return 0;
	
} 
