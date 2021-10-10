#include<stdio.h>
#include<stdlib.h>
#define tamanho 3
int main(){
	int vetor[tamanho];
	int n;
	for (n = 0; n<tamanho; n++)
	{
		printf("Digite um valor, por favor:");
		scanf("%d", &vetor[n]);	
	}
	for (n=0; n<tamanho; n++)
	{
		printf ("\nVetor: %d\n",vetor[n]);
	}
	return 0;
}


