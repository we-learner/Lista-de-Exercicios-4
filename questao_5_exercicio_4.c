#include <stdio.h>

int main()
{
    int tamanhoArvore;

    while(scanf("%d", &tamanhoArvore) == 1)
    {
        int meioArvore = tamanhoArvore/2;
        int numLinhas = meioArvore + 1;
        int numAstericos = 1;
        int numEspacos = meioArvore;

        for(int linhaArvore = 0;linhaArvore < numLinhas;linhaArvore++)
        {
            for(int espacosImpressos = 0;espacosImpressos < numEspacos;espacosImpressos++)
            {
                printf(" ");
            }
            for(int asteriscosImpressos = 0;asteriscosImpressos < numAstericos;asteriscosImpressos++)
            {
                printf("*");
            }
            printf("\n");
            numAstericos = numAstericos + 2;
            numEspacos--;
        }

        for(int i = 0;i < meioArvore;i++)
        {
            printf(" ");
        }
        printf("*\n");

        for(int i = 0;i < meioArvore - 1;i++)
        {
            printf(" ");
        }

        printf("***\n\n");
        
    }
    return 0;
}