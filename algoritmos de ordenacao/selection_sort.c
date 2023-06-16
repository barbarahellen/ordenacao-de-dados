#include<stdio.h>
#include<stdlib.h>
#include<time.h>

// Ordenação por Seleção

void swap(int* vetor, int x, int y){  // vetor, x e y são as posições
    int temp = vetor[x];
    vetor[x] = vetor[y];
    vetor[y] = temp;
}

int selecionar(int* vetor, int tamanho_vetor, int inicio){
    int indiceDoMenor = inicio;
    for(int j = inicio + 1; j < tamanho_vetor; j++){
        if(vetor[j] < vetor[indiceDoMenor]){
            indiceDoMenor = j;
        }
    }
    return indiceDoMenor;
}

void selection_sort(int *vetor, int tamanho_vetor){    // seleção ordenada
    for (int i = 0; i < tamanho_vetor - 1; i++){
    int indiceDomenor = selecionar(vetor, tamanho_vetor, i);
        if(indiceDomenor != i){
            swap(vetor, indiceDomenor, i);
        }
    }
}


void print(int *vetor, int tamanho_vetor){
    for(int i = 0; i < tamanho_vetor; i++){
        printf("%d ", vetor[i]);
    }
    printf("\n");
}


int main(void){

    int vetor[] = {20, 35, 100, 300, 10, 8, 563, 411, 1000, 33};
    int tamanho_vetor = sizeof(vetor) / sizeof(vetor[0]);
     
    
    printf("Array sem ordenacao: \n");
    print(vetor, tamanho_vetor);
    
    selection_sort(vetor, tamanho_vetor);
    
    printf("\nArray ordenado por selecao: \n");
    print(vetor, tamanho_vetor);

    return 0;

}