#include <stdio.h>

void mudar(int *a){
    *a=4;
}

int main()
{
    int a=2;
    printf("primeiro valor: %d", a);
    mudar(&a);
    printf("\nsegundo valor: %d", a);
    return 0;
}
