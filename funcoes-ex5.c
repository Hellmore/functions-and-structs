#include <stdio.h>

int pitagórico(int n);
int teste(int a, int b, int n);

int main() {
    int a, b, n;
    
    printf("Digite, respectivamente, os valores inteiros positivos de a, b e n: \n");
    scanf("%d%d%d", &a, &b, &n);

    printf("Teste: %d.\n", teste(a, b, n));
    printf("Pitagórico: %d.\n", pitagorico(n));
    return 0;
}

int teste(int a, int b, int n){
    if ((a * a) + (b * b) == n){
        return 1;
    } else {
        return 0;
    }
}

int pitagorico(int n){
    int a, b, pita = 0;
    
    for (a = 1; a <= 10; a++){
        for (b = 1; b <= 10; b++){
            if ((a*a)+(b*b) == n){
                pita = 1;
            }
        }
    }
    
    return pita;
}








