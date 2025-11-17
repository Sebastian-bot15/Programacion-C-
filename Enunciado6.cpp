//Sebastian Caiza

//Contar cuántos números de un arreglo son pares mediante una función con paso por valor que retorna la cantidad.

#include <iostream>

using namespace std;

int Pares(int par){
	
    if (par % 2 == 0)
        return 1;
    else
        return 0;
}

int main (){
    
    int par = 0;   
    int numeros[7] = {1,2,5,8,10,12,15};
    
    cout<<"Valores Encontrados: ";
    
    for (int i = 0; i < 7; i++)
    {
        cout<<numeros[i]<<" ";
        par += Pares(numeros[i]);
    }
    
    cout<<"Numeros pares: "<<par;
    
    return 0;
}
