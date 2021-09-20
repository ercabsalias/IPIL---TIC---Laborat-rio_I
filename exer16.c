#include <stdio.h>


int main(int argc, char const *argv[])
{
    float altura, maior, menor;
    int i;
    for (i = 0; i <= 14; i++)
    {
        printf("Infomre a altura da %i pessoa: ", i+1);
        scanf("%f", &altura);

        if (i==0){
            maior = altura;
            menor = altura;
        }
        else {
            if (altura>maior) 
                maior = altura;
            if (altura<menor)
                menor = altura;
        }
    }

    printf("A maior altura do grupo = %.2f \n", maior);
    printf("A menor altura do grupo = %.2f \n", menor);
       
    return 0;
}
