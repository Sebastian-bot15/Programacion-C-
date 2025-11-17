//Sebastian Caiza

//Simular una tarjeta de transporte: recargar saldo, pagar pasajes y mostrar el estado usando funciones.

#include <iostream>

using namespace std;

void recargar(double &saldo, double monto){
	
    saldo += monto;
    cout<<"Recarga exitosa. Saldo actual: $" << saldo << endl;
    
}

bool pagar(double &saldo, double tarifa){
	
    if (saldo >= tarifa) 
	{
        saldo -= tarifa;
        cout<<"Pago exitoso. Saldo actual: $"<<saldo<<endl;
        return true;
    } 
    
	else 
	{
        cout<<"Saldo insuficiente. No se pudo pagar el pasaje."<<endl;
        return false;
    }
    
}

void mostrarEstado(double saldo, int pasadas){
	
    cout<<"Pasadas realizadas: "<<pasadas<<endl;
    cout<<"Saldo final: $"<<saldo<<endl;
    
}

int main(){
	
    double saldo = 0;      
    int pasadas = 0;       
    double monto, tarifa = 0.45;

    cout<<" ===== TARJETA METRO/BUS QUITO ===== "<<endl;
    cout<<"Saldo actual: $0.00"<<endl;

    cout<<"Ingrese monto a recargar: ";
    cin>>monto;

    recargar(saldo, monto);

    cout << "Pagando pasaje de $0.45 ..."<<endl;
    if (pagar(saldo, tarifa)) pasadas++;

    cout << "Pagando pasaje de $0.45 ..."<<endl;
    if (pagar(saldo, tarifa)) pasadas++;

    mostrarEstado(saldo, pasadas);

    return 0;
    
}
