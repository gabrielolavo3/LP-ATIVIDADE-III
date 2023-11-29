#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main ( ) {
    setlocale (LC_ALL, "portuguese");

// Declaração de variáveis

    int a = 0, x;
    int menu;
    char nome[50][250];
    char telefone[50][250];

// Solicitando dados

    do {
        printf ("AGENDA VIRTUAL BOX\n\n");
        printf ("Código | Descrição\n");
        printf ("   1   | Adicionar contato\n");
        printf ("   2   | Sair e exibir lista de contatos\n\n");
        printf ("Selecione a opção desejada: ");
        scanf ("%d", &menu);

            switch (menu) {
                case 1:
                    fflush (stdin);
                    printf ("\nDigite o nome do %dº contato: ", a+1);
                    gets (nome[a]);
                    fflush (stdin);
                    printf ("Informe o número do contato: ");
                    gets (telefone[a]);
                    a++;
                    system ("cls || clear");
                break;

                case 2: 
                system ("cls || clear");
                printf ("AGENDA VIRTUAL BOX! Lista de Contados\n\n");
                    for (x = 0; x < a; x++) {
                        printf ("Nome do contato: %s\n", nome[x]);
                        printf ("Telefone do contato: %s\n", telefone[x]);
                    } 
                break;

                default:
                    printf ("\nOpção inválida! Escolha novamente\n\n");
                break;
            }
                
    } while (menu != 2);

    return 0;
}