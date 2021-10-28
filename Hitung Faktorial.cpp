#include<iostream>
#include <math.h>

using namespace std;

int main()
{
	int num;
	cout<< "---------------PROGRAM MENGHITUNG ANGKA FAKTORIAL----------------\n";
	cout<<"dari angka : "; cin>>num;
	cout<<"faktortial dari angka "<<num<<"! = ";
	int result=1;
	int a=1;
	do{
		result=result*num;
		if(num != a){
			cout<<num<<" x ";
		} else {
			cout<<num<<" = ";
		}
		num--;
	}while(num>=a);
	cout<<result;
	
	return 0;
}