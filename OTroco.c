//Por: https://github.com/Judenilson
#include  <stdio.h>
#include<math.h>
int main ()
{

int t, n;
double valor, d;

    scanf("%d", &t);
    for (; t > 0 ; t--)
    {
        scanf("%lf %d", &d, &n);

        double troco = 0;

        for (; n > 0 ; n--)
        {
            scanf("%lf",&valor);

            double soma = valor;

            while (soma + valor < d)
                soma += valor;

            if ( (d - soma) > troco)
                troco = d - soma;
        }

        printf("%.2lf\n", troco);
    }
 
    return 0;
}
