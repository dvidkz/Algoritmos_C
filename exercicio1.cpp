#include <stdio.h>
int main () {
	
	int i;
	float consumo, soma = 0, media;
	
	for (i=1; i<=5; i++){
		printf("Digite o consumo de morador %d: ", i);
		scanf("%f", &consumo);
		
		soma = soma + consumo;
		
		if (consumo <= 20) {
			printf ("Seu consumo esta dentro da media!\n");
		} else {
			printf ("Seu consumo esta acima da media!\n");
		}
	}
	
	media = soma / 5;
	
	printf ("consumo medio geral: %.2f m3\n", media);
}
