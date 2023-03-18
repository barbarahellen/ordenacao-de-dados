#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void insertion_sort(int *vetor, int tamanhoDoVetor){
    for(int i = 0; i < tamanhoDoVetor; i++){
        int aux = vetor[i];
        int j = i - 1;
        while((vetor[j] > aux) && (j >= 0)){
            vetor[j + 1] = vetor[j];
            j--;
        }
        vetor[j + 1] = aux;
    }
}

void print(int *vetor, int tamanhoDoVetor){
    for(int i = 0; i < tamanhoDoVetor; i++){
        printf("%d ", vetor[i]);
    }
    printf("\n");
}


int main(){

    int tamanhoDoVetor = 10;
    int vetor[10] = {20, 35, 100, 300, 10, 8, 563, 411, 1000, 33};

    printf("vetor desordenado:  ");
    print(vetor, tamanhoDoVetor);
   
    insertion_sort(vetor, tamanhoDoVetor);
    printf("vetor ordenado:     ");
    print(vetor, tamanhoDoVetor);
    
    return 0;
}