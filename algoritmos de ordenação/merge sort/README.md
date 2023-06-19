## Merge sort (ordenação por intercalação)

O procedimento de intercalação recebe como entrada duas tabelas já ordenadas e produz uma nova tabela ordenada contendo todos os itens das tabelas de entrada.

- Intercalar duas tabelas ordenadas significa criar uma terceira tabela que contém todos os elementos de ambas as tabelas ordenadas.

O merge sort divide a tabela original em duas partes iguais, ordena a primeira metade usando a abordagem de divisão e conquista e então, ordena a segunda metade. A recursão continua até que se chegue a uma subtabela com um único item (que já está ordenada), que é o caso base para esse algoritmo recursivo. Finalmente, ele intercala as metades.

A intercalação tem custo temporal O(n), pois meramente acessam-se as metades ordenadas, comparando pares sucessivos de valores \9um de cada partição da tabela) e colocando o menor valor na próxima posição da tabela resultante.

- Vantagens:  no pior caso, é mais rápido que o quick sort, estável
- Desvantagens: usa espaço adicional igual ao tamanho da tabela original.

**Complexidade:**

| Melhor caso | O(nlogn) |
| --- | --- |
| Médio caso | O(nlogn) |
| Pior caso | O(nlogn) |