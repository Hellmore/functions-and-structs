#include <stdio.h>

typedef struct Pessoa {
    long int rg;
    long int cpf;
    char nome[80];
} Pessoa;

int achaindice (Pessoa v[], int tam, long int rg);

int main() {
    
    Pessoa cadastro[10] = {
        {0, 0, "Pessoa 0"},
        {111111111, 11111111111, "Pessoa 1"},
        {222222222, 22222222222, "Pessoa 2"},
        {333333333, 33333333333, "Pessoa 3"},
        {444444444, 44444444444, "Pessoa 4"},
        {555555555, 55555555555, "Pessoa 5"},
        {666666666, 66666666666, "Pessoa 6"},
        {777777777, 77777777777, "Pessoa 7"},
        {888888888, 88888888888, "Pessoa 8"},
        {999999999, 99999999999, "Pessoa 9"}
    };
    
    for (int i = 0; i < 10; i++){
        printf("O indice do rg %d é %d\n",cadastro[i].rg, achaindice(cadastro, 10, cadastro[i].rg));
    }
    
    return 0;
}

int achaindice (Pessoa v[], int tam, long int rg){
    int inicio = 0, meio = 0, fim = tam -1;
    while (inicio <= fim){
        meio = (inicio + fim) / 2;
        
        if (v[meio].rg == rg){
            return meio;
        }
        
        if (v[meio].rg > rg){
           fim = meio - 1;
        }
        
        if (v[meio].rg < rg){
            inicio = meio + 1;
        }
    }
    return -1;
}