/*Faça um programa que recebe 10 números e ache a média dos pares e a 
média dos ímpares*/

#include <stdio.h>

int main(int argc, char const *argv[])
{
    int numero=0, i=0, cI=0, cP=0, somaImpar=0, somaPar=0;
    float mediaPar=0, mediaImpar=0;

    for (i = 0; i <= 4; i++)
    {
        printf("Informe o valor: ");
        scanf("%i", &numero);
        if (numero%2==0){
            cP++;
            somaPar += numero;
        }
        else {
            cI++;
            somaImpar += numero;
        }
    }

    mediaPar = somaPar / cP;
    mediaImpar = somaImpar / cI;

    printf("A media dos numeros pares = %.1f \n", mediaPar);
    printf("A media dos numeros impares = %.1f \n", mediaImpar);
    
    
    return 0;
}
