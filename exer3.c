#include <stdio.h>

int main(int argc, char const *argv[])
{
    int anoActual, anoNacimento, idade;
    printf("Informe o ano actual: ");
    scanf("%i", &anoActual);
    
    printf("Informe o ano de nascimento: ");
    scanf("%i", &anoNacimento);

    idade = anoActual - anoNacimento;
    
    printf("Voce tem %i anos \n", idade);
    printf("Em 2025 voce tera %i anos\n", 2050 - anoNacimento);

    return 0;
}


//ercabsalias