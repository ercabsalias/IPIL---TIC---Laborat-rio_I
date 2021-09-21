#include <stdio.h>

int main(int argc, char const *argv[])
{
    int n1=0, n2=1, i, result;
    printf("%i\n", n1);
    for (i=3; i < 21; i++)
    {
        result = n1+n2;
        printf("%i \n", result);
        n2 = n1;
        n1 = result;
    }
    
    return 0;
}


//ercabsalias