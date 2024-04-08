#include <stdio.h>
#define max 10
 
typedef struct data {
    int dia;
    int mes;
    int ano;
} data;
 
void ordenadata(data v[], int tamanho);
void imprimevetor(data v[], int tamanho);
void ledata(data aniversario);
 
int main() {
    data aniversarios[max] = {
        {20, 8, 1998},
        {11, 9, 2000},
        {25, 6, 2008},
        {07, 1, 1973},
        {04, 3, 1971},
        {18, 3, 1998}
    };
    ordenadata(aniversarios, 6);
    printf("Aniversários ordenados cronológicamente: \n");
    imprimevetor(aniversarios, 6);
 
    return 0;
}
 
void ordenadata(data v[], int tamanho){
    int i, j;
    for (i = 1; i < tamanho; i++){
        j = i;
        while (j > 0){
            if ((v[j-1].ano > v[j].ano) || (v[j-1].ano == v[j].ano && v[j-1].mes > v[j].mes) || (v[j-1].ano == v[j].ano && v[j-1].mes == v[j].mes && v[j-1].dia > v[j].dia)){
                data aux = v[j-1];
                v[j-1] = v[j];
                v[j] = aux;
                j--;
            } else {
                break;
            }
        }
    }
}
 
void ledata(data aniversario){
    printf("%d/%d/%d\n", aniversario.dia, aniversario.mes, aniversario.ano);
}
 
void imprimevetor(data v[], int tamanho){
    for (int i = 0; i < tamanho; i++){
        ledata(v[i]);
    }
}