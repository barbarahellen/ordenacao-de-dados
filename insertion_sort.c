#include<stdio.h>
#include<stdlib.h>
#include<time.h>

// Ordenação por Inserção

void insertion_sort(int *vetor, int tamanho_vetor){
    for(int i = 0; i < tamanho_vetor; i++){
        int aux = vetor[i];
        int j = i - 1;
        while((vetor[j] > aux) && (j >= 0)){
            vetor[j + 1] = vetor[j];
            j--;
        }
        vetor[j + 1] = aux;
    }
}

void print(int *vetor, int tamanho_vetor){
    for(int i = 0; i < tamanho_vetor; i++){
        printf("%d ", vetor[i]);
    }
    printf("\n");
}


int main(){

    int vetor[] = {20, 35, 100, 300, 10, 8, 563, 411, 1000, 33};
    int tamanho_vetor = sizeof(vetor) / sizeof(vetor[0]);

    printf("vetor desordenado:  ");
    print(vetor, tamanho_vetor);
   
    insertion_sort(vetor, tamanho_vetor);
    printf("vetor ordenado:     ");
    print(vetor, tamanho_vetor);
    
    return 0;
}