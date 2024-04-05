#include <stdio.h>

int main()
{
    int matrix[10][10];
    int maior, x,y;
    
    for(int i=0;i<10;i++){
        for(int j=0;j<10;j++){
            matrix[i][j]= i*j;
            if(j==7){  //criar diversos números diferentes
                matrix[i][j]*=3;
            }
            printf("%d, ",matrix[i][j]);
            if((i==0)&&(j==0)){
                maior=matrix[i][j];
            }else if(matrix[i][j]>maior){
                maior=matrix[i][j];
                x=i;
                y=j;
            }
        }
        printf("\n");
    }
    printf("\n** O maior número está na posição (%d,%d) = %d **",x,y,maior);
    
    return 0;
}
