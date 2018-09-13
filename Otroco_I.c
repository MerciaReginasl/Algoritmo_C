//Fazer correções... Minha versão.



#include  <stdio.h>
#include<math.h>
int main ()
{

int t, n;
float valor, d;

    scanf("%d", &t);
    for (; t > 0 ; t--)
    {
        scanf("%f %d", &d, &n);

        float troco = 0;

        for ( ;n>0;n--)
        {
            scanf("%f", &valor);

            float soma = valor;

            while ((soma + valor) < d)
                soma += valor;

            if ((d - soma) > troco) 
                troco = d - soma;
            
        }

        printf("%.2f\n", troco);
    }
 
    return 0;
}
