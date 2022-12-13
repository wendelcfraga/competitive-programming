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

    char *s;
    s = malloc(1024 * sizeof(char));
    scanf("%[^\n]", s);
    s = realloc(s, strlen(s) + 1);
    int i = 0;
    while(*(s + i) != NULL)
    {
        //printf("%c", *(s + i));
        *(s + i) == 32 ? printf("\n"):printf("%c", *(s + i));
        i++;
    }
    return 0;
}
