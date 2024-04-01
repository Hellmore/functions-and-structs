#include <stdio.h>
#define MAX 30
 
void multiplica(double mat1[MAX][MAX], double mat2[MAX][MAX], double res[MAX][MAX], int n);
 
int main() {
    double matriz1[MAX][MAX], matriz2[MAX][MAX], matrizres[MAX][MAX];
    int n;
    printf("Digite a ordem das matrizes (MAX 30: \n");
    scanf("%d", &n);
    printf("Digite os valores da matriz 1: \n");
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            scanf("%lf", &matriz1[i][j]);
        }
    }
    printf("Digite os valores da matriz 2: \n");
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            scanf("%lf", &matriz2[i][j]);
        }
    }
    
    multiplica(matriz1, matriz2, matrizres, n);
    printf("Resultado da multiplicação: \n");
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            printf("%.2lf ", matrizres[i][j]);
        }
        printf("\n");
    }
    return 0;
}

void multiplica(double mat1[MAX][MAX], double mat2[MAX][MAX], double res[MAX][MAX], int n){
    
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            res[i][j] = 0;
            for (int k = 0; k < n; k++){
                res[i][j] += mat1[i][k] * mat2[k][j];
            }
        }
    }
}