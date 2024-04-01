#include <stdio.h>
#define MAX 30

void transposta(double mat1[MAX][MAX], double matres[MAX][MAX], int n);

int main() {
    double matriz[MAX][MAX], matriztrans[MAX][MAX];
    int n;
 
    printf("Digite a ordem das matrizes (MAX 30): \n");
    scanf("%d", &n);
    printf("Digite os valores da matriz a ser transposta, linha a linha: \n");
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            scanf("%lf", &matriz[i][j]);
        }
    }
    
    transposta(matriz, matriztrans, n);
    
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            printf("%.2lf ", matriztrans[i][j]);
        }
        printf("\n");
    }
    return 0;
}

void transposta(double mat1[MAX][MAX], double matres[MAX][MAX], int n){
    printf("\n");
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            matres[j][i] = mat1[i][j];
        }
    }
}