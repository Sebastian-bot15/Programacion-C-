//sebastian Caiza

//Calcular el precio final de un producto aplicando dos descuentos: 15% por promoción y 10% por cliente frecuente.

#include <iostream>

using namespace std;

double calcularDescuento(double precio, double porcentaje){
	
	double costo = precio*(porcentaje/100);
	
	return costo;
}


double calcularPrecioFinal(double precioBase, double porcPromo, double porcCliente){
	
	double descuento1= 0, descuento2 = 0;
	
	descuento1 = calcularDescuento(precioBase, porcPromo);
	descuento2 = calcularDescuento(precioBase, porcCliente);
	
	double total = precioBase - descuento1 - descuento2;
	
	return total;
}

int main(){
	
	double precio = 0, promo = 0, cliente = 0;
	
	cout<<"Ingrese el precio del producto: ";
	cin>>precio;
	
	cout<<"Ingrese el descuento por promocion: ";
	cin>>promo;
	
	cout<<"Ingrese el descuento por cliente: ";
	cin>>cliente;
	
	double Pro = calcularDescuento(precio,promo);
	double Cli = calcularDescuento(precio, cliente);
	double total = calcularPrecioFinal(precio, promo, cliente);
	
	cout<<" === Datos === "<<endl;
	cout<<"Descuento por promocion: $"<<Pro<<endl;
	cout<<"Descuento por cliente: $"<<Cli<<endl;
	cout<<"Total: $"<<total<<endl;
	
	return 0;
	
}
