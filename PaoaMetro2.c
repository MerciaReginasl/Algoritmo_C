#include <stdio.h>


int busca(int *v, int i, int f, int p, int qtp) {

    int soma = 0, k, vm, r=-1, m;


    while(i<=f) {

        soma = 0;
        m= (i + f)/2;

        for (k = 0; k < qtp; k = k + 1) {
            vm = v[k] / m;
            soma = soma + vm;
        }

        if(soma>=p) {
            r = m;
            i = m + 1;
        }

        else if(soma<p) {
            f = m - 1;


        }



    }
    return r;


}

int main () {

    int p, qtp;

    scanf("%i", &p);
    scanf("%i", &qtp);

    int vet[qtp];
    int i, j, maior = 0;

    for (i = 0; i < qtp; i = i + 1) {
        scanf("%i", &vet[i]);
    }


    for (j = 0; j < qtp; j = j + 1) {
        if(vet[j] > maior) {
            maior = vet[j];
        }

    }

    int x;
    x = busca(vet, 0, maior, p, qtp);
    printf("%i\n", x);



    return 0;
}
