#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

// Declara��o de constante

#define b 5

int main ( ) {
    setlocale (LC_ALL, "");

// Declara��o de vari�veis

    int a;
    int somaPar = 0, somaGeral = 0;
    int maior = INT_MIN, menor = INT_MAX;
    int numero[b], negativo = 0, impar = 0, par = 0;
    float mediaPar, mediaGeral;

// Solcitando dados

    for (a = 0; a < b; a++) {
        printf ("Informe o %d� valor: ", a+1);
        scanf ("%d", &numero[a]);

        if (numero[a] < 0) {
            negativo++; }
        
        if (numero[a] % 2 != 0) {
            impar++;
        
        } else {
            par++;
            somaPar+=numero[a]; }

        somaGeral+=numero[a];
        maior = numero[a] > maior ? numero[a] : maior;
        menor = numero[a] < menor ? numero[a] : menor;
    }

// Calculando as m�dias

    mediaPar = (float)somaPar / par;
    mediaGeral = (float)somaGeral / b;

// Tela de resultado

system ("cls");

    printf ("Quantidade de n�meros �mpares: %d\n", impar);
    printf ("Quantidade de n�meros negativos: %d\n", negativo);
    printf ("Maior n�mero: %d\n", maior);
    printf ("Menor n�mero: %d\n", menor);
    printf ("M�dia de n�meros pares: %.2f\n", mediaPar);
    printf ("M�dia total dos n�meros: %.2f\n", mediaGeral);

    return 0;
}