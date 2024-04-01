#include <stdio.h>
#define MAX 30

int magico(int matriz[MAX][MAX], int n);

int main() {
    int mat[MAX][MAX], n, descoberta;
    
    printf("Digite a ordem da matriz: \n");
    scanf("%d", &n);
    printf("Digite os valores da matriz, linha por linha: \n");
    for (int i = 0; i< n; i++){
        for (int j = 0; j < n; j++){
            scanf("%d", &mat[i][j]);
        }
    }
    
    descoberta = magico(mat, n);
    
    if (descoberta == 1) {
        printf("A matriz é magica!");
    } else if (descoberta == 0) {
        printf("A matriz não é magica!");
    }
    return 0;
}

int magico(int matriz[MAX][MAX], int n) {
    int somadiagprin = 0, somadiagsec = 0, somalinha = 0, somalinhas, somacoluna = 0, somacolunas;
    int linhas[MAX] = {0}, colunas[MAX] = {0};
    
    // Soma diagonal principal
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            if (i == j){
                somadiagprin += matriz[i][j];
            }
        }
    }
    
    // Soma diagonal secundaria
    for (int i = 0; i < n; i++){
        somadiagsec += matriz[i][n-i-1];
    }
    
    // Soma de cada linha
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            linhas[i] += matriz[i][j];
        }
    }
    
    // Se cada valor da matriz linhas for igual ao primeiro, então todos são iguais
    for (int i = 0; i < n; i++){
        if (linhas[i] == linhas[0]){
            somalinhas = linhas[0];
        }
    }
    
    // Soma de cada coluna
    for (int j = 0; j < n; j++){
        for (int i = 0; i < n; i++){
            colunas[j] += matriz[i][j];
        }
    }
    
    // Se cada valor da matriz colunas for igual ao primeiro, então todos são iguais
    for (int i = 0; i < n; i++){
        if (colunas[i] == colunas[0]){
            somacolunas = colunas[0];
        }
    }
    
    if (somadiagprin == somadiagsec && somadiagprin == somalinhas && somadiagprin == somacolunas) {
        return 1;
    } else {
        return 0;
    }
}