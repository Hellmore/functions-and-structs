#include <stdio.h>
#define max 9

int solucao(int matriz[max][max]);
int submatrizes(int matriz[max][max]);

int main() {
    int sudoku[max][max] = {
        {4, 2, 6, 5, 7, 1, 3, 9, 8},
        {8, 5, 7, 2, 9, 3, 1, 4, 6},
        {1, 3, 9, 4, 6, 8, 2, 7, 5},
        {9, 7, 1, 3, 8, 5, 6, 2, 4},
        {5, 4, 3, 7, 2, 6, 8, 1, 9},
        {6, 8, 2, 1, 4, 9, 7, 5, 3},
        {7, 9, 4, 6, 3, 2, 5, 8, 1},
        {2, 6, 5, 8, 1, 4, 9, 3, 7},
        {3, 1, 8, 9, 5, 7, 4, 6, 2}
    };
    
    int teste[max][max] = {
        {0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0}
    };
    
    if (solucao(sudoku) == 1){
        printf("SUDOKU!!");
    } else {
        printf("Não foi dessa vez!");
    }
    
    return 0;
}

int solucao(int matriz[max][max]){
    int linhas = 0, somalinhas = 0, colunas = 0, somacolunas = 0, quadrados = 0;
    
    quadrados = submatrizes(matriz);
    
    for (int i = 0; i < 9; i++){
        for (int j = 0; j < 9; j++){
            somalinhas += matriz[i][j];
        }
        
        if (somalinhas == 45){
            linhas = 1;
        } else {
            linhas = 0;
            break;
        }
        somalinhas = 0;
    }
    
    for (int j = 0; j < 9; j++){
        for (int i = 0; i < 9; i++){
            somacolunas += matriz[i][j];
        }
        
        if (somacolunas == 45){
            colunas = 1;
        } else {
            colunas = 0;
            break;
        }
        somacolunas = 0;
    }
    
    if ( linhas == 1 && colunas == 1 && quadrados == 1){
        return 1;
    } else {
        return 0;
    }
    
}

int submatrizes(int matriz[max][max]) {
    for (int i = 0; i < 9; i x+= 3){
        for (int j = 0; j < 9; j += 3){
            int somaquadrado = 0;
            for (int x = i; x < i + 3; x++){
                for (int y = j; y < j + 3; y++){
                    somaquadrado += matriz[x][y];
                }
            }
            if (somaquadrado != 45){
                    return 0;
            }
        }
    }
    return 1;
}
