#include <stdio.h>
int main()
{
    int a,b,c,d,e,f;
    scanf("%d %d %d %d",&a,&b,&c,&d);
    if(c-a!=1 || d>b )
    {
    e = c - a;
    if (e < 0)
    {e = 23 + e;}
    }
    else
        e=0;
    f = d - b;
    if (f < 0 )
    {f = 60 + f;}
    if (a==c && b==d) {
	printf("O JOGO DUROU 24 HORA(S) E 0 MINUTO(S)\n");
	}
    else { 
	printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",e,f);
	}
    
    return 0;
   
}
   
