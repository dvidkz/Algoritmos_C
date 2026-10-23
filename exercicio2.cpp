#include <stdio.h>
int main () {
	
	float total = 0.0; 
	float moeda;
	int continuar;
	int opcao;
	
	do {
		printf ("Escolha uma moeda:\n");
		printf ("1 - R$ 0,50\n");
		printf ("2 - R$ 1,00\n");
		printf ("3 - R$ 2,00\n");
		
		scanf ("%d", &opcao);
		
		if (opcao == 1) {
			
			moeda = 0.50;
			printf ("Voce adicionou R$ 0,50\n");
		}
		else if (opcao == 2) {
			moeda = 1.00;
			printf ("Voce adicionou R$ 1,00\n");
		}
		else {
			moeda = 3.00;
			printf ("Voce adicionou R$ 2,00\n");
		}
		
		total = total + moeda;
		
		printf ("Deseja adicionar outra moeda?\n");
		printf ("1 - SIM | 0 - NAO\n");
		scanf ("%d", &continuar);
	
	} while (continuar == 1 );
	
	printf ("Total acumulado : R$ %.2f\n", total);
	
	return 0;
	
}
