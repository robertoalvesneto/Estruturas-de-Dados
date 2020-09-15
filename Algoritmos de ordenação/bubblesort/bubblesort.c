#include<stdio.h>
#include<stdlib.h>
#include <stdbool.h>

void bubblesort();

void bubblesortParada();


int main() {
    int i, tamVetor, *vetor, qualOrdenacao;
    
    //qual bubble usar
    printf("digite '1' para bubblesort ou '2' para bubblesort com criterio de parada:");
    scanf("%d",&qualOrdenacao);

    //aloca um vetor do tamanho solicitado
    printf("tam do vetor:");
    scanf("%d",&tamVetor);
    vetor = (int*)malloc(tamVetor*sizeof(int));

    //recebendo cada valor
    printf("\nentre com os valores:\n\n");
    for (i=0; i<tamVetor; i++){
        printf("[%d]: ",i);
        scanf("%d",&vetor[i]);
    }

    //rodando o sort escolhido
    if (qualOrdenacao == 1) bubblesort(vetor, tamVetor);
    else bubblesortParada(vetor, tamVetor);

    printf("\nvetor ordenado: ");
    for (i=0; i<tamVetor; i++)printf("%d ", vetor[i]);

    return 0;
}


void bubblesort(int *vetor, int tam) {
    int i, j, aux;

    for (i=0; i<tam-1; i++) {
        for (j=0; j<tam-1; j++) {
            if (vetor[j] > vetor[j+1]) {
                aux = vetor[j];
                vetor[j] = vetor[j+1];
                vetor[j+1] = aux;
            }
        }
    }
}

void bubblesortParada(int *vetor, int tam){
    int i, aux, cont=0;
    bool mudou=true;

    while(mudou) {
        mudou=false;

        for (i=0; i<tam-cont-1; i++) {
            if(vetor[i] > vetor[i+1]) {
                aux = vetor[i];
                vetor[i] = vetor[i+1];
                vetor[i+1] = aux;
                mudou = true;
            }
        }
        cont++;
    }
}