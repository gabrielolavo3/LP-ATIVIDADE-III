#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int main ( ) {
    setlocale (LC_ALL, "");

// Declaração de variáveis

    int a, b;
    int idade[3];
    float notas[3][3], soma = 0, media[3];
    char nome[3][250], resultado[3][250];

// Solicitando dados

    for (a = 0; a < 3; a++) {
        printf ("Informe o nome do %dº aluno: ", a+1);
        gets (nome[a]);
        printf ("Informe a idade: ");
        scanf ("%d", &idade[a]);

        for (b = 0; b < 3; b++) {
            printf ("Digite a %dª nota: ", b+1);
            scanf ("%f", &notas[a][b]);
        soma += notas[a][b];
        }
        
        printf ("\n");
        media[a] = soma / b;
        soma = 0;
        fflush (stdin);

// Validando a aprovação

        if (media[a] >= 7) {
            strcpy (resultado[a], "Aprovado!");
        } 
        if (media[a] >= 5 && media[a] < 7) {
            strcpy (resultado[a], "Recuperação!");
    
        } else {
            strcpy (resultado[a], "Reprovado!"); }
    }

    
// Tela de resultado

system ("cls || clear");

    for (a = 0; a < 3; a++) {
        printf ("Nome do aluno: %s\n", nome[a]);
        printf ("Idade do aluno: %d\n", idade[a]);

        for (b = 0; b < 3; b++) {
            printf ("%dª nota: %.2f\n", b+1, notas[a][b]); 
        }
            printf ("Média: %2.f\n", media[a]);
            printf ("Resultado final: %s\n", resultado[a]);
        
        printf ("\n");
    }

    return 0;
}