#include<iostream>
#include<cstdlib>
#include<string>
#include<math.h>

using namespace std;

void header(){
	cout<<"-----------------------SELAMAT DATANG DI BANK KOTENG------------------\n";
	cout<<"------------------------DIBUAT OLEH MUHAMMAD IHSAN-------------------\n";

}
void footer(){
	cout<<"\n--------------TERIMAKASIH TELAH MENGGUNAKAN BANK KOTENG-------------\n";
	cout<<"----------------------DIBUAT OLEH MUHAMMAD IHSAN---------------------\n";
}
int main(){
	string pin;
	char salahpin;
	char ulang = 'Y';
	do{
	header();
	cout<<"MASUKAN PIN : ";cin>>pin;
	
	if(pin!="100202")
	{
		cout<<"PIN YANG ANDA MASUKAN SALAH !\n";
		cout<<"APAKAH ANDA INGIN MASUKAN PIN ULANG ? [Y/N]\n";
		cout<<"Y= YA\n";
		cout<<"N= TIDAK\n";
		cout<<"MASUKAN PILIHAN ANDA : ";cin>>ulang;
		salahpin='3';
	}
	else
	{
		int saldo = 23000000;
		int pilihan = ulang;
		int setor = 0;
		int tarik = 0;
		char ulang = 'y';
		do {
			setor=0;
			tarik=0;
			salahpin='0';
			header();
			cout<<"\t\t####################################\n\n";
			cout<<"\t >1 Setor Tunai			Cek Saldo 3<\n";
			cout<<"\t >2 Tarik Tunai			   Keluar 4<\n\n";
			cout<<"\t\t####################################\n\n";
			cout<<"Masukan Pilihan Anda :  "; cin>>pilihan;
	
			cout<<endl;
			switch (pilihan){
				case 1 :
				header();
				cout<<"Masukan Uang Yang Akan Anda Setor :";cin>>setor;
				cout<<endl;
				saldo+=setor;
				cout<<"Jumlah Saldo Anda Menjadi Rp. "<<saldo<<endl;
				footer();
				cout<<"Apakah Anda Ingin Melakukan Transaksi Lain ? [y/n]\n";
			    cout<<"y= YA\n";
		        cout<<"n= TIDAK\n";
		        cout<<"MASUKAN PILIHAN ANDA : ";cin>>ulang;
		
				break;
				case 2 :
				header();
				cout<<"Jumlah Saldo Anda : 23000000\n";
				cout<<"Masukan Nominal Penarikan Anda :";cin>>tarik;
				cout<<endl;
				if(tarik>saldo){
					cout<<"Jumlah Saldo Yang Anda Miliki Tidak Mencukupi";
					cout<<"Apakah Anda Ingin Melakukan Transaksi Lain ? [y\n]\n";
					cout<<"y= YA\n";
		            cout<<"n= TIDAK\n";
		            cout<<"MASUKAN PILIHAN ANDA : ";cin>>ulang;
			
				}
				else
				{
					cout<<"Proses Penarikan Berhasil"<<endl;
					saldo-=tarik;
					cout<<"Sisa Saldo Di Tabungan Anda Rp. "<<saldo;
					cout<<endl;
					footer();
					cout<<"Apakah Anda Ingin Melakukan Transaksi Lain ? [y/n]\n";
			    	cout<<"y= YA\n";
		            cout<<"n= TIDAK\n";
		            cout<<"MASUKAN PILIHAN ANDA : ";cin>>ulang;
					cout<<endl;
			
				}
				break;
				case 3 :
				header();
				cout<<"Jumlah Saldo Anda Rp. "<<saldo<<endl<<endl;
				footer();
				cout<<"Apakah Anda Ingin Melakukan Transaksi Lain ? [y/n]\n";
				cout<<"y= YA\n";
		        cout<<"n= TIDAK\n";
		        cout<<"MASUKAN PILIHAN ANDA : ";cin>>ulang;
				cout<<endl;
		
				break;
				case 4 :
				ulang='n';
				break;
				default :
				cout<<"Pilihan Tidak Ada Dalam Sistem\n\n";
				cout<<"Apakah Anda Ingin Melakukan Transaksi Lain ? [y/n]\n";
				cout<<"y= YA\n";
		        cout<<"n= TIDAK\n";
		        cout<<"MASUKAN PILIHAN ANDA : ";cin>>ulang;
				cout<<endl;
				
			}
			cout<<ulang<<endl<<salahpin;
			if(ulang=='N')ulang='n';
		}while ((ulang!='n'));
	}
}	while(salahpin!='0');

}

