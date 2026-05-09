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
