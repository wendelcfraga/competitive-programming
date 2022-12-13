/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int i, j, k, l, m, n;
    double fra1[100], fra2[100], fra3[100], fra4[100];
    double num1, num2, final;
    int aux=0;
    scanf("%d", &n);
    for (i=0; i<n; i++)
    {
        scanf("%d", &m);
        for (j=0; j<m; j++)
        {
            scanf("%lf/%lf", &num1, &num2);
            final = num1/num2;
            fra3[j] = final;
        }
        
        for (k=0; k<m; k++) 
        {
        for (l= k + 1; l<m; l++)
        {
            fra3[k] == fra3[l] ? aux++ : 0;
        }
        }
    }
    
    if (aux - 1 == m) printf("Nao ha fracoes equivalentes na sequencia\n");
    
    for (i=0; i<m; i++)
    {
        printf("%lf\n", fra3[i]);
    }

    return 0;
}
