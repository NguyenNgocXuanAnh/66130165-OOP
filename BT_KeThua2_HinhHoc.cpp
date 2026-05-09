#include <iostream>
#include <string>
using namespace std;
class HinhHoc {
	protected:
	string color;
	void Nhap (){
		cout<<"Nhap mau sac: ";
		getline(cin,color);
		cin.ignore();
	}
	void Xuat (){
		cout<<"Mau sac: "<<color;
	}
}; 
class HCN:public HinhHoc {
	protected:
		double cdai;
		double crong;
		void Nhaphcn (){
			cout<<"Nhap chieu dai: ";
			cin>>cdai;
			cout<<"Nhap chieu rong: ";
			cin>>crong;
		}
		double tinhdt (){
			return cdai*crong;
		}
		void Xuat (){
			cout<<"Chieu dai: "<<cdai<<endl;
			cout<<"Chieu rong: "<<crong<<endl;
			cout<<"Dien tich: "<<tinhdt()<<endl;
		}
}; 
