#include <iostream>
#include <string>
using namespace std;
class HinhHoc {
	protected:
	string color;
	public:
		void Nhap (){
			cout<<"Nhap mau sac: ";
			cin>>color;
			cin.ignore();
		}
		void Xuat (){
			cout<<"Mau sac: "<<color<<endl;
		}
}; 
class HCN:public HinhHoc {
	protected:
		double cdai;
		double crong;
	public:
		void Nhaphcn (){
			cout<<"Nhap chieu dai: ";
			cin>>cdai;
			cout<<"Nhap chieu rong: ";
			cin>>crong;
		}
		double tinhdt (){
			return cdai*crong;
		}
		void Xuathcn (){
			Xuat();
			cout<<"Chieu dai: "<<cdai<<endl;
			cout<<"Chieu rong: "<<crong<<endl;
			cout<<"Dien tich: "<<tinhdt()<<endl;
		}
}; 
class HV:public HCN {
	protected:
		double canh;
	public:
		void Nhaphv (){
			cout<<"Nhap canh: ";
			cin>>canh;
			cdai=canh;
			crong=canh;
		}
		void Xuathv (){
			Xuat();
			cout<<"Canh: "<<canh<<endl;
			cout<<"Dien tich: "<<tinhdt()<<endl;
		}
}; 
int main (){
	HinhHoc hh;
	hh.Nhap();
	hh.Xuat();
	HCN hcn1;
	hcn1.Nhap();
	hcn1.Nhaphcn();
	hcn1.tinhdt();
	hcn1.Xuathcn();
	HV hv1;
	hv1.Nhap();
	hv1.Nhaphv();
	hv1.tinhdt();
	hv1.Xuathv();
	return 0;
}
