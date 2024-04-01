#include <stdio.h>

double media(double v[], int tam);

int main() {
    int tamanho; 
    double vetor[51];
    double mediaaritmetica;
    
    printf("Digite o tamanho do vetor (MAX 50): \n");
    scanf("%d", &tamanho);
    
    printf("Digite os valores do vetor: \n");
    for (int i = 0; i < tamanho; i++){
        scanf("%lf", &vetor[i]);
    }
    
    mediaaritmetica = media(vetor, tamanho);
    printf("O valor da média aritmética do do vetor é: %lf.", mediaaritmetica );

    return 0;
}

double media(double v[], int tam){
    double soma = 0, mediaaritmetica;
    for(int i = 0; i < tam; i++){
        soma += v[i];
    }
    mediaaritmetica = soma / tam;
    return mediaaritmetica;
}