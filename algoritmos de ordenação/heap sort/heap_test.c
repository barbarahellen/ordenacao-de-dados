#include "heap.h"

#include <stdio.h>
#include <stdlib.h>
#include <assert.h>


#define N 100

int main(int argc, char const *argv[]){

    srand(0);
    Heap* h = cria_priori(N);

    for(int i = 0; i < N; i ++){
        float v = (float)((double)rand()/RAND_MAX);
        insere_heap(h,v);
        assert(heap_verifica(h));
    }

    while(! heap_vazia(h)){
        float v  = heap_retira(h);
        printf("%.5f \n",v);
        assert(heap_verifica(h));
    }

    heap_libera(h);

    return 0;
}
