#include <stdio.h>

int main(int argc, char const *argv[])
{
    int A, i, c = 0, result=0;

    printf("Informe o valor: ");
    scanf("%i", &A);
    c=A;
    for (i = 1; i <= A ; i++)
    {
           result = result * c; 
            printf("%iX", c);    
            c--;
    }

    printf("= %i", result);
    return 0;
}





//ercabsalias