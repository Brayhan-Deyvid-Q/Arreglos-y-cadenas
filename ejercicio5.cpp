#include <iostream>
#include <windows.h>

using namespace std;

int main(){
SetConsoleOutputCP(CP_UTF8);

int n,cont_m,cont_men,i,menor,mayor;
int numero[100];

 cont_m = 0;
 cont_men = 0;

 cout << "Introduzca la cantidad de números: " << endl;
 cin >> n;

 cout << endl;

 for( i=0; i<n; i++ ){
	
	cout << "Introduzca un número: " << endl;
	cin >> numero[i];
}
 menor = numero[0];
 mayor = numero[0];
 for (i=0;i<n;i++) {
	
	if (numero[i]>mayor){
	mayor = numero[i]; 
	cont_m = 1;
	}else if(numero[i] == mayor){
		cont_m++;
	}
	if(numero[i] < menor){
	    menor = numero[i];
	    cont_men = 1;
	}else if(numero[i] == menor){
	    cont_men++;
	}
}
 cout << endl;
 cout << "El mayor número es: " << mayor << endl;
 cout << "El mayor número se repite: " << cont_m << endl;
 cout <<"El menor número es: " << menor << endl;
 cout <<"El menor número se repite: " <<cont_men << endl;

 return 0;
}