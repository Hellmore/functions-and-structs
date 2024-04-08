#include <stdio.h>
#define max_empresa 10
#define max_cadastro 100

typedef struct pessoa {
    long int rg;
    long int cpf;
    char nome[80];
} pessoa;

typedef struct base {
    int armazenado;
    pessoa cadastro[max_cadastro];
} base;

base cria_base();
int insere_base(pessoa x, base *y);
int remove_base(int rg, base *y);

int main() {
   pessoa funcionarios[max_empresa] = {
       {000000000, 00000000000, "Pessoa 0"},
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
   
   base empresa = cria_base();
   for (int i = 0; i < max_empresa; i++){
        printf("Pessoa %d: %d.\n", i, insere_base(funcionarios[i], &empresa));
   }
   
   printf("\n");
   printf("Pessoa 1: %d.\n", remove_base(111111111, &empresas));
   printf("Pessoa 3: %d.\n", remove_base(333333333, &empresas));
   printf("Pessoa 5: %d.\n", remove_base(555555555, &empresas));
   printf("Pessoa 7: %d.\n", remove_base(777777777, &empresas));
   printf("Pessoa 9: %d.\n", remove_base(999999999, &empresas));
   
   printf("\n");
   printf("Pessoa 2: %d.\n", insere_base(empresa[2], &empresas));
   
    return 0;
}

base cria_base(){
    base nova_base;
    nova_base.armazenado = 0;
    return nova_base;
}

int insere_base(pessoa x, base *y){
    if (y->armazenado == max_cadastro){
        return 0;
    }
    
    for (int i = 0; i < y->armazenado; i++){
        if (y->cadastro[i].rg == x.rg) {
            return -1;
        }
    }
    
    y->cadastro[y->armazenado] = x;
    y->armazenado++;
    return 1;
}

int remove_base(int rg, base *y){
    for (int i = 0; i < y->armazenado; i++){
        if (y->cadastro[i].rg == rg){
            for (int j = i; j < y->armazenado-1; j++){
                y->cadastro[j] = y->cadastro[j+1];
            }
            y->armazenado--;
            return 1;
        }
    }
    return 0;
}