#include<stdio.h>
#include<stdlib.h>
#include<time.h>


void swap(int* vetor, int x, int y){  // vetor, x e y são as posições
    int temp = vetor[x];
    vetor[x] = vetor[y];
    vetor[y] = temp;
}

int selecionar(int* vetor, int tamanhoDoVetor, int inicio){
    int indiceDoMenor = inicio;
    for(int j = inicio + 1; j < tamanhoDoVetor; j++){
        if(vetor[j] < vetor[indiceDoMenor]){
            indiceDoMenor = j;
        }
    }
    return indiceDoMenor;
}


void selection_sort(int *vetor, int tamanhoDoVetor){    // seleção ordenada
    for (int i = 0; i < tamanhoDoVetor - 1; i++){
    int indiceDomenor = selecionar(vetor, tamanhoDoVetor, i);
        if(indiceDomenor != i){
            swap(vetor, indiceDomenor, i);
        }
    }
}


void print(int *vetor, int tamanhoDoVetor){
    for(int i = 0; i < tamanhoDoVetor; i++){
        printf("%d ", vetor[i]);
    }
    printf("\n");
}


int main(void){
    int tamanhoDoVetor = 10;
    int vetor[10] = {20, 35, 100, 300, 10, 8, 563, 411, 1000, 33};
     
    /*
    srand(time(NULL));

    for(int i = 0; i < 10; i++){
        
       vetor[i] = rand() % 10;
        printf("%d", vetor[i]);
    }
    */
    
    printf("Array sem ordenacao: \n");
    print(vetor, tamanhoDoVetor);
    
    selection_sort(vetor, tamanhoDoVetor);
    
    printf("\nArray ordenado por selecao: \n");
    print(vetor, tamanhoDoVetor);

    return 0;

}