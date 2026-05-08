#include "BTH_Bai2_Ngay.cpp"
int main () {
	CDate b (1, 1, 2024);
	b.Xuat(); 
	cout<<endl; 
	cout<<"Ngay trong thang la: "<<b.NgayTrongThang();
	cout<<endl;
	if (b.ishople())
		cout << "Ngay hop le"<<endl;		
	else 
		cout << "Ngay khong hop le"<<endl;
	if (b.isNamNhuan())
		cout << "Nam nhuan"<<endl;
	else  
		cout <<"Nam khong nhuan"<<endl; 
	//gan ngay ke tiep vo 1 CDate a 
	cout << "Ngay ke tiep la: ";
	CDate a = b.ngayKeTiep();
	a.Xuat();
	//gan ngay truoc do vo 1 CDate c 
	cout<<endl;
	cout << "Ngay truoc do la: ";
	CDate c = b.ngayTruocDo();
	c.Xuat();

	return 0;
}
