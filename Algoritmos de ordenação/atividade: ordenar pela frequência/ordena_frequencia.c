#include<stdio.h>
#include<stdlib.h>


//ordenar o vetor
void sort();

//conta os elementos repetidos e cria uma mapa, relacionando cada valor com a
//quantidade de vezes que ele aparece
void verificarFrequencia();

//ordena com base nas vezes que cada valor aparece
void sortDecrescenteQuantElementos();


int main() {
        int i, vetor[10] = {1,3,5,6,6,6,3,3,3,1}, len = 10;

    sort(vetor, len);
    verificarFrequencia(vetor, len);

    printf("\nOrdem descrescentem com base no numero de ocorrencias:\n");
    for (i=0; i<10; i++)printf("%d ", vetor[i]);
    return 0;
}


void sort(int *vetor, int tam) {
    int i, j, temporarioAux, temporarioAuxDois;

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


void sortDecrescenteQuantElementos(int *vetor, int tam, int *vetordois) {
    int i, j, temporarioAux, temporarioAuxDois;

    for (i=0; i < tam; i++) {
        j = i-1;
        temporarioAux = vetor[i];
        temporarioAuxDois = vetordois[i];

        while((vetor[j] < temporarioAux) && (j >= 0)) {
            vetor[j+1] = vetor[j];
            vetordois[j+1] = vetordois[j];
            j--;
        }

        j++;
        vetor[j] = temporarioAux;
        vetordois[j] = temporarioAuxDois;
    }
}

void verificarFrequencia(int *vetor, int tam) {
    int i, j, contElementos=0, posicaoAtual=0, len;

    contElementos++;
    for (i=0; i < tam-1; i++) {
        if(vetor[i] != vetor[i+1]) {
            contElementos++;
        }
    }
    
    len = contElementos;
    int *quantidadeDeVezesAparece = (int*)malloc(contElementos*sizeof(int));
    int *valores = (int*)malloc(contElementos*sizeof(int));

    contElementos=0;
    for (i=0; i < tam-1; i++) {
        if(vetor[i] == vetor[i+1]) {
            contElementos++;
        }else {
            quantidadeDeVezesAparece[posicaoAtual] = contElementos;
            valores[posicaoAtual] = vetor[i];
            posicaoAtual++;
            contElementos = 0;
        }
    }
    if (valores[posicaoAtual] != valores[posicaoAtual-1]) {
        quantidadeDeVezesAparece[posicaoAtual] = contElementos;
        valores[posicaoAtual] = vetor[i];
    }

    sortDecrescenteQuantElementos(quantidadeDeVezesAparece, len, valores);

    int posi=0;
    for (i=0; i<len; i++) {
        for (j=0; j<quantidadeDeVezesAparece[i]+1; j++) {
            vetor[posi] = valores[i];
            posi++;
        }
    }
}