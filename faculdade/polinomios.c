#include <stdio.h>
#include <stdlib.h>
struct p{
  float termo;
  int expoente;
};
int main(){
  int teste, t; scanf("%d", &teste);

  for(t = 0; t < teste; t++){
    int i, j;
    char caractere; scanf(" %c", &caractere);

    int n1; scanf("%d", &n1);

    struct p poli1[n1];
    for(i = 0; i < n1; i++){
      scanf("%f %d", &poli1[i].termo, &poli1[i].expoente);
    }

    int n2; scanf("%d", &n2);

    struct p poli2[n2];
    for(i = 0; i < n2; i++){
      scanf("%f %d", &poli2[i].termo, &poli2[i].expoente);
    }

    int maximoExpoente = poli1[0].expoente;
    for(i = 0; i < n1; i++){
      if(maximoExpoente < poli1[i].expoente){
        maximoExpoente = poli1[i].expoente;
      }
    }for(i = 0; i < n2; i++){
      if(maximoExpoente < poli2[i].expoente){
        maximoExpoente = poli2[i].expoente;
      }
    }

    struct p resposta[maximoExpoente];
    for(i = 0; i <= maximoExpoente; i++){
      resposta[i].expoente = i;
      resposta[i].termo = 0;
    }

    for(i = 0; i <= maximoExpoente; i++){
      for(j = 0; j < n1; j++){
        if(resposta[i].expoente == poli1[j].expoente){
          resposta[i].termo += poli1[j].termo;
        }
      }
      for(j = 0; j < n2; j++){
        if(resposta[i].expoente == poli2[j].expoente){
          resposta[i].termo += poli2[j].termo;
        }
      }
    }

    for(i = maximoExpoente; i >= 0; i--){
      if(resposta[i].termo != 0){
        if(resposta[i].expoente == 0){
          if(resposta[i].termo > 0){
            printf("+%.2f", resposta[i].termo);
          }else if(resposta[i].termo < 0){
            printf("%.2f", resposta[i].termo);
          }
        }else if(resposta[i].termo > 0){
          printf("+%.2fX^", resposta[i].termo);
          printf("%d ", resposta[i].expoente);
        }else if(resposta[i].termo < 0){
            printf("%.2fX^", resposta[i].termo);
            printf("%d ", resposta[i].expoente);
        }
      }
    }puts("");
  }
return 0;
}
