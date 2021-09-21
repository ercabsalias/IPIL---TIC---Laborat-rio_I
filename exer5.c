#include <stdio.h>

int main(int argc, char const *argv[])
{
    float a,b,c,d;
	printf("Informe o valor: ");
	scanf("%f",&a);
	printf("Informe o percentual do aumento: ");
    scanf("%f",&b);	
	c=(a*b)/100;
	d=a+c;
	printf("O Salario novo = %f",d);	 
    return 0;
}


//ercabsalias