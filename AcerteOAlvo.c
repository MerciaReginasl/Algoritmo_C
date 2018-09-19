#include <stdio.h>
#include <stdlib.h>

int main()
{
    int nParedes = 0;
    int contador = 0;

    scanf("%d", &nParedes);     //numero de paredes
    int Dist[nParedes];
    int Comeco[nParedes];
    int Fim[nParedes];
    double Ainf = 0;   ///alfa inferior
    double Asup = 0;   ///alfa superior

    char result = 'Y';


    for(contador; contador <= nParedes; contador++){
        scanf("%d %d %d", &Dist[contador], &Comeco[contador], &Fim[contador]); //inicializa todas as variaveis (Distancia, comeco da parede e final da parede
    }

    Ainf = (double)Comeco[0]/(double)Dist[0];
    Asup = (double)Fim[0]/(double)Dist[0];


    for(contador = 0; contador < nParedes; contador++){        //passa por cada parede

        if((double)Comeco[contador+1]/(double)Dist[contador+1] > Asup || (double)Fim[contador+1]/(double)Dist[contador+1] < Ainf ){
            result = 'N';
            break;
        }
        else if( Ainf < (double)Comeco[contador+1]/(double)Dist[contador+1])
            Ainf = (double)Comeco[contador+1]/(double)Dist[contador+1];

        else if( Asup > (double)Fim[contador+1]/(double)Dist[contador+1])
            Asup = (double)Fim[contador+1]/(double)Dist[contador+1];
///        else
///            printf("%lf %lf", Ainf, Asup);
    }

    printf("%c\n", result);

}
