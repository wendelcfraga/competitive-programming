/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>

void palindromo(char* palindromo)
{
    char *ultimo, *depois;
    ultimo = palindromo;
    while (*ultimo != NULL)
    {
        ++ultimo;
    }
    --ultimo;
    for (depois = palindromo; ultimo >= depois;)
    {
        if (*ultimo == *depois)
        {
            --ultimo;
            depois++;
        }
        else 
        {
            break;
        }
    }
    
    depois > ultimo ? printf("sim\n"):printf("nao\n");
    
}

int main()
{
    char palavra[100];
    int l;
    while (scanf("%s", palavra) != EOF)
    {
        palindromo(palavra);
    }

    return 0;
}
