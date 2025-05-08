
#include <stdio.h>
#include <stdlib.h>
//criacao do vetor

#define VALOR  10
int i, numeros[VALOR], contador, aux;


//funçao bubblesort para organizar a lista de forma crescente
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

    printf("vetor organizado de forma crescente com bubblesort\n");
    for(i=0; i < VALOR; i++){

        printf("%d\n", numeros[i]);
    }



}





int main()
{
    printf("ordem inicial dos valores\n");
    for(i=0; i < VALOR; i++){

        numeros[i]= rand()%10;

        printf("%d\n", numeros[i]);
    }

    for (contador=1; contador<VALOR; contador++) {
        for (i=0; i < VALOR -1; i++) {
            if (numeros[i] > numeros[i+1]) {
                aux = numeros[i];
                numeros[i] = numeros[i+1];
                numeros[i+1] = aux;

            }
        }
    }


bubble_sort_crescente(numeros);


    return 0;
}
