//Sebastian Caiza

//Calcular y retornar el promedio de los elementos de un arreglo utilizando una función con return.

#include <iostream>
#include <iomanip>   

using namespace std;

double promedio(int arreglos[], int num){
    int suma = 0;

    for (int i = 0; i < num; i++)
	{
        suma += arreglos[i]; 
    }

    return (double)suma/num;  
    
}

int main(){

    int numeros[5] = {10, 15, 20, 25, 30};
    int num = 5;

    double prom = promedio(numeros, num);  

    cout<<fixed<<setprecision(2);
    cout<<"El promedio es: "<<prom<<endl;

    return 0;
}
