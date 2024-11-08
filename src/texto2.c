#include <stdio.h>
int main (){
//declarar uma variável para armazenar o nome de alguém
    char nome[20];
        printf("Digite seu nome e tecle Enter\n");
        //Foi necessário utilizar colchetes para que o comando "scanf" receba toda a cadeia de caracteres
        //O elemento circunflexo "^", foi usado para indicar onde começa o primeiro caracter.
        //O comando \n nesse caso está sendo usado para ler o espaço aplicado.
        
        scanf("%[^\n]s",&nome);
        printf("Olá, %s. Seja mais do que bem-vindo\n",nome);
   



return 0;   
}