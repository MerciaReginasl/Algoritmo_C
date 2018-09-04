#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char opt1[20], opt2[20], opt3[20];
    int teste;
    gets(opt1);
    if(strcmp(opt1, "vertebrado") == 0){
        fflush(stdin);
        gets(opt2);
        if(strcmp(opt2, "mamifero") == 0){
            fflush(stdin);
            gets(opt3);
            if(strcmp(opt3, "onivoro") == 0){
                printf("homem\n");
            }
            else if(strcmp(opt3, "herbivoro") == 0){
                printf("vaca\n");
            }
        }
        else if(strcmp(opt2, "ave") == 0){
            fflush(stdin);
            gets(opt3);
            if(strcmp(opt3, "onivoro") == 0){
                printf("pomba\n");
            }
            else if(strcmp(opt3, "carnivoro") == 0){
                printf("aguia\n");
            }
        }
    }
    else if(strcmp(opt1, "invertebrado") == 0){
        fflush(stdin);
        gets(opt2);
        if(strcmp(opt2, "inseto") == 0){
            fflush(stdin);
            gets(opt3);
            if(strcmp(opt3, "hematofago") == 0){
                printf("pulga\n");
            }
            else if(strcmp(opt3, "herbivoro") == 0){
                printf("lagarta\n");
            }
        }
        else if(strcmp(opt2, "anelideo") == 0){
            fflush(stdin);
            gets(opt3);
            if(strcmp(opt3, "onivoro") == 0){
                printf("minhoca\n");
            }
            else if(strcmp(opt3, "hematofago") == 0){
                printf("sanguessuga\n");
            }
        }
    }

    return 0;
}
