#include <stdio.h>

int main()
{
    int valorvet;
    int erro=0;
    
    printf("digite quantas posições de vetores voce deseja: ");
    scanf("%d",&valorvet);
    printf("\n");
    int vet[valorvet];
    
    for(int i=0;i<valorvet;i++){
        
        printf("digite o valor do vetor[%d]: ",i);
        scanf("%d",&vet[i]);
    }
    for(int i=0;i<valorvet;i++){
        if((i!=0)&&(vet[i]<vet[i-1])){
            erro+=1;
            break;
        }
    }
    if(erro>0){
        printf("\n  nao");
    }else{
        printf("\n  sim");
    }

    return 0;
}
