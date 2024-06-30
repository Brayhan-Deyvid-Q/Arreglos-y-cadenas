#include<iostream>
using namespace std;

int main(){
	
	int cantidad, auxiliar;
	cout<<"Ingrese la cantidad de elementos: "<<endl;
	cin>>cantidad;
	int  vector[cantidad];
	
	cout<<"Ingrese los valores: "<<endl;
	
	for(int i=0; i<cantidad; i++){
		cin>>vector[i];
	}
	
	
	for(int i=0; i<cantidad/2; i++){
		auxiliar=vector[i];
		vector[i]=vector[cantidad -1 -i];
		vector[cantidad -1 -i]=auxiliar;
	}
	
	
	cout<<"El los valroes invertidos son: "<<endl;
	for(int i=0; i<cantidad; i++){
		cout<<vector[i]<<endl;
	}
	return 0;
}