## Shell sort

- É uma extensão do Insertion sort
- O Insertion sort troca itens adjacentes para determinar o ponto de inserção e são efetuadas n - 1 comparações e movimentações quando o menor item está na posição mais à direita no vetor. Já o Shell sort contorna este problema permitindo trocas de registros distantes um do outro. Sendo os itens de h posições rearranjados.
- Vantagens: ótima opção para arquivos de tamanho moderado
- Desvantagens: tempo de execução é sensível à ordem inicial do arquivo e não é estável.

**Complexidade:**

| Melhor caso | O(n($log$n)$^2$) |
| --- | --- |
| Médio caso | O(n^1,5) |
| Pior caso | O(n) |