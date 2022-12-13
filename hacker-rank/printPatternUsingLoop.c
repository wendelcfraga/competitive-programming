/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int n;
    int zero=0;
    scanf("%d", &n);
    int tam = 2 * n - 1;
    int tam2 = tam;
    int matriz[tam][tam];
    while (n > 0)
    {
        for (int i = zero; i < tam; i++)
        {
            for (int j = zero; j < tam; j++)
            {
                matriz[i][j] = n;
            }
        }
        n--; zero++; tam--;
    }
    
    for (int i = 0; i < tam2; i++)
    {
        for (int j = 0; j < tam2; j++)
        {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }

    return 0;
}
