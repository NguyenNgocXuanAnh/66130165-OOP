#include <iostream>
#include "Diem.h"
#include <math.h> 
using namespace std;
Diem::Diem () {
	x = 5;
	y = 10;
}
Diem::Diem (int xmoi, int ymoi) {
	x = xmoi;
	y = ymoi;
}
Diem::Diem (const Diem &p){
	x = p.x;
	y = p.y;
}

