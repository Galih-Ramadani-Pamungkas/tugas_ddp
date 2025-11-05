
#include <iostream>
using namespace std;

int main() {
	int menit,jam;
	int hari,dtk,jumdet;
	

	cout <<"Masukan jumlah detik yang kamu inginkan:";
	cin >> dtk;
	
    hari=dtk/86400;
	jam=(dtk%86400)/3600;
	menit=(dtk%3600)/60;
	jumdet=dtk%60;
	
	cout << endl;
	cout << "hasil konversi:" <<endl;
	cout << dtk << " " << "detik" << " " << "=" << hari << "hari" <<"-"<< jam <<"jam"<< "-" << menit <<"menit"<<"-" << jumdet <<"detik";
    
}



