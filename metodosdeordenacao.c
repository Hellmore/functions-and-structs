#include <stdio.h>

void selectionsort(int v[], int tam);
void bubblesort(int v[], int tam);
void insertionsort(int v[], int tam);

int main() {

    int vetor[10] = {6, 9, 3, 0, 1, 2, 8, 4, 5, 7};

    bubblesort(vetor, 10);
    
    for (int i = 0; i < 10; i++){
        printf("%d\n", vetor[i]);
    }

    return 0;
}

void selectionsort(int v[], int tam){
    // busca o menor elemento do vetor e troca com a posição
    int i, j = 0, min;
    int aux;
    for (i = 0; i < tam; i++){
        min = i;
        for (j = i + 1; j < tam; j++){
            if (v[min] > v[j]){
                min = j;
            }
        }
        
        aux = v[min];
        v[min] = v[i];
        v[i] = aux;
    }
}

void bubblesort(int v[], int tam){
    // analisa par a par e flutua o maior valor para ultima posição, como uma bolha
    int i, j;
    int aux;
    for (i = tam - 1; i > 0; i--){
        for (j = 0; j < i; j++){
            if (v[j] > v[j + 1]){
                aux = v[j];
                v[j] = v[j+1];
                v[j+1] = aux;
            }
        }
    }
}

void insertionsort(int v[], int tam){
    // insere o elemento em sua posição correta a partir do inicio do vetor
    int i, j;
    int aux;
    for (i = 0; i < tam; i++){
        j = i;
        while (j > 0){
            if (v[j - 1] > v[j]){
                aux = v[j - 1];
                v[j - 1] = v[j];
                v[j] = aux;
                j--;
            } else {
                break;
            }
        }
    }
}