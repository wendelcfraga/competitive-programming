/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int casos;
    int i, j;
    char string[500], string2[500];
    scanf("%d", &casos);
    while (casos--)
    {
        for (j=0; j<500; j++)
        {
            string[j] = NULL;
            string2[j] = NULL;
        }
        scanf("%d", &i);getchar();
        fgets(string, sizeof(string), stdin);
        
        for (j=0; j<i; j++)
        {
            string2[j] = string[j];
        }
        
        printf("%s\n", string2);
        
        
    }

    return 0;
}
