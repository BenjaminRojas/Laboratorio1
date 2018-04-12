	/*

	   Definir las variables.
	   Solicitar el precio del traje comprado.
	   Definir si el precio del traje comprado es mayor que 2500, se le aplicará un descuento del 15%.
	   Definir si el precio del traje comprado es menor o igual que 2500, se le aplicará un descuento del 8%.
	   Imprimir el valor con el descuento aplicado.
	   Retornar a 0.

	*/


#include <stdio.h>

	int main ()
	
{
	int precio_del_traje;
	float dsc1, dsc2;
	float d1 = 0.15;
	float d2 = 0.08;
	
	printf ("Ingrese el precio del traje comprado: ");
	scanf ("%d", &precio_del_traje);
	
	dsc1 = (precio_del_traje - (precio_del_traje * d1));
	dsc2 = (precio_del_traje - (precio_del_traje * d2));
	
		if (precio_del_traje > 2500){
			
			printf ("El valor del traje será: %f", dsc1);
		}
			
		if (precio_del_traje <= 2500){
			
			printf ("El valor del traje será: %f", dsc2);
		}

	return 0;
	
}


