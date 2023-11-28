#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

// Declaração de constante

#define b 5

int main ( ) {
    setlocale (LC_ALL, "");

// Declaração de variáveis

    int a;
    int idade[b];
    int idade_maxima = INT_MIN, idade_minima = INT_MAX;
    float altura_maxima = INT_MIN, altura_minima = INT_MAX;
    float peso_maximo = INT_MIN, peso_minimo = INT_MAX;
    float peso[b], altura[b];
    char nome[b][250];

// Solicitando dados

    for (a = 0; a < b; a++) {
        fflush (stdin);
        printf ("Informe o nome da %dª pessoa: ", a+1);
        gets (nome[a]);
        printf ("Informe a idade: ");
        scanf ("%d", &idade[a]);
        printf ("Informe o peso: ");
        scanf ("%f", &peso[a]);
        printf ("Informe o altura: ");
        scanf ("%f", &altura[a]);

        printf ("\n");

        idade_maxima = idade[a] > idade_maxima ? idade[a] : idade_maxima;
        idade_minima = idade[a] < idade_minima ? idade[a] : idade_minima;

        altura_maxima = altura[a] > altura_maxima ? altura[a] : altura_maxima;
        altura_minima = altura[a] < altura_minima ? altura[a] : altura_minima;

        peso_maximo = peso[a] > peso_maximo ? peso[a] : peso_maximo;
        peso_minimo = peso[a] < peso_minimo ? peso[a] : peso_minimo;
    }

// Tela de resultado

system ("cls || clear");

    for (a = 0; a < b; a++) {
        printf ("Nome da %dª pessoa: %s\n", a+1, nome[a]);
        printf ("Idade da pessoa: %d\n", idade[a]);
        printf ("Peso da pessoa: %.2f\n", peso[a]);
        printf ("Altura da pessoa: %.2f\n", altura[a]);
        printf ("\n");
    }

    printf ("Maior e menor idade: %d e %d\n", idade_maxima, idade_minima);
    printf ("Maior altura e a menor altura: %.2f e %.2f\n", altura_maxima, altura_minima);
    printf ("Maior peso e menor peso: %.2f e %.2f\n", peso_maximo, peso_minimo);
    
    return 0;
}