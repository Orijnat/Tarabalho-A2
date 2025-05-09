//importaçao das bibliotecas que serão utilizadas
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
//criacao do vetor

// definindo o tamanho do vetor com uma constante
#define VALOR  10

//definindo as variaveis que serao utilizadas
int i, numeros[VALOR], contador, aux;


//funçao bubblesort para organizar o vetor de forma crescente
void bubble_sort_crescente() {
    for (contador=1; contador<VALOR; contador++) {
        for (i=0; i < VALOR -1; i++) {
            if (numeros[i] > numeros[i+1]) {
                aux = numeros[i];
                numeros[i] = numeros[i+1];
                numeros[i+1] = aux;

            }
        }
    }

//printa os numeros organizados de forma crescente
    printf("vetor organizado de forma crescente com bubblesort\n");
    for(i=0; i < VALOR; i++){
        printf("%d- %d\n", i, numeros[i]);
    }
}

//funçao bubblesort para organizar o vetor de forma decrescente
void bubble_sort_decrescente() {
    for (contador=1; contador<VALOR; contador++) {
        for (i=0; i < VALOR -1; i++) {
            if (numeros[i] < numeros[i+1]) {
                aux = numeros[i];
                numeros[i] = numeros[i+1];
                numeros[i+1] = aux;
            }
        }
    }
//printa os numeros na tela de forma decrescente

    printf("Vetor organizado de forma decrescente com bubblesort:");
    for(i=0; i < VALOR; i++){
        printf("%d- %d\n", i, numeros[i]);}

}



//inicializaçao do programa
int main()
{
// randomifica os numeros fornecidos pela funçao rand
    srand(time(NULL));

//printa os numeros de forma desorganizada antes de realizar as organizaçoes
    printf("Vetor desorganizado\n");
    for(i=0; i < VALOR; i++){
        numeros[i]=  rand()%100;
        printf("%d- %d\n", i, numeros[i]);
    }



// chama a funçao bubblesort que organizara o vetor de forma crescente
    bubble_sort_crescente(numeros);

// chama a funçao bubblesort que organizara o vetor de forma decrescente
    bubble_sort_decrescente(numeros);

    return 0;
}
