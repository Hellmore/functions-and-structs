#include <stdio.h>

int amigos (int a, int b);

int main() {
    int a, b, amizade;
    
    printf("Digite, respectivamente, os valores de a e b: \n");
    scanf("%d%d", &a, &b);
    amizade = amigos(a,b);
    if (amizade == 1) {
        printf("\nAmigos!");
    } else if (amizade  == 0) {
        printf("\nNão amigos!");
    }
    return 0;
}

int amigos (int a, int b) {
    int asoma = 0, bsoma = 0;
    
    for (int i = 1; i < a; i++) {
        if (a % i == 0) {
            asoma += i;
        }
    }
    
    for (int i = 1; i < b; i++) {
        if (b % i == 0) {
            bsoma += i;
        }
    }
    
    if (asoma == b && bsoma == a) {
        return 1;
    } else {
        return 0;
    }
}