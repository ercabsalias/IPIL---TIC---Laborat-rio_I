/* Faça um programa que efectue a soma de todos os números ímpares que são
múltiplos de três e que se encontram no conjunto de 1 até 500*/


#include <stdio.h>

int main(int argc, char const *argv[])
{
    int soma=0, i;

    for (i = 1; i <= 500 ; i++)
    {
        if (i%2!=0) {
            if (i%3==0) {
                soma += i;
            }
        }

    }
    
    printf("A soma de todos os numeros ímpares que sao multiplos de tres e que se encontram no conjunto de 1 ate 500 = %i", soma);
    return 0;
}

