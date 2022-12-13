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

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    char *s;
    s = (char*)malloc(1024 * sizeof(char));
    scanf("%[^\n]", s);
    s = realloc(s, strlen(s) + 1);
    int um=0, dois=0, tres=0, quatro=0, cinco=0, seis=0, sete=0, oito=0, nove=0, zero=0;
    for (int i = 0; i < strlen(s); i++)
    {
        *(s + i) == '0' ? zero++:0;
        *(s + i) == '1' ? um++:0;
        *(s + i) == '2' ? dois++:0;
        *(s + i) == '3' ? tres++:0;
        *(s + i) == '4' ? quatro++:0;
        *(s + i) == '5' ? cinco++:0;
        *(s + i) == '6' ? seis++:0;
        *(s + i) == '7' ? sete++:0;
        *(s + i) == '8' ? oito++:0;
        *(s + i) == '9' ? nove++:0;
    }
    printf("%d %d %d %d %d %d %d %d %d %d", zero, um, dois, tres, quatro, cinco, seis, sete, oito, nove);
    return 0;
}
