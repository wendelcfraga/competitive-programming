/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include <math.h>

struct a {
    double u;
    double x;
    double y;
    double z;
    double norma;
};

int main(){

    int n; scanf("%d", &n);
    int i;
    struct a vetor[n];
    for(i = 0; i < n; i++){
        scanf("%lf", &vetor[i].u);
        scanf("%lf", &vetor[i].x);
        scanf("%lf", &vetor[i].y);
        scanf("%lf", &vetor[i].z);
        vetor[i].norma = sqrt(pow(vetor[i].u,2) + pow(vetor[i].x,2) + pow(vetor[i].y,2)+ pow(vetor[i].z,2));
    }

    int j;
    struct a aux;
    for(i = 0; i < n; i++){
      for(j = i+1; j < n; j++){
        if(vetor[i].norma > vetor[j].norma){
            aux = vetor[i];
            vetor[i] = vetor[j];
            vetor[j] = aux;
        }
      }
    }

    for(i = 0; i < n; i++){
        printf("Vetor: (%.2lf, %.2lf, %.2lf, %.2lf) Norma: %.2lf\n", vetor[i].u, vetor[i].x, vetor[i].y, vetor[i].z, vetor[i].norma);
    }

return 0;
}
