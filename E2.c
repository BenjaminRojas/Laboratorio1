	/*
	 
	  Definir las variables.
	  Solicitar la cantidad de amigos de Pedro.
	  Solicitar el monto de la comida sin IVA y sin el porcentaje destinado a la propina.
	  Sacar el total de comensales.
	  Sacar el valor de la cuenta con el IVA.
	  Sacar el valor de la propina.
	  Sacar el valor final de la cuenta.
	  Sacar cuanto pagará cada comensal.
	  Imprimir dicho valor.
	  Retornar a 0. 
	  
	*/

#include <stdio.h>

	int main ()
	
{
	int Total_de_comensales, amigos_de_Pedro, cuenta;
	int Pedro = 1;
	float Cuenta_final, Total_a_pagar, Cuenta_con_IVA, Propina;
	float IVA = 0.19;
	float propina = 0.1;

	printf ("Ingrese el número de amigos que comerán con Pedro: ");
	scanf ("%d", &amigos_de_Pedro);
	
	printf ("Ingrese el valor del consumo de los comensales: ");
	scanf ("%d", &cuenta);
	
	Total_de_comensales = (amigos_de_Pedro + Pedro);
	Cuenta_con_IVA = (cuenta + (cuenta * IVA));
	Propina = (Cuenta_con_IVA * propina);
	Cuenta_final = (Cuenta_con_IVA + Propina);
	Total_a_pagar = (Cuenta_final/Total_de_comensales);
	
	printf ("El monto que deberá cancelar cada comensal será de: %.3f", Total_a_pagar);
	printf (" pesos");
	
	return 0;
	
}
	
	
	
