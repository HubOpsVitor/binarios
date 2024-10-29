#include <stdio.h>
int main (){
      int estacao;
      printf("Digite o mês do ano (número) e tecle Enter\n");
      scanf("%d",&estacao);

if (estacao==1 || estacao==2 || estacao==3){
        printf("Nesse mês estamos no verão\n");
}
else if(estacao==4 || estacao==5 || estacao==6){
    printf("Nesse mês estamos no outono\n");
}
else if(estacao==7 || estacao==8 || estacao==9){
    printf("Nesse mês estamos no inverno\n");
}
else if(estacao==10 || estacao==11 || estacao==12){
    printf("Nesse mês estamos no primavera\n");
}

else{
        printf("Número inválido!\n");
}
return 0;
}