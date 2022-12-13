/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int n;
    scanf("%d", &n);
    int *vetor;
    vetor = (int*)malloc(n * sizeof(int));
    int soma = 0;
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &vetor[i]);
    }
    for (int j = 0; j < n; j++)
    {
        soma += vetor[j];
    }
    free(vetor);
    printf("%d", soma);
    return 0;
}
