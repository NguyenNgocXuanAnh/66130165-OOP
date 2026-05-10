#include <iostrem>
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
};

