#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int a, b; float c, d;
    scanf("%d %d %f %f", &a, &b, &c, &d);
    int somaInt = a + b;
    int difInt = a - b;
    float somaF = c + d;
    float difF = c - d;
    printf("%d %d\n%.1f %.1f", somaInt, difInt, somaF, difF);
    
    return 0;
}
