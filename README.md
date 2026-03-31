[![Review Assignment Due Date](https://classroom.github.com/assets/deadline-readme-button-22041afd0340ce965d47ae6ef1cefeee28c7c493a6346c4f15d667ab976d596c.svg)](https://classroom.github.com/a/l1iDz_NH)
## Enunciado

Dada uma matriz triangular inferior de inteiros com `n` linhas, conte quantos elementos são pares.

Uma **matriz triangular inferior** de tamanho `n` possui elementos apenas nas posições onde `j <= i` (coluna menor ou igual à linha), totalizando `n*(n+1)/2` elementos. As posições acima da diagonal não existem na entrada. Segue um exemplo para n=3:

```
2
1  4
3  6  5
```

Sua tarefa é implementar a função `conta_pares()` e analisar sua complexidade.

### Questões para análise (não é necessário entregar)

1. Escreva a função **T(n)** que conta o número exato de comparações (`% 2 == 0`) realizadas por `conta_pares()` em função de `n`.
2. Se dobrarmos o valor de `n`, por qual fator aproximado o tempo de execução é multiplicado? Justifique sua resposta.

### Entrada

A primeira linha é composta por um inteiro `n` (1 ≤ n ≤ 100) que representa o número de linhas da matriz. As `n` linhas seguintes estão estruturadas de forma que a linha `i` (começando em 1) contém exatamente `i` inteiros, que são os elementos da triangular inferior da esquerda para a direita.

### Saída

Um único inteiro que representa a quantidade de elementos pares na matriz.

### Exemplo de entrada e saída

| Entrada | Saída |
| :--- | :--- |
| 3<br>2<br>1 4<br>3 6 5 | 3 |
| 1<br>7 | 0 |
| 4<br>8<br>3 2<br>5 4 6<br>1 0 9 2 | 6 |

---

### Arquivos editáveis (edição de outros arquivos resultará em nota 0)
- `main.c`

### Notas
- Você pode usar qualquer ferramenta offline do computador para editar e compilar seu código
- Não é permitido acessar qualquer página ou ferramenta de Inteligência Artificial para realizar o exercício
- Compile com `make` e teste com `make test`
- A análise de complexidade deve ser entregue em papel ou como comentário no topo de `main.c`
