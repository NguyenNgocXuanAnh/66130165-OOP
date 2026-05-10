#include <iostream>
#include <string>
using namespace std; 
class Circle {
	protected:
		double radius;
		string color;
	public:
		void Nhap (){
			cout<<"Nhap ban kinh: ";
			cin>>radius;
			cout<<"Nhap mau sac: ";
			cin>>color;
		}	
		double Area (){
			return radius*radius*3.14;
		}	
		void Xuat (){
			cout<<"Ban kinh: "<<radius<<endl;
			cout<<"Mau sac: "<<color<<endl;
			cout<<"Dien tich: "<<Area()<<endl;
		}
};
class Cylinder:public Circle{
	protected: 
		double height;
	public:
		void NhapCylinder (){
			cout<<"Nhap do cao: ";
			cin>>height;
		}
		double Volume (){
			return Area()*height;
		}
		void XuatCylinder (){
			Xuat();
			cout<<"Chieu cao: "<<height<<endl;
			cout<<"The tich: "<<Volume()<<endl;
		}
};
int main (){
//	Circle htron1;
//	htron1.Nhap();
//	htron1.Area();
//	htron1.Xuat();
	Cylinder htru1;
	htru1.Nhap();
	htru1.NhapCylinder();
	htru1.Volume();
	htru1.XuatCylinder();
	return 0;
}

