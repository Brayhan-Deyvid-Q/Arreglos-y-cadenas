#include<iostream>
using namespace std;

int main(){
	
	int sumapar=0;
	int sumaimpar=0;
	int cantidad;
	cout<<"Ingrese la cantidad de datos: ";
	cin>>cantidad;
	
	int vector[cantidad];
	
	cout<<"Ingrese los valores: "<<endl;
	for(int i=0; i<cantidad; i++){
		cin>>vector[i];
	}
	
	for (int i = 0; i < cantidad; i++){
		if (vector[i]%2==0){
			sumapar+=vector[i];
		}else{
			sumaimpar+=vector[i];
		}
	}
	
	cout<<"La suma de los valores pares es de: "<<sumapar<<endl;
	cout<<"La suma de los valores impares es de: "<<sumaimpar<<endl;
	
	return 0;
	
}