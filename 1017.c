#include <stdio.h>
#include <math.h>


int main ()

{
    float velocidade; 
    float tempo;
    double quant_litros;

    scanf("%f", &velocidade);
    scanf("%f", &tempo);

    quant_litros = double(velocidade * tempo) / 12;

    printf("%.3f\n", quant_litros);

    return 0;

}


