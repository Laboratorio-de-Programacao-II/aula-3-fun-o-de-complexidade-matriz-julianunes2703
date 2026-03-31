/*
ANÁLISE DE COMPLEXIDADE
Número de elementos na matriz:
T(n) = 1 + 2 + 3 + ... + n
T(n) = n(n + 1) / 2

Cada elemento realiza exatamente 1 comparação:
(mat[i][j] % 2 == 0)

Logo, o número exato de comparações é:
T(n) = n(n + 1) / 2

Complexidade assintótica:
 o(n**2)

---

Se dobrarmos n:
T(2n) = (2n)(2n + 1) / 2 = 2 n **2

Comparando:
T(2n) / T(n) = 2n**2/ (n**2/2) = 4

o tempo cresce aproximadamente 4 vezes.

Conclusão:
-A complexidade é quadrática: o(n**2)
- Dobrar n → tempo  = 4x maior
*/

#include <stdio.h>

int conta_pares(int n, int mat[][n]) {
    int count = 0;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j <= i; j++) {
            if (mat[i][j] % 2 == 0) {
                count++;
            }
        }
    }

    return count;
}

int main() {
    int n;
    scanf("%d", &n);

    int mat[n][n];
    for (int i = 0; i < n; i++)
        for (int j = 0; j <= i; j++)
            scanf("%d", &mat[i][j]);

    printf("%d\n", conta_pares(n, mat));
    return 0;
}
