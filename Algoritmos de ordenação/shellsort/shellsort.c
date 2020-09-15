#include <stdio.h>


void shellSort();


int main(){
	int i, vetor[10] = {8,3,5,1,9,2,7,6,4,0};
	int tam = 10;
	
	shellSort(vetor, tam);
	
	for(i=0;i<tam;i++)printf("%d ",vetor[i]);
	printf("\n");
	return 0;
}


void shellSort(int vetor[10], int tam) {
	int i, j, h, aux;

	//h eh o salto
	
	//decide qual o valor inicial para h
	for (h=1; h<tam; h=3*h+1);

	while(h>0) {
		h=(h-1)/3;
		for(i=h; i<tam;i++) {
			aux = vetor[i];
			j=i;
			
			while(vetor[j-h] > aux) {
				vetor[j] = vetor[j-h];
				j -= h;
				if(j < h)break;
			}

			vetor[j] = aux;
			int x;
		}
	}
}