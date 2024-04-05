#include <stdio.h>

char cal_matr(int ln, int cl,char jogador){
    char matrix[3][3];
    
    if(jogador=='x'){
        for(int i=0;i<3;i++){
                for(int y=0;y<3;y++){
                    if((i==ln)&&(y==cl)){
                        matrix[ln][cl]='X';
                    }
                }
            }
    }
    if(jogador=='o'){
        for(int i=0;i<3;i++){
                for(int y=0;y<3;y++){
                    if((i==ln)&&(y==cl)){
                        matrix[ln][cl]='O';
                    }
                }
            }
    }
    return matrix[ln][cl];
}

int main()
{
    char velha[3][3];
    char jogador;
    int ln,cl; //ln = valor para linha, cl = valor para coluna
    
    for(int i=0;i<3;i++){
        for(int y=0;y<3;y++){
            velha[i][y]='/';
        }
    }
    
    for (int a=0;a<9;a++){
        
        printf("Informe qual linha o jogador X pretende marcar: ");
        scanf("%d",&ln);
        ln-=1;
        printf("\ninforme qual coluna o jogador X pretende marcar: ");
        scanf("%d",&cl);
        cl-=1;
        jogador='x';
        
        if((velha[ln][cl]!='O')&&(velha[ln][cl]!='X')){// verificar se a posição esta vazai
        
            velha[ln][cl]=cal_matr(ln,cl,jogador);
            
            for(int i=0;i<3;i++){
                for(int y=0;y<3;y++){
                    printf("[%c] ",velha[i][y]);
                }
                printf("\n");
            }
            
        if((velha[1][0]=='X')&&(velha[1][1]=='X')&&(velha[1][2]=='X')){
                        printf("** Jogador X ganhou **");
                        break;
            }if((velha[0][0]=='X')&&(velha[0][1]=='X')&&(velha[0][2]=='X')){
                        printf("** Jogador X ganhou **");
                        break;
            }if((velha[2][0]=='X')&&(velha[2][1]=='X')&&(velha[2][2]=='X')){
                        printf("** Jogador X ganhou **");
                        break;
            }if((velha[0][0]=='X')&&(velha[2][2]=='X')&&(velha[1][1]=='X')){
                        printf("** Jogador X ganhou **");
                        break;
            }if((velha[2][0]=='X')&&(velha[1][1]=='X')&&(velha[1][2]=='X')){
                        printf("** Jogador X ganhou **");
                        break;
            }if((velha[0][0]=='X')&&(velha[2][0]=='X')&&(velha[1][0]=='X')){
                        printf("** Jogador X ganhou **");
                        break;
            }if((velha[0][1]=='X')&&(velha[1][1]=='X')&&(velha[2][1]=='X')){
                        printf("** Jogador X ganhou **");
                        break;
            }if((velha[2][2]=='X')&&(velha[0][2]=='X')&&(velha[1][2]=='X')){
                        printf("** Jogador X ganhou **");
                        break;}
                        
                        
        if((velha[1][0]=='O')&&(velha[1][1]=='O')&&(velha[1][2]=='O')){
                        printf("** Jogador O ganhou **");
                        break;
            }if((velha[0][0]=='O')&&(velha[0][1]=='O')&&(velha[0][2]=='O')){
                        printf("** Jogador O ganhou **");
                        break;
            }if((velha[2][0]=='O')&&(velha[2][1]=='O')&&(velha[2][2]=='O')){
                        printf("** Jogador O ganhou **");
                        break;
            }if((velha[0][0]=='O')&&(velha[2][2]=='O')&&(velha[1][1]=='O')){
                        printf("** Jogador O ganhou **");
                        break;
            }if((velha[2][0]=='O')&&(velha[1][1]=='O')&&(velha[1][2]=='O')){
                        printf("** Jogador O ganhou **");
                        break;
            }if((velha[0][0]=='O')&&(velha[2][0]=='O')&&(velha[1][0]=='O')){
                        printf("** Jogador O ganhou **");
                        break;
            }if((velha[0][1]=='O')&&(velha[1][1]=='O')&&(velha[2][1]=='O')){
                        printf("** Jogador O ganhou **");
                        break;
            }if((velha[2][2]=='O')&&(velha[0][2]=='O')&&(velha[1][2]=='O')){
                        printf("** Jogador O ganhou **");
                        break;}
            
            
                
        }else{
            printf("\n**Essa posição já foi selecionada...**\n              ** **");
            a--;
        }printf("\n");
        
        printf("Informe qual linha o jogador O pretende marcar: ");
            scanf("%d",&ln);
            ln-=1;
            printf("\ninforme qual coluna o jogador O pretende marcar: ");
            scanf("%d",&cl);
            cl-=1;
            jogador='o';
        
        if((velha[ln][cl]!='O')&&(velha[ln][cl]!='X')){
            
            
            velha[ln][cl]=cal_matr(ln,cl,jogador);
            
            for(int i=0;i<3;i++){
                for(int y=0;y<3;y++){
                    printf("[%c] ",velha[i][y]);
                }
                printf("\n");
            }
// verificar se x gahou            
            if((velha[1][0]=='X')&&(velha[1][1]=='X')&&(velha[1][2]=='X')){
                        printf("** Jogador X ganhou **");
                        break;
            }if((velha[0][0]=='X')&&(velha[0][1]=='X')&&(velha[0][2]=='X')){
                        printf("** Jogador X ganhou **");
                        break;
            }if((velha[2][0]=='X')&&(velha[2][1]=='X')&&(velha[2][2]=='X')){
                        printf("** Jogador X ganhou **");
                        break;
            }if((velha[0][0]=='X')&&(velha[2][2]=='X')&&(velha[1][1]=='X')){
                        printf("** Jogador X ganhou **");
                        break;
            }if((velha[2][0]=='X')&&(velha[1][1]=='X')&&(velha[1][2]=='X')){
                        printf("** Jogador X ganhou **");
                        break;
            }if((velha[0][0]=='X')&&(velha[2][0]=='X')&&(velha[1][0]=='X')){
                        printf("** Jogador X ganhou **");
                        break;
            }if((velha[0][1]=='X')&&(velha[1][1]=='X')&&(velha[2][1]=='X')){
                        printf("** Jogador X ganhou **");
                        break;
            }if((velha[2][2]=='X')&&(velha[0][2]=='X')&&(velha[1][2]=='X')){
                        printf("** Jogador X ganhou **");
                        break;}
            
// verificar se o ganhou            
            if((velha[1][0]=='O')&&(velha[1][1]=='O')&&(velha[1][2]=='O')){
                        printf("** Jogador O ganhou **");
                        break;
            }if((velha[0][0]=='O')&&(velha[0][1]=='O')&&(velha[0][2]=='O')){
                        printf("** Jogador O ganhou **");
                        break;
            }if((velha[2][0]=='O')&&(velha[2][1]=='O')&&(velha[2][2]=='O')){
                        printf("** Jogador O ganhou **");
                        break;
            }if((velha[0][0]=='O')&&(velha[2][2]=='O')&&(velha[1][1]=='O')){
                        printf("** Jogador O ganhou **");
                        break;
            }if((velha[2][0]=='O')&&(velha[1][1]=='O')&&(velha[1][2]=='O')){
                        printf("** Jogador O ganhou **");
                        break;
            }if((velha[0][0]=='O')&&(velha[2][0]=='O')&&(velha[1][0]=='O')){
                        printf("** Jogador O ganhou **");
                        break;
            }if((velha[0][1]=='O')&&(velha[1][1]=='O')&&(velha[2][1]=='O')){
                        printf("** Jogador O ganhou **");
                        break;
            }if((velha[2][2]=='O')&&(velha[0][2]=='O')&&(velha[1][2]=='O')){
                        printf("** Jogador O ganhou **");
                        break;}
        }else{
            printf("\n**Essa posição já foi selecionada...**\n              ** **");
            a--;
        }printf("\n");
        if(a==8){
            printf("** Velha **");
        }
    }
    return 0;}
