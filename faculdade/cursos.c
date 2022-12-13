#include <stdio.h>
struct curso {
        int id;
        double credito;
        char nome[100];

};

struct tabela{
        char nome[500];
        int id;
        int numCreditos;
};

int main(){

    int i = 0;
    int qCurso;
    scanf("%d", &qCurso);
    struct curso universidade[qCurso];
    for(i = 0; i < qCurso; i++){
        scanf("%d", &universidade[i].id);
        scanf("%lf", &universidade[i].credito);
        scanf(" %[^\n]", universidade[i].nome); getchar();
    }

    int qAlunos;
    scanf("%d", &qAlunos);
    struct tabela aluno[qAlunos];
    for(i = 0; i < qAlunos; i++){
        scanf(" %[^\n]", aluno[i].nome); getchar();
        scanf("%d", &aluno[i].id);
        scanf("%d", &aluno[i].numCreditos);
    }

    int j; double credito;
    for(i = 0; i < qAlunos; i++){
        printf("Aluno(a): %s ", aluno[i].nome);
        for(j = 0; j < qCurso; j++){
            if(aluno[i].id == universidade[j].id){
              printf("Curso: %s ", universidade[j].nome);
           }
        }
        printf("Num. Creditos: %d ", aluno[i].numCreditos);
        for(j = 0; j < qCurso; j++){
            if(aluno[i].id == universidade[j].id){
              credito = universidade[j].credito;
              printf("Valor Credito: %.2lf ", credito);
           }
        }
        printf("Mensalidade: %.2lf ", aluno[i].numCreditos * credito);
        printf("\n");
    }

return 0;
}
