## Insertion sort (inserção simples)

Cada elemento sucessivo na tabela a ser ordenada é inserido na ordem correta com relação aos outros elementos já ordenados. Ou seja, a tabela é dividida numa parte ordenada e outra desordenada. Inicialmente, a parte ordenada contém apenas o primeiro elemento da tabela, então considera-se o segundo elemento na tabela e coloca-se em sua correta posição na parte ordenada. O processo continua até que todos os elementos se ordenem.

- Indicado para tabelas pequenas ou quase ordenadas.
- Vantagens: simplicidade, in loco, estável
- Desvantagens: lentidão

**Complexidade:** 

| Melhor caso | O(n) |
| --- | --- |
| Médio caso | O(n^2) |
| Pior caso | O(n^2) |