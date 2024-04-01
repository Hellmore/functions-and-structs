#include <stdio.h>

int menorbaselog(int n);

int main() {
    int n, numero;
    
    printf("Digite um valor n inteiro positivo: \n");
    scanf("%d", &n);
    numero = menorbaselog(n);

    printf("A menor base de log para %d eh %d.\n", n, numero);
    return 0;
}

int menorbaselog(int n){
    int b;
    for (int i = 2; i < n; i++){
        if (n % i == 0) {
            b = i;
            break;
        }
    }
    return b;
}