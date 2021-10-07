#include <iostream>
#include <string>
#include <math.h>

using namespace std;
// g=golongan, jk=jam kerja, jl=jam lembur, gp=gaji pokok, gl= gaji lembur, jm=jam masuk, jklr=jam keluar 
int main() {
string nama;
	int g, jk, jl, gp, gl;
	float jm, jklr;
    cout << endl << "Penghitung Gaji Lembur Karyawan PT.Mencari Cinta Sejati" << endl;
	cout << "masukan nama karyawan : ";
	cin >> nama;
	cout << "masukan golongan karyawan: ";
	cin >> g;
	cout << "jam  masuk kerja karyawan: ";
	cin >> jm;
	cout << "jam keluar kerja karyawan: ";
	cin >> jklr;
	cout << endl << "================GAJI ANDA ADALAH==============" << endl << endl;
	jk = (jklr - jm) * 22;
	if (jk > 150) {
		jl = jk - 150;
	}
	else {
		jl = 0;
	}
	if (g == 1) {
		cout << "gaji pokok : " << 1000000 << endl;
		cout << "gaji lembur : " << jl * 10000 << endl;
		cout << "gaji yang di terima : " << 1000000 + (jl * 10000) << endl;
		cout << endl << endl;
	}
	else if (g == 2) {
		cout << "gaji pokok : " << 2000000 << endl;
		cout << "gaji lembur : " << jl * 20000 << endl;
		cout << "gaji yang diterima : " << 2000000 + (jl * 20000) << endl;
		cout << endl << endl;
	}
	else if (g == 3) {
		cout << "gaji pokok : " << 3000000 << endl;
		cout << "gaji lembur : " << jl * 30000 << endl;
		cout <<  "gaji yang diterima : " << 3000000 + (jl * 30000) << endl;
		cout << endl << endl;
	}
	else if (g == 4) {
		cout << "gaji pokok: " << 4000000 << endl;
		cout << "gaji lebur: " << jl * 40000 << endl;
		cout << "gaji yang diterima: " << 4000000 + (jl * 40000) << endl;
		cout << endl << endl;
	}
	else if (g == 5) {
		cout << "gaji pokok: " << 5000000 << endl;
		cout << "gaji lembur  : " << jl * 50000 << endl;
		cout << "gaji yang diterima : " << 5000000 + (jl * 50000) << endl;
		cout << endl << endl;
	}

	return 0;
}
