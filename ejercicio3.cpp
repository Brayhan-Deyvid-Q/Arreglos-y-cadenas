#include <iostream>
#include <string.h> 
using namespace std;

int contarOcurrencia(char cadena[], char letra) {
    int longitud = strlen(cadena);
    int contadorletra = 0;
    for (int i = 0; i < longitud; ++i) {
        if (cadena[i] == letra) {
            contadorletra++; 
        }
    }
	return contadorletra;
}

int main() {
    const int maxi_longi = 1000;
    char cadena[maxi_longi];
    char letra;
	cout << "Ingrese una cadena de texto: "; cin.getline(cadena, maxi_longi);
	cout << "Ingrese la letra a contar: "; cin >> letra;
	int ocurrencia = contarOcurrencia(cadena, letra);
	cout << "La letra '" << letra << "' aparece " << ocurrencia << " veces en la cadena." << endl;
	return 0;
}