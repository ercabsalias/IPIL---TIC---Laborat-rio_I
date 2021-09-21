#include <stdio.h>


int main(int argc, char const *argv[])
{
    float fabrica,lucro,imposto,Perc_Lucro,Perc_Imposto,Valor_Final;
    printf("Informe o preco da fabrica");
    scanf("%f",&fabrica);
    printf("Informe o percentual de lucro do distribuidor");
    scanf("%f",&lucro);
    printf("Informe o percentual de impostos");
    scanf("%f",&imposto);
    Perc_Lucro=(lucro*fabrica)/100;
    Perc_Imposto=(imposto*fabrica)/100;
    Valor_Final=fabrica+Perc_Lucro+Perc_Imposto;
    printf("Percentual de lucro = %f ",Perc_Lucro);
    printf("O percentual de imposto = %f ",Perc_Imposto);
    printf("O valor final = %f ",Valor_Final);
    return 0;
}


//ercabsalias
