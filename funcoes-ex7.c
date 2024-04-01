#include <stdio.h>
#include <math.h>

double desviopadrao (double v[], int tam);

int main() {
    int tamanho;
    double vetor[51];
    double desvio;
    
    printf("Digite o tamanho do vetor (MAX 50): \n");
    scanf("%d", &tamanho);
    printf("Digite os valores do vetor: \n");
    for (int i = 0; i < tamanho; i++){
        scanf("%lf", &vetor[i]);
    }
    
    desvio = desviopadrao(vetor, tamanho);
    printf("Desvio padrão = %lf", desvio);
    return 0;
}

double desviopadrao(double v[], int tam){
    double somavetor = 0, somavetorquadrado = 0, desvio;
    for (int i = 0; i < tam; i++){
        somavetor += v[i];
        somavetorquadrado += (v[i] * v[i]);
    }
    
    desvio = sqrt((somavetorquadrado - ((somavetor * somavetor) / tam) / (tam - 1)));
    
    return desvio;
}