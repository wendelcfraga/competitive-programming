#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    
    int n;
    scanf("%d", &n);
    int cinco = n/10000;
    int quatro = n/1000%10;
    int tres = n/100%100%10;
    int dois = n/10%1000%100%10;
    int um = n%10000%1000%100%10;
    int soma = cinco + quatro + tres + dois + um;
    printf("%d\n", soma);
    return 0;
}
