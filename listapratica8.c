#include <stdio.h>
#include <stdlib.h>

int main (){
    int numero, resto;
    int binario[32];
    int i=0;

    printf("Digite um numero inteiro :");
    scanf("%d",&numero);

    if(numero==0){
        printf("A representacao binaria de %d eh 0",numero);
        return 0;
    }
    while(numero>0){
        resto=numero%2;
        binario[i]=resto;
        numero=numero/2;
        i++;
    }
    printf("A representacao binaria eh :");
    i--;
    while(i>=0){
        printf("%d",binario[i]);
        i--;

    }
    printf("\n");
    return 0;
}
