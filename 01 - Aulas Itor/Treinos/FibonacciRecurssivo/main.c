#include <stdio.h>

// Função recursiva para calcular o N-esimo número na sequência de Fibonacci
int fibonacci(int n) {
    if (n <= 1)
        return n;
    else
        return fibonacci(n - 1) + fibonacci(n - 2);
}

int main() {
    int n;

    printf("Digite o valor de N para calcular o N-esimo número na sequencia de Fibonacci: ");
    scanf("%d", &n);

    // Chamando a funcaoo fibonacci() para calcular o N-esimo número
    int resultado = fibonacci(n);

    printf("O %d-esimo numero na sequencia de Fibonacci eh: %d\n", n, resultado);

    return 0;
}
