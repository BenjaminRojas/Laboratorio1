	/*
	  
	  Definir las variables. 
	  Indicar que mientras a uno se le suma uno, al otro se le resta uno.
	  Imprimir el resultado obtenido.
	  Retornar a 0.
	 
	*/


#include <stdio.h>

	int main ()
	
{
	int kilometro_1 = 190;
	int kilometro_2 = 250;
	
	while (kilometro_1 != kilometro_2){
		kilometro_1 ++;
		kilometro_2 --;
	}
	
	printf ("Los autos se encontrarán en el kilometro: %d", kilometro_1);
	
	return 0;
	
}
