#include<stdio.h>
#include<stdlib.h>

void intercala(int *vetor, int esq, int meio, int dir){
  
  int vetor1 =  meio - esq + 1;
  int vetor2 = dir - meio;

  // arrays temporários
  int esquerda[vetor1];
  int direita[vetor2];

  for(int i = 0; i < vetor1; i++){
    esquerda[i] = vetor[esq + i];
  }
  for(int j = 0; j < vetor2; j++){
    direita[j] = vetor[meio + 1 + j];
  }

  
  int i = 0;
  int j = 0;
  int k = esq; // indice do primeiro elemento do subarray intercalado

  // intercala os subarrays de volta pro array principal
  while(i < vetor1 && j < vetor2){
    if(esquerda[i] < direita[j]){
      vetor[k] = esquerda[i];
      i++;
    } else{
      vetor[k] = direita[j];
      j++;
    }
    k++;  
  }  

  while(i < vetor1){
    vetor[k] = esquerda[i];
    i++;
    k++;
  }
  while(j < vetor2){
    vetor[k] = direita[j];
    i++;
    k++;
  } 
}

// inicio = primeiro indice do subarray a ser intercalado
// fim = ultimo indice do subarray
void merge_sort(int *vetor, int inicio, int fim){
  
  if(inicio < fim) {
    int meio = inicio + (fim - inicio) / 2;
    
    merge_sort(vetor, inicio, meio);
    merge_sort(vetor, meio + 1, fim);
    
    intercala(vetor, inicio, meio, fim);
  }  
}

void print(int *V, int tamanho){
  for(int i = 0; i < tamanho; i++){
    printf("%d ", V[i]);
  }
  printf("\n");
}

int main(void) {

  int vetor[] = {60, 12, 44, 3, 87, 500, 27};
  int tamanho_vetor = sizeof(vetor) / sizeof(vetor[0]);
  //printf("%d", tamanho_vetor);

  printf("array inicial \n");
  print(vetor, tamanho_vetor);

  merge_sort(vetor, 0, tamanho_vetor - 1);
  
  printf("array ordenado \n");
  print(vetor, tamanho_vetor);
    
  return 0;
}