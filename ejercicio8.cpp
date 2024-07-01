#include<iostream>
#include<windows.h>
using namespace std;

int main(){
	int c=0;
	int numero, auxiliar;
	int vector[10];
	SetConsoleOutputCP(CP_UTF8);
	
    for(int i=0; i<10; i++){
    	cout<<"Ingrese un dígito de las 10 cifras del valor: ";
    	cin>>vector[i];
	}
	
	for (int i=0; i<5; i++){
		/*if(i=0){
		    auxiliar=vector[9];
		}else{
			axiliar=vector[]
		}*/
		auxiliar=vector[10-1-i];
		if (vector[i]==auxiliar){
		c++;	
		}
	}
	if (c==5){
		cout<<"El valor si es capicúa"<<endl;
	}else{
		cout<<"El valor no es capicúa"<<endl;
	}
	
	return 0;
}