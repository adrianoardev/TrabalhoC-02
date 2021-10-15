#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main() {
	setlocale(LC_ALL, "Portuguese"); // Deixa o programa na linguagem Português BR
	printf("Matricula do Aluno: 3415162\n\n");
	printf("Digite abaixo os números de sua RU:\n");
	printf("=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n\n");
	int vetor[7], i = 6, soma = 0;
	char c;

	//Inicialização; Condição; Encremento
	for (i = 0; i < 7; i++) // Vetor de sete posições
	{
		printf("Digite o número de RU na posição %i: ", i);

		// Leitura de int e armazenamento no vetor posição i
		scanf_s("%i", vetor + i);
		while ((c = getchar()) != '\n' && c != EOF) {} // Limpar buffer de teclado
		soma = soma + *(vetor + i); // Soma + do ponteiro do vetor + i
	}
	// Imprime na tela a soma de todos os números de RU do usuário
	printf("\nA soma de todos os números do RU é: %i\n\n", soma);
	return 0;
}