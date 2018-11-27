#include <stdio.h>
#include <string.h>

typedef struct M{

    char nome[10001];
    double altura;
}modelo;


int main () {

    int qntd_modelos;
    double altura;
    double altura_desejada;
    char nome[10001];

    scanf("%d", &qntd_modelos);
    scanf("%lf", &altura_desejada);

    modelo lista_modelos[qntd_modelos];

    int i;
    for (i = 0; i < qntd_modelos; i++) {

        scanf("%s %lf", nome, &altura);
        strcpy(lista_modelos[i].nome, nome);
        lista_modelos[i].altura = altura;
    }

    i = 0;
    int f = qntd_modelos, m;
    char nomecerto[10001];
    while (i <= f) {
        m = (i + f) / 2;
        if (lista_modelos[m].altura >= altura_desejada) {
            strcpy(nomecerto, lista_modelos[m].nome);
            f = m - 1;
        }
        else {
            i = m + 1;
        }

    }

    printf("%s\n", nomecerto);

    return 0;
}
