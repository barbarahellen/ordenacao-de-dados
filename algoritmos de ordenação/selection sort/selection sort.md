## Selection sort (seleção direta)
Este algoritmo usa um índice i para marcar o inicio da parte desordenada do array. Inicialmente, o índice do primeiro elemento é atribuído a i, de maneira que a parte desordenada fica entre os índices i e n-1, em que n é o número de elementos da tabela. O processamento principal ocorre num laço e, em cada iteração do corpo desse laço, o menor valor na parte desordenada do array é trocado com o valor no índice i. Depois da troca, i está na parte ordenada do array, de modo que se reduz o tamanho da parte desordenada incrementando i. Na expressão condicional do laço, a parte desordenada varia de i até n-1.

- Indicado para tabelas pequenas
- Vantagens: facilidade de implementação, in loco
- Desvantagens: lentidão, instabilidade

**Complexidade:** 

| Melhor caso | O(n$^2$) |
| --- | --- |
| Médio caso | O(n$^2$) |
| Pior caso | O(n$^2$) |