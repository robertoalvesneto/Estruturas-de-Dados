#include<stdio.h>
#include<stdlib.h>
#define TAM 5

void merge(int *vetor, int comeco, int meio, int fim) {

	int parada1 = meio - comeco + 1; 
    int parada2 = fim - meio; 

	int com1 = 0;
	int com2 = 0;
	int aux = comeco;

	//criando e preenchendo vetores auxiliares
	int vetorAuxEsq[parada1], vetorAuxDir[parada2]; 
    for (int i = 0; i < parada1; i++) 
        vetorAuxEsq[i] = vetor[comeco + i]; 
    for (int j = 0; j < parada2; j++) 
        vetorAuxDir[j] = vetor[meio + 1 + j]; 

	while(com1 < parada1 && com2 < parada2) {
		if (vetorAuxEsq[com1] <= vetorAuxDir[com2]) {
			vetor[aux] = vetorAuxEsq[com1];
			com1++;
		} else {
			vetor[aux] = vetorAuxDir[com2];
			com2++;
		}
		aux++;
	}

	while(com1 < parada1) {
		vetor[aux] = vetorAuxEsq[com1];
		com1++;
		aux++;
	}

	while(com2 < parada2) {
		vetor[aux] = vetorAuxDir[com2];
		com2++;
		aux++;
	}

}

void mergesort(int *vetor, int comeco, int fim) {

	if (comeco < fim) {
		int meio = comeco + (fim - comeco)/2;

		mergesort(vetor, comeco, meio);
		mergesort(vetor, meio+1, fim);

		merge(vetor, comeco, meio, fim);
	}



}

int main() {
	int vetor[TAM] = {5, 3, 6, 4, 2};
	int comeco = 0;

	mergesort(vetor, comeco, TAM);
	for(int i=0; i<TAM; i++) printf("%d ", vetor[i]);
	printf(" \n");

	return 0;
}