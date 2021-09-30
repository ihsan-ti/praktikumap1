#include <iostream>
#include <string>
#include <math.h>

using namespace std;

int main() {
  double m1,m2,m3;
	cout<<"Menghitung tabungan awal\n\n:";
	cout<<"silahkan masukan tabungan akhir\t:";
	cin>>m1;
	cout<<"silahkan masukan bunga pertahun (%) \t:";
	cin>>m2;
	cout<<"masukan lama menabung(tahun) \t:";
	cin>>m3;
	cout<<fixed<<"Maka tabungan awal nasabah tersebut adalah \t\t:"<<1/(1+(m2/100/2)*1+(m2/100/2)*1+(m2/100/2)*1+(m2/100/2)*1+(m2/100/2)*1+(m2/100/2)*1+(m2/100/2))*m1 << endl;
	
	cin.get();
	return 0;
}