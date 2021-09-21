#include <stdio.h>

int main(int argc, char const *argv[])
{
    char nome;
    int Numero_de_diaria;
    float conta, ganho;

    printf("Informe o nome cliente: ");
    scanf("%c", &nome);

    printf("Informe o numero de diaria: ");
    scanf("%i", &Numero_de_diaria);

    if (Numero_de_diaria == 15) {
        ganho = 3.60+50.00;
        conta = 3.60;
    }
    else {
        if (Numero_de_diaria < 15){
            ganho = 4.00 + 50.00;
            conta = 4.00;
        }
        else { 
            ganho = 3.00 + 50.00;
            conta = 3.00;
        }
    }
    
    printf("O seu nome: %c", nome);
    printf("A sua conta %f", conta);
    printf("O total ganho pelo hotel = %f", ganho);
    
    return 0;
}


//ercabsalias