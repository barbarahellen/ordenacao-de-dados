#include<stdio.h>
#include<stdlib.h>
#include<time.h>

// Algoritmo da Bolha

void bubble_sort(int *vetor, int tamanho_vetor){

    int aux;
    for(int i = 0; i < tamanho_vetor - 1; i++){
        
        for(int j = 0; j < tamanho_vetor - i - 1; j++){
            if(vetor[j] > vetor[j + 1]){
                aux = vetor[j + 1];
                vetor[j + 1] = vetor[j];
                vetor[j] = aux;
            }
        }
            
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
   
    bubble_sort(vetor, tamanho_vetor);
    printf("vetor ordenado:     ");
    print(vetor, tamanho_vetor);
    
    return 0;
}
