#include <stdio.h>

void movimentoTorre() 
{
    printf("Torre: Direita\n");
    printf("Torre: Direita\n");
    printf("Torre: Direita\n");
    printf("Torre: Direita\n");
    printf("Torre: Direita\n");
}
 
void movimentoRainha() 
{
    printf("Rainha: Esquerda\n");
    printf("Rainha: Esquerda\n");
    printf("Rainha: Esquerda\n");
    printf("Rainha: Esquerda\n");
    printf("Rainha: Esquerda\n");
    printf("Rainha: Esquerda\n");
    printf("Rainha: Esquerda\n");
    printf("Rainha: Esquerda\n");
}

int main () {

    movimentoTorre();

    printf ("\n");
    printf ("------------------\n");
    printf ("\n");

    movimentoRainha();

    printf ("------------------\n");

    for (int bispo1 = 0; bispo1 < 5; bispo1++)
    {
        for (int bispo2 = 0; bispo2 < 1; bispo2++)
        {
            printf ("direita, ");
        }
        printf ("cima\n");
    }

    printf ("------------------\n");

    for (int cavalo1 = 1 ; cavalo1 < 3; cavalo1++)
    {
        if (cavalo1 <= 3)
        {
            printf ("Cavalo: Cima.\n");
        
        
        if (cavalo1 >= 2)
        
            printf ("Cavalo: Direita.\n");
        }
    }
        
        printf ("------------------\n");

    return 0;
    
}