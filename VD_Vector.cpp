#include <iostream>
#include <vector> // push_back (pt them) lay ra pop_back()
using namespace std; 
int main (){
	//cu phap
	//vector <kieu_du lieu> ten_mang;
	vector<int> dsINT;
//	int temp;
//	cout<<"Nhap so nguyen: ";
//	cin>>temp;
//	dsINT.push_back(temp);
	dsINT.push_back(4);
	dsINT.push_back(7);
	dsINT.push_back(2);
	cout<<dsINT.at(2)<<endl; //dsINT[2];
	dsINT.pop_back();
	cout<<"So pt cua mang: "<<dsINT.size(); //kich thuoc: so pt cua mang;
	return 0;
}
