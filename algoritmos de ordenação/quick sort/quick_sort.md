## Quick sort

Consiste em dividir a tabela a ser ordenada em duas partições, de modo que os elementos da primeira partição sejam todos menores que os da segunda partição. A divisão em partições é feita comparando-se cada elemento da tabela com um elemento denominado pivô. Então as duas partes são ordenadas recursivamente.

- Primeiro deve-se ****escolher o pivô (item que termina em sua posição final ordenada depois de cada divisão em partições, sendo que itens menores que o pivô ficam na esquerda, e os maiores na direita.
- O algoritmo de partição funciona com dois marcadores, um em cada extremidade da tabela (índices). O algoritmo avança os marcadores esquerdo e direito um do outro até que se encontrem. À medida que o marcador esquerdo prossegue, ele para quando encontra um item que é maior do que o pivô e, quando isso ocorre, o marcador e o pivô trocam de posição. Enquanto o marcador direito prossegue, ele para quando encontra um item que é menor que o pivô. Nesse caso, o marcador direito troca de posição com o pivô.
- Vantagens: em média muito rápido
- Desvantagens: eficiência depende da escolha correta do pivô, instabilidade

**Complexidade:** 

| Melhor caso | O(n$log$n) |
| --- | --- |
| Médio caso | O(n$log$n) |
| Pior caso | O(n$^2$) |