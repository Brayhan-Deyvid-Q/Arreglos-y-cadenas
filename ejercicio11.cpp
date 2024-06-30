#include <iostream>
using namespace std; 


int main(){
	int n, sum = 0;
	cout<<"Ingrese la cantidad de valores a sumar: ";
	cin>>n;
	
	int arr[n];
	
	cout<<"Ingrese los elementos del arreglo: "<<endl;
	for (int i = 0; i < n; i++){
		cin>>arr[i];
		sum+=arr[i];
	}
	
	cout<<"La suma de los elementos es: "<< sum<<endl;
	
	return 0;
}