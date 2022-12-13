/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int num1, num2, soma;
    char resultado[11];
    int i;
    while (1)
    {
        scanf("%d %d", &num1, &num2);
        num1 == 0 && num2 == 0 ? exit(0):0;
        soma = num1 + num2;
        snprintf(resultado, sizeof(resultado), "%d", soma);
        i=0;
        while (resultado[i] != NULL)
        {
            resultado[i] != '0' ? printf("%c", resultado[i]):0;
            i++;
        }
        
        printf("\n");
    }

    return 0;
}
