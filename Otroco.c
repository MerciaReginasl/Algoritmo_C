#include<stdio.h>
int main(int argc, char const *argv[])
{
	int casos, marcas, i,j, sobrou;
	float troco=0, valor, dinheiro, sobrou_f;
	scanf("%d",&casos);
	for(i=0;i<casos;i++){
		scanf("%f%d",&dinheiro,&marcas);
		for(j=0;j<marcas;j++){
			scanf("%f",&valor);
			sobrou = (int)dinheiro / valor;
			if (sobrou){
				sobrou_f = dinheiro-(sobrou*valor);
			}
			else{
				sobrou_f = 0;
			}
			if (troco<sobrou_f){
				troco = sobrou_f;
			}
		}
		printf("%.2f\n",troco);
		troco = 0;
	}
	return 0;
}

Por: https://github.com/Judenilson
