/******************************************************************************

Programa para ordenar 10 alunos em ordem decrescente de média. Cada aluno 
possui os seguintes dados: nome[51], matricula, nota1, nota2, nota3, media

*******************************************************************************/
#include <stdio.h>

struct fracao{
    int num;
    int den;
};

short int Eequivalente (struct fracao *x, struct fracao* y){
	//verificar se as fracoes apontadas por x e por y são equivalentes
	if(x->num*y->den==x->den*y->num){
	    return(1);
	}
	return(0);
}


int main()
{
    struct fracao vet[50];
    int n, m, i,j,caso=1;
    scanf("%d", &n);
    while (n--){
        scanf("%d", &m);
        for(i=0;i<m;i++){
         scanf("%d/%d",&vet[i].num, &vet[i].den);   
        }
        short int houveEquivalente=0;
        printf("Caso de teste %d\n", caso++);
        for(i=0;i<m-1;i++){
            for(j=i+1;j<m;j++)
            if( Eequivalente(&vet[i],&vet[j]) ){
                printf("%d/%d equivalente a %d/%d\n", vet[i].num,vet[i].den, vet[j].num, vet[j].den);
                houveEquivalente=1;
            }
        }
        //todos os pares possiveis foram avaliados
        if(houveEquivalente==0){
            printf("Nao ha fracoes equivalentes na sequencia\n");
        }
        
    }
    return(0);    
}
 
