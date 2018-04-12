	/* 
	 
	   Definición de variables.
	   Imprimir que si el valor es igual a "f", el ciclo terminará.
	   Ingresar los números 1,2 o 3 para votar por el candidato que tengo asignado dicho número. Si se ingresa un número distinto, se contabilizará el voto como nulo.
	   Cerrar el programa con la letra "f".
	   Imprimir los votos obtenidos por cada candidado y los votos nulos.
	   Imprimir quién fue el ganador.
	   Definir variables para sacar el porcentaje de los votos obtenidos por los candidatos y los votos nulos.
	   Sacar el porcentaje con la fórmula expresada.
	   Imprimir los resultados obtenidos anteriormente.
	   Retornar a 0.
	   
	*/
	
	
#include <stdio.h>

	int main ()
	
{
	float Juanito_Alcachofa = 0, Aquiles_Baeza = 0, Otto_Van_Choton = 0, nulo = 0, Total_de_votos;
	float porcentaje_Juanito_Alcachofa, porcentaje_Aquiles_Baeza, porcentaje_Otto_Van_Choton, porcentaje_nulo;
	float porcentaje = 100;
	char x;
	
	printf ("Para salir ingrese f\n");
	printf ("Ingrese el número de su candidato: \n");
	
	while (x != 'f'){
		
		scanf ("%c", &x);
		
		if (x == '1'){
			Juanito_Alcachofa++;
		}
		
		else if (x == '2'){
			Aquiles_Baeza++;
		}
		
		else if (x == '3'){
			Otto_Van_Choton++;
		}
		
		else if (x != 'f'){
			nulo++;
		}
		
		while(getchar()!='\n');

	}
	
	printf ("Los votos obtenidos por Juanito Alcachofa son: %f\n", Juanito_Alcachofa);
	printf ("Los votos obtenidos por Aquiles Baeza son: %f\n", Aquiles_Baeza);
	printf ("Los votos obtenidos por Otto Van Choton son: %f\n", Otto_Van_Choton);
	printf ("La cantidad de votos nulos es: %f\n", nulo);
	
	if ((Juanito_Alcachofa > Aquiles_Baeza) && (Juanito_Alcachofa > Otto_Van_Choton)){
		
		printf ("El nuevo presidente del centro de Alumno de la carrera de Ingenierı́a Civil en Bioinformática es Juanito Alcachofa");
	}
	
	else if ((Aquiles_Baeza > Juanito_Alcachofa) && (Aquiles_Baeza > Otto_Van_Choton)){
		
		printf ("El nuevo presidente del centro de Alumno de la carrera de Ingenierı́a Civil en Bioinformática es Aquiles Baeza");
	}
	
	else if ((Otto_Van_Choton > Aquiles_Baeza) && (Otto_Van_Choton > Juanito_Alcachofa)){
		
		printf ("El nuevo presidente del centro de Alumno de la carrera de Ingenierı́a Civil en Bioinformática es Otto Van Choton");
	}

	else if ((Otto_Van_Choton = Aquiles_Baeza) && (Otto_Van_Choton = Juanito_Alcachofa) && (Otto_Van_Choton = Aquiles_Baeza)){
		
		printf ("Hay un empate entre los 3 candidatos\n");
	}
	
	Total_de_votos = (Juanito_Alcachofa + Aquiles_Baeza + Otto_Van_Choton + nulo);
	porcentaje_Juanito_Alcachofa = (Juanito_Alcachofa/Total_de_votos * porcentaje);
	porcentaje_Aquiles_Baeza = (Aquiles_Baeza/Total_de_votos * porcentaje);
	porcentaje_Otto_Van_Choton = (Otto_Van_Choton/Total_de_votos * porcentaje);
	porcentaje_nulo = (nulo/Total_de_votos * porcentaje);
	
	printf ("El porcentaje de votos obtenidos por Juanito Alcachofa es: %f\n", porcentaje_Juanito_Alcachofa);
	printf ("El porcentaje de votos obtenidos por Aquiles Baeza es: %f\n", porcentaje_Aquiles_Baeza);
	printf ("El porcentaje de votos obtenidos por Otto Van Choton es: %f\n", porcentaje_Otto_Van_Choton);
	printf ("El porcentaje de votos nulos es: %f\n", porcentaje_nulo);

	return 0;
	
}
		
	
		
	
	
	
	
	

