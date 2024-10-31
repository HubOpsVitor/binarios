#include <stdio.h>
int main (){
    int num;
    int qtd = 0;
    for(num=1930; num <= 2024 ; num++){
        if(num % 4 == 00){
            printf("%d\n",num);
            qtd++;
        }
    }
    printf("\n-----------------------------------\n");
    printf("A quantidade de anos bissextos é de %d\n",qtd);
    return 0;
}