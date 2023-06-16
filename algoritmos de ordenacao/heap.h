#include <stdio.h>
#include <stdlib.h>

typedef struct heap Heap;

Heap* cria_priori(int max);  // cria uma nova lista de prioridade vazia

void heap_libera(Heap* h);   // libera a lista de prioridade 

int heap_vazia(Heap* h);     // verifica se a lista está vazia - 1 se vazia, 0 se não

void insere_heap(Heap* h,float value);  // insere um novo valor na lista de prioridade

float heap_retira(Heap* h);  // retira e retorna o maior valor da lista de prioridade


#define pai(i) (((i)-1)/2)      // índice do nó pai
#define filho_e(i) (2*(i) + 1)  // índice do filho esquerdo
#define filho_d(i) (2*(i) + 2)  // índice do filho direito

struct heap {

    int n;

    int nmax;

    float * v;

};

//cria lista de prioridade vazia, para isso usamos malloc
Heap* cria_priori(int nmax){
    Heap* h = (Heap*) malloc(sizeof(Heap));
    h->n = 0;
    h->nmax = nmax;
    h->v = (float*) malloc(h-> nmax * sizeof(float));
    return h;
}

//libera um elemento da lista de prioridade
void heap_libera(Heap* h){
    free(h-> v);
    free(h);
}

//verifica se está vazia
int heap_vazia(Heap* h){
    return (h-> n == 0);
}


static void troca(Heap* h, int i, int j){
    float tmp = h->v[i];
    h->v[i] = h->v[j];
    h->v[j] = tmp;
}

static void sobe(Heap* h, int i){
    while(i > 0){
        int p = pai(i);
        if(h-> v[p] > h-> v[i])
            break;
        troca(h, p, i);
        i = p;
    }
}

void insere_heap(Heap* h, float value){
    h->v[h-> n++] = value;
    sobe(h, h-> n-1);
}

static void desce(Heap* h, int i){
    int c = filho_e(i);
    while(c < h-> n){       // enquanto filho for válido 
        int c2 = filho_d(i);
        if(c2 < h -> n && h -> v[c2] > h -> v[c])

            c = c2;
        
        if(h -> v[c] < h -> v[i])
            break;

        troca(h, i ,c);
        i = c;
        c = filho_e(i);  
    }
}

float heap_retira(Heap* h){
    float r = h-> v[0];
    h -> v[0] = h->v[--h -> n];
    desce(h, 0);
    return r;
}

int heap_verifica(Heap* h){
    int i;
    for(i = 0; i < h->n/2; ++i){
        int l = filho_e(i);
        int r = filho_d(i);

        if(h -> v[l] > h -> v[i])
            return 0;

        if(r < h ->n && h->v[r] > h->v[i])
            return 0;

    }
    return 1;
}