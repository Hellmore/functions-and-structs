#include <stdio.h>

void entradasemsaida(int mat[30][30], int n, int vetor[30]);
void saidasementrada(int mat[30][30], int n, int vetor[30]);
void isolada(int mat[30][30], int n, int vetor[30]);

int main() {
    int matriz[30][30], n, resposta[30] = {0};
    printf("Digite a ordem da matriz (MAX 30): \n");
    scanf("%d", &n);
    printf("Digite os valores da matriz, linha por linha: \n");
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            scanf("%d", &matriz[i][j]);
        }
    }
    
    entradasemsaida(matriz, n, resposta);
    printf("\nO vetor resposta de entrada sem saída é: \n");
    for (int i = 0; i < n; i++){
        printf("[%d] ", resposta[i]);
    }
    
    saidasementrada(matriz, n, resposta);
    printf("\nO vetor resposta de saída sem entrada é: \n");
    for (int i = 0; i < n; i++){
        printf("[%d] ", resposta[i]);
    }
    
    isolada(matriz, n, resposta);
    printf("\nO vetor resposta isolada é: \n");
    for (int i = 0; i < n; i++){
        printf("[%d] ", resposta[i]);
    }
    return 0;
}

void entradasemsaida(int mat[30][30], int n, int vetor[30]){
    int chega[30], sai[30];
    for (int j = 0; j < n; j++){
        for (int i = 0; i < n; i++){
            if (mat[i][j] == 1){
                chega[j] = 1;
                break;
            } else {
                chega[j] = 0;
            }
        }
    }
    
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            if (mat[i][j] == 1){
                sai[i] = 1;
                break;
            } else {
                sai[i] = 0;
            }
        }
    }
    
    for (int i = 0; i < n; i++){
        if (chega[i] == 1 && sai[i] == 0){
            vetor[i] = 1;
        }
    }
    
}

void saidasementrada(int mat[30][30], int n, int vetor[30]){
    int chega[30], sai[30];
    for (int j = 0; j < n; j++){
        for (int i = 0; i < n; i++){
            if (mat[i][j] == 1){
                chega[j] = 1;
                break;
            } else {
                chega[j] = 0;
            }
        }
    }
    
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            if (mat[i][j] == 1){
                sai[i] = 1;
                break;
            } else {
                sai[i] = 0;
            }
        }
    }
    
    for (int i = 0; i < n; i++){
        if (chega[i] == 0 && sai[i] == 1){
            vetor[i] = 1;
        }
    }
}

void isolada(int mat[30][30], int n, int vetor[30]){
    int chega[30], sai[30];
    for (int j = 0; j < n; j++){
        for (int i = 0; i < n; i++){
            if (mat[i][j] == 1){
                chega[j] = 1;
                break;
            } else {
                chega[j] = 0;
            }
        }
    }
    
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            if (mat[i][j] == 1){
                sai[i] = 1;
                break;
            } else {
                sai[i] = 0;
            }
        }
    }
    
    for (int i = 0; i < n; i++){
        if (chega[i] == 0 && sai[i] == 0){
            vetor[i] = 1;
        }
    }
}