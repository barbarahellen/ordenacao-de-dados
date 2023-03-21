#include <stdio.h>

void insertion_sort(int *vetor, int tamanho_vetor, int k){
    for(int i = 0; i < tamanho_vetor; i += k){
        int temp = vetor[i];
        int j = i - k;

        while((j >= 0) && (temp < vetor[j])){
            vetor[j + k] = vetor[j];
            j -= k;
        }
        vetor[j + k] = temp;
    }
}

void shell_sort(int *vetor, int tamanho_vetor){
    int ks[] = {7, 3, 2, 1};
    for(int i = 0; i <= 3; i++){
        insertion_sort(vetor, tamanho_vetor, ks[i]);
    }
}

void print(int *vetor, int tamanho_vetor){
  for(int i = 0; i < tamanho_vetor; i++){
    printf("%d ", vetor[i]);
  }
  printf("\n");
}


int main(void) {
  
  int vetor[] = {60, 12, 44, 3, 87, 500, 27};
  int tamanho_vetor = sizeof(vetor) / sizeof(vetor[0]);
  //printf("%d", tamanho_vetor);

  printf("array inicial \n");
  print(vetor, tamanho_vetor);

  shell_sort(vetor, tamanho_vetor);
  
  printf("\narray ordenado \n");
  print(vetor, tamanho_vetor);
    
  return 0;
}