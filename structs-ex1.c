#include <stdio.h>
#define max 10
 
typedef struct produto {
    char nome[80];
    double preco;
    int quantidade;
}produto;
 
void ordenapreco(produto vet[], int n);
void ordenaquantidade(produto vet[], int n);
void imprimeproduto (produto a);
void listarprodutos (produto v[], int n);
 
int main() {
    produto compra[max] = {
        {"banana", 3.99, 6},
        {"shitake", 12.99, 2},
        {"sabonete", 6.00, 4},
        {"arroz", 20.00, 1}
    };
    printf("lista ordenada por preço: \n");
    ordenapreco(compra, 4);
    listarprodutos (compra, 4);
    printf("Lista ordenada por quantidade: \n");
    ordenaquantidade(compra, 4);
    listarprodutos (compra, 4);
 
    return 0;
}
 
void ordenapreco(produto vet[], int n){
    int i, j;
    for (i = 1; i < n; i++){
        j = i;
        while (j > 0 && vet[j-1].preco > vet[j].preco){
                produto aux = vet[j-1];
                vet[j-1] = vet[j];
                vet[j] = aux;
                j--;
            }
        }
    }
 
void ordenaquantidade(produto vet[], int n){
    int i, j;
    for (i = 1; i < n; i++){
        j = i;
        while (j > 0 && vet[j-1].quantidade > vet[j].quantidade){
                produto aux;
                aux = vet[j-1];
                vet[j-1] = vet[j];
                vet[j] = aux;
                j--;
            }
        }
    }
 
void imprimeproduto (produto a){
    printf("nome: %s, preço: %.2lf, quantidade: %d.\n", a.nome, a.preco, a.quantidade);
}
 
void listarprodutos (produto v[], int n){
    for (int i = 0; i < n; i++){
        imprimeproduto(v[i]);
    }
    printf("\n");
}