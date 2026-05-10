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
};
class 
