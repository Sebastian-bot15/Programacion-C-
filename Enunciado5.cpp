//Sebastian Caiza

//Multiplicar cada elemento de un arreglo por un número dado usando una función con paso por valor, sin modificar el arreglo original.

#include <iostream>

using namespace std;

void mostrarMultiplicado(int x, int m){
	
    cout << x * m << " ";
    
}

int main(){
	
    int numeros[5] = {2, 4, 6, 8, 10};  

    int multi;
    cout<<"Ingrese el numero multiplicador: ";
    cin>>multi;

    cout<<"Resultados:"<< endl;
    
    for (int i = 0; i < 5; i++) {
        mostrarMultiplicado(numeros[i], multi);  
    }

    return 0;
}
