#include<stdio.h>
#include<stdlib.h>


void insertionsort();


int main() {
    int i, tamVetor, *vetor;

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

    insertionsort(vetor, tamVetor);

    printf("\nvetor ordenado: ");
    for (i=0; i<tamVetor; i++)printf("%d ", vetor[i]);

    return 0;
}


void insertionsort(int *vetor, int tam) {
    int i, j, temporarioAux;

    for (i=0; i < tam; i++) {
        j = i-1;
        temporarioAux = vetor[i];

        while((vetor[j] > temporarioAux) && (j >= 0)) {
            vetor[j+1] = vetor[j];
            j--;
        }

        j++;
        vetor[j] = temporarioAux;
    }

}