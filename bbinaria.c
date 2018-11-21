#include <stdio.h>

int BB(int V[], int quant , int elem)
{
  int i=0, f=quant - 1, m, R = -1;
  while (i<=f){
    m=(i+f)/2;
    if (V[m]==elem) {
      R=m;
      f=m-1;
    }
    else if 
    (V[m]>elem) f=m-1;
    else 
    i=m+1;
      }
      return R;
}

int main (){
  int quant, consultas, num;
  scanf("%d" "%d", &quant, &consultas);
  int vetor[quant];
  for (int i=0;i<quant;i++) {
    scanf("%d", &vetor[i]);
  }
  for (int i=0; i<consultas; i++){
    scanf("%d", &num);
    printf("%d\n", BB(vetor, quant, num));
  }

  return 0;
}
