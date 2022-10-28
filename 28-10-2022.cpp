#include<iostream>
using namespace std;
int main (){
	//program menentukan positif negatif
	int a;
	cout<<"silahkan masukan angka = ";
	cin>>a;
	
	if(a>0){
		cout<<"bilangan positif";
		if(a%2 == 0){
			cout<<"bilangan genap";
		}
		else {
			cout<<"bilangan ganjil";
		}
	}
	else if (a==0){
		cout<<"angka nol";
	}
	
	
	else{
		cout<<"bilangan negatif";	
		if(a%2 == 0){
			cout<<"bilangan genap";
		}
		else {
			cout<<"bilangan ganjil";
		}
	}
		
		cout<<endl<<endl;
		

	
	return 0;
}





