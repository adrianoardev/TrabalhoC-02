#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main() {
	setlocale(LC_ALL, "Portuguese"); // Deixa o programa na linguagem Portugu�s BR
	printf("Matricula do Aluno: 3415162\n\n");
	printf("Digite abaixo os n�meros de sua RU:\n");
	printf("=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n\n");
	int vetor[7], i = 6, soma = 0;
	char c;

	//Inicializa��o; Condi��o; Encremento
	for (i = 0; i < 7; i++) // Vetor de sete posi��es
	{
		printf("Digite o n�mero de RU na posi��o %i: ", i);

		// Leitura de int e armazenamento no vetor posi��o i
		scanf_s("%i", vetor + i);
		while ((c = getchar()) != '\n' && c != EOF) {} // Limpar buffer de teclado
		soma = soma + *(vetor + i); // Soma + do ponteiro do vetor + i
	}
	// Imprime na tela a soma de todos os n�meros de RU do usu�rio
	printf("\nA soma de todos os n�meros do RU �: %i\n\n", soma);
	return 0;
}