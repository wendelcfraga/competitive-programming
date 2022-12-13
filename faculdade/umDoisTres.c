/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int casos;
    char num[10];
    int aux=0;
    scanf("%d", &casos);
    getchar();
    while(casos--)
    {
        fgets(num, sizeof(num), stdin);
        int tamanho = strlen(num);
        int total = 1;
        int erro1 = 0;
        int erro2 = 0;
        if (tamanho >= 5)
        {
            printf("3\n");
        }
        else
        {
            if ((num[0] == 'o' && num[1] == 'n') ||
                (num[1] == 'n' && num[2] == 'e') ||
                (num[0] == 'o' && num[2] == 'e'))
                {
                    printf("1\n");
                }
            else
            {
                printf("2\n");
            }
        }
    }

    return 0;
}
