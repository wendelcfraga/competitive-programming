#include <stdio.h>

void update(int *a,int *b) {
    int soma = *a+*b;
    int abso=0;
    *a > *b ? abso = *a-*b : (abso = *b-*a); 
    (*a)=soma;
    (*b)=abso;
}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;
    
    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d", a, b);

    return 0;
}
