#include<iostream>
#include<conio.h>
using namespace std;

int main(){
	string nama;
	
	cout<<"Tebak Kegantenganmu"<<endl;
	cout<<"==================="<<endl;
	
	cout<<"Nama Kamu : "; cin>>nama;

	if(nama == "HALO"){
		cout<<"ANDA GANTENG";
	}
	else{
		cout<<"SIAPA YA?";
	}
	
	_getch();
	return 0;
}
