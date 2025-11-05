#include<iostream>
using namespace std;

int main(){
	long dtk,total;
	int menit ,jam;
	
	cout << "masukan angka detik :";
	cin  >> dtk;
	
	jam= dtk % 86400/3600;
	menit= dtk % 3600/60;
	total= dtk % 60;
	
	cout << "hasil konversi : " <<dtk<<" "<< "detik" <<" "<< "=" << " " << jam << "jam" << "-"<< menit << "menit" << "-"<< total << "detik" <<endl;
	
	return 0;
}



