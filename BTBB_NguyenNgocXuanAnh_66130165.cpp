#include <iostream>
#include <string.h>
using namespace std;
#define N 100
typedef struct {
	string ten;
	float dtb;
} sv;

void Nhap (int &n);
void NhapSV (int n, sv *a);
void SapXep (int n, sv *a);
void XuatSV (int n, sv *a);

int main (){
	int n; 
	sv *a = new sv[N]; 
	Nhap (n);
	NhapSV(n, a);
	SapXep(n, a);
	XuatSV(n,a);
	delete [] a;
	return 0;
}
void Nhap (int &n){
	cout<<"Nhap n: ";
	cin>>n;
}

void NhapSV (int n, sv *a){
	for (int i=0; i<n; i++){
		cout <<"Nhap ten sinh vien thu "<<i+1<<": ";
		fflush(stdin);
		getline(cin, (*(a+i)).ten);
		cout <<"Nhap diem trung binh sinh vien thu "<<i+1<<": ";
		cin >> (*(a+i)).dtb;
	}
}
void SapXep (int n, sv *a) {
	for (int i=0; i<n; i++){
		sv x = *(a+i);
		int j = i-1;
		while (j>=0 && (*(a+j)).dtb < x.dtb){
			*(a+j+1)= *(a+j);
			j--;
		}
		*(a+j+1) = x;
	}
}
void XuatSV (int n, sv *a){
	for (int i=0; i<n; i++){
		cout << "Sinh vien thu "<<i+1<<":"<<endl;
		cout << "Ho va Ten: "<< (*(a+i)).ten<<endl;
		cout << "Diem trung binh: "<< (*(a+i)).dtb<<endl;
	}
}

