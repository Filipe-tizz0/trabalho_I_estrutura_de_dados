5)#include <stdio.h>
int main()
{
    struct bandas{
        int n_integrantes;
        int n_ranking;
        char nome[30];
        char estilo_m[10];
    };
    
    struct bandas banda1;
    banda1.n_integrantes = 5;
    banda1.n_ranking = 3;
    banda1.nome[30]= "ultraje_a_rigor";
    banda1.estilo_m[10] = "rock";

    printf("numero de integrantes: %d", banda1.n_integrantes);
    printf("\nnumero no ranking: %d", banda1.n_ranking);
    printf("\nnome: %s", banda1.nome);
    printf("\nestilo musical: %s", banda1.estilo_m);
    
    struct bandas banda2;
    banda1.n_integrantes = 6;
    banda1.n_ranking = 4;
    banda1.nome[30]= "mamonas assassinas";
    banda1.estilo_m[10] = "rock";

    printf("\nnumero de integrantes: %d", banda2.n_integrantes);
    printf("\nnumero no ranking: %d", banda2.n_ranking);
    printf("\nnome: %s", banda2.nome);
    printf("\nestilo musical: %s", banda2.estilo_m);
    
    struct bandas banda3;
    banda1.n_integrantes = 6;
    banda1.n_ranking = 5;
    banda1.nome[30]= "pedra leticia";
    banda1.estilo_m[10] = "rock";

    printf("\nnumero de integrantes: %d", banda3.n_integrantes);
    printf("\nnumero no ranking: %d", banda3.n_ranking);
    printf("\nnome: %s", banda3.nome);
    printf("\nestilo musical: %s", banda3.estilo_m);
    
    struct bandas banda4;
    banda1.n_integrantes = 6;
    banda1.n_ranking = 2;
    banda1.nome[30]= "legiao urbana";
    banda1.estilo_m[10] = "rock";

    printf("\nnumero de integrantes: %d", banda4.n_integrantes);
    printf("\nnumero no ranking: %d", banda4.n_ranking);
    printf("\nnome: %s", banda4.nome);
    printf("\nestilo musical: %s", banda4.estilo_m);
    
    struct bandas banda5;
    banda1.n_integrantes = 5;
    banda1.n_ranking = 1;
    banda1.nome[30]= "engenheiros do havai";
    banda1.estilo_m[10] = "rock";

    printf("\nnumero de integrantes: %d", banda5.n_integrantes);
    printf("\nnumero no ranking: %d", banda5.n_ranking);
    printf("\nnome: %s", banda5.nome);
    printf("\nestilo musical: %s", banda5.estilo_m);

    return 0;
}

