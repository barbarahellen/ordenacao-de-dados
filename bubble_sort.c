#include<stdio.h>
#include<stdlib.h>
#include<time.h>

// Algoritmo da Bolha

void bubble_sort(int *vetor, int tamanhoDoVetor){

    int aux;
    for(int i = 0; i < tamanhoDoVetor - 1; i++){
        
        for(int j = 0; j < tamanhoDoVetor - i - 1; j++){
            if(vetor[j] > vetor[j + 1]){
                aux = vetor[j + 1];
                vetor[j + 1] = vetor[j];
                vetor[j] = aux;
            }
        }
            
    }

}

void print(int *vetor, int tamanhoDoVetor){
    for(int i = 0; i < tamanhoDoVetor; i++){
        printf("%d ", vetor[i]);
    }
    printf("\n");
}


int main(){
    
    int vetor[] = {20, 35, 100, 300, 10, 8, 563, 411, 1000, 33};
    int tamanhoDoVetor = sizeof(vetor) / sizeof(vetor[0]);

    printf("vetor desordenado:  ");
    print(vetor, tamanhoDoVetor);
   
    bubble_sort(vetor, tamanhoDoVetor);
    printf("vetor ordenado:     ");
    print(vetor, tamanhoDoVetor);
    
    return 0;
}
