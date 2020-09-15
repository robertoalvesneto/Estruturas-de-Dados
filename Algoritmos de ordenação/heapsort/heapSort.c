#include<stdio.h>
//tam do vetor definido no comeco
#define TAM 10

struct heapSort {
    int vetor[TAM+1];
    int tamAtual;
    int tamMax;
} heapSort;


void inicializar();

void descer();

void arranjar();

void ordenar();

void exibir();


int main() {
    int vetor[TAM] = {3,5,1,2,7,6,4,8,9,10};

    arranjar(vetor, TAM);
    printf("Antes da ordenacao: ");
    exibir();
    ordenar();
    printf("\nApos a ordenacao: ");
    exibir();
    return 0;
}


void inicializar(){
    heapSort.vetor[0] = 0;
    heapSort.tamAtual = 0;
    heapSort.tamMax = TAM;
}

void descer(int posiElemento) {
    int posiElementoFilho = posiElemento*2;
    if (posiElementoFilho <= heapSort.tamAtual) {
        if ((posiElementoFilho < heapSort.tamAtual) &&
                (heapSort.vetor[posiElementoFilho] < heapSort.vetor[posiElementoFilho+1])){
            posiElementoFilho++;
        }

        if (heapSort.vetor[posiElementoFilho] > heapSort.vetor[posiElemento]) {
            int aux = heapSort.vetor[posiElementoFilho];
            heapSort.vetor[posiElementoFilho] = heapSort.vetor[posiElemento];
            heapSort.vetor[posiElemento] = aux;

            descer(posiElementoFilho);
        }
    }
}

void arranjar(int *vetor,int tamVetor) {
    int i;
    for (i=0; i < tamVetor; i++) {
        heapSort.vetor[i+1] = vetor[i];
        heapSort.tamAtual++;
    }

    for (i=heapSort.tamAtual/2; i>0 ; i--){
        descer(i);
    }
}

void ordenar() {
    while(heapSort.tamAtual > 1) {
        int aux = heapSort.vetor[1];
        heapSort.vetor[1] = heapSort.vetor[heapSort.tamAtual];
        heapSort.vetor[heapSort.tamAtual] = aux;
        heapSort.tamAtual--;

        descer(1);
    }
}

void exibir() {
    int i;
    for (i=0; i<11; i++) {
        printf("%d ", heapSort.vetor[i]);
    }
    printf("\n\n");
}