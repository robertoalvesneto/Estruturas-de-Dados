#include<stdio.h>


void quickSort();


int main() {
	int vetor[10] = {15,20,12,41,42,5,60,32,84,16};
	int i;
	quickSort(vetor, 0, 9);
	for(i = 0; i < 10; i++) {
		printf("%d  ",vetor[i]);
		}
	printf("\n\n");
	return 0;
}


void quickSort(int *vetor, int comeco, int fim) {
	int i = comeco, j = fim;
	int meio = (comeco + fim)/2, pivo = vetor[meio];
	while(i <= j) {
		while(vetor[i] < pivo) i++; //analisa o vetor até achar um var maior que o pivo
		while(vetor[j] > pivo) j--; //analisa o vetor até achar um var menor que o pivo
		/*
		* a troca será efetuada de qualquer jeito, desde que 'i' e 'j'
		* não tenham cruzado-se
		*/
		if(i <= j) {
			int aux = vetor[i];
			vetor[i] = vetor[j];
			vetor[j] = aux;
			/*
			* essa incrementação que, caso i == j, fara eles se cruzarem
			* e tornará a proxima analise invalida, siando do loop geral
			*/
			i++;
			j--;
			}
		}
	/*
	* chamada recursiva, realizada enquanto os dois subvetores
	* (vetor da esquerda e o vetor da esquerda) tiverem mais de um elemento
	*/
	if(comeco < j) quickSort(vetor, comeco, j);
	if(i < fim) quickSort(vetor, i, fim);
}