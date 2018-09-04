#include <stdio.h>

int main()
{
    int count,c=1;
    double soma=0.0;
    for(count=1;count<=39;count+=2,c*=2){
        soma = soma + (float) count/c;
    };
    printf("%.2lf\n",soma);
    return 0;
}
