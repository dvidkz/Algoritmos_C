#include <stdio.h>

int main (){
	
	int passos, total = 0, horas = 0;
	
	while ( total < 10000) {
		
		printf ("Quantos passos voce deu nesta hora?\n");
		scanf ("%d", &passos);
		
		total = total + passos;
		
		horas ++;
	}
	
	printf ("Foram necessarias: %d horas", horas);
}
