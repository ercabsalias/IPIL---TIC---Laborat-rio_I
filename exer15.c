#include <stdio.h>

int main(int argc, char const *argv[])
{
    int valor;
    do
    {
        printf("Informe o valor: ");
        scanf("%i", &valor);
        printf("O sucessor = %i \n", valor+1);
    } while (valor>0);
    
    return 0;
}


//ercabsalias