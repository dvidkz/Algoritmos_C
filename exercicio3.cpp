#include <stdio.h>

int main () {
	
	int cliente = 1;
	float media, soma = 0;
	int nota;
	
	while (cliente <= 10) {
		printf ("De 0 a 10 qual e a sua nota para o atendimento?\n");
		scanf ("%d", &nota);
		
		soma = soma + nota;
		
		cliente ++;
		
	}
	
	media = soma / 10;
	
	printf ("Media Geral das Avaliacoes: %.2f\n", media);
	
	if (media < 7){
		printf ("ALERTA! A media da avaliacao esta muito baixa.");
	}
}
