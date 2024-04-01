#include <stdio.h>

int primos(int num);
int mdc(int m, int n);

int main() {
    int m, n;
    
    printf("Digite, respectivamente, os valores de m e n, sendo m maior que n: \n");
    scanf("%d%d", &m, &n);
    
    printf("O maior divisor comum de %d e %d eh %d.\n",m, n, mdc(m,n));

    return 0;
}

int primos (int num) {
    int ehprimo = 1;
    for (int i = 2; i < num; i++){
        if (num % i == 0) {
            ehprimo = 0;
            break;
        }
    }
    return ehprimo;
}


int mdc(int m, int n) {
    int maior = 1, k;
    if (m >= n){
        if (n == 0){
            maior = m;
            return maior;
        } else if (n > 0) {
            k = m % n;
            return mdc(n, k);
        }
    }else{
        printf("O valor de m deve ser maior que o de n.\n");
    }
}