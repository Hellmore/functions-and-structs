#include <stdio.h>
void buscasequencial(int vet[], int tam, int chave, int posicoes[], int *n);
void buscabinaria(int vet[], int tam, int chave, int posicoes[], int *n);
void ordenavetor(int vet[], int tam);
int main() {
    int vetor[20] = {0, 1, 1, 1, 1, 2, 2, 2, 3, 3, 4, 5, 5, 5, 5, 6, 7, 8, 8, 9};
    int tam = sizeof(vetor) / sizeof(vetor[0]);
    int posi[20] = {0};
    int repeticoes;
    buscasequencial(vetor, tam, 5, posi, &repeticoes);
    printf("Busca sequencial.\nA chave se repete %d vezes. As posições na qual a chave aparece são:  \n", repeticoes);
    for (int i = 0; i < repeticoes; i++){
        printf("%d\n", posi[i]);
    }
    buscabinaria(vetor, tam, 8, posi, &repeticoes);
    printf("Busca binaria.\nA chave se repete %d vezes. As posições na qual a chave aparece são:  \n", repeticoes);
    for (int i = 0; i < repeticoes; i++){
        printf("%d\n", posi[i]);
    }
    return 0;
}
void buscasequencial(int vet[], int tam, int chave, int posicoes[], int *n){
    int i, j = 0;
    for (i = 0; i < tam; i++){
        if (vet[i] == chave){
            posicoes[j] = i;
            j++;
        }
    }
    *n = j;
    ordenavetor(posicoes, *n);
}
void buscabinaria(int vet[], int tam, int chave, int posicoes[], int *n){
    int ini = 0, fim = tam -1;
    int j = 0;
    while (ini <= fim) {
        int meio = (ini + fim) / 2;
        if (vet[meio] == chave){
            posicoes[j] = meio;
            j++;
            int maiores = meio + 1, menores = meio - 1;
            while (vet[menores] == chave){
                posicoes[j] = menores;
                j++;
                menores--;
            }
            while (vet[maiores] == chave){
                posicoes[j] = maiores;
                j++;
                maiores++;
            }
            break;
        } else if (vet[meio] < chave){
            ini = meio + 1;
        } else if (vet[meio] > chave){
            fim = meio - 1;
        }
    }
    *n = j;
    ordenavetor(posicoes, *n);
}
void ordenavetor(int vet[], int tam){
    int i, j;
    int aux;
    for (i = 0; i < tam; i++){
        j = i;
        while (j > 0){
            if (vet[j - 1] > vet[j]){
                aux = vet[j-1];
                vet[j-1] = vet[j];
                vet[j] = aux;
                j--;
            } else {
                break;
            }
        }
    }
}