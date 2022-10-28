#include<iostream>
using namespace std;
int main (){
	//program menentukan positif negatif
	int a;
	cout<<"silahkan masukan angka = ";
	cin>>a;
	
	if(a>0){
		cout<<"bilangan positif";
	}
	else if (a==0){
		cout<<"angka nol";
	}
	
	
	else{
		cout<<"bilangan negatif";	
	}
		
		cout<<endl<<endl;
		
		
		if(a%2 == 0){
			cout<<"bilangan ganjil";
		}
	
	return 0;
}





