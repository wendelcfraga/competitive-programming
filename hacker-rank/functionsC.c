#include <stdio.h>

int max_of_four(int a, int b, int c, int d)
{
    int maior = a;
    maior < b ? maior = b : 0;
    maior < c ? maior = c : 0;
    maior < d ? maior = d : 0;
    return maior;
}

int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int ans = max_of_four(a, b, c, d);
    printf("%d", ans);
    
    return 0;
}
