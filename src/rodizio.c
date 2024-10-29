#include <stdio.h>
int main (){
      int placa;
      printf("Digite o número final da placa do seu veículo e tecle Enter\n");
      scanf("%d",&placa);

if (placa==1 || placa==2){
        printf("Esse veículo pode circular na Segunda-feira\n");
}
else if(placa==3 || placa==4){
    printf("Esse veículo pode circular na Segunda-feira\n");
}
else if(placa==5 || placa==6){
    printf("Esse veículo pode circular na Segunda-feira\n");
}
else if(placa==7 || placa==8){
    printf("Esse veículo pode circular na Segunda-feira\n");
}
else if(placa==9 || placa==0){
    printf("Esse veículo pode circular na Segunda-feira\n");
}

else{
        printf("Número inválido!\n");
}
return 0;
}