#include <stdio.h>
void cadastro (char *nome, char *email, int *idade){
FILE *arquivo;
arquivo = fopen ("files/cad_cli.txt","a");
fprintf (arquivo,"Nome %s\n",nome);
fprintf (arquivo,"E-mail: %s\n",email);
fprintf (arquivo,"%d\n",*idade);
fprintf(arquivo,"------------------------------");
fclose (arquivo);
}

int main(){
    char nome[30];
    char email[50];
    int idade;

    printf("Digite o seu nome e tecle Enter\n");
    scanf("%[^\n]s",nome);
    printf("Digite o seu e-mail e tecle Enter\n");
    scanf("%s",email);
    printf("Digite sua idade e tecle Enter\n");
    scanf("%d",&idade);
    cadastro(nome,email,&idade);
    printf("Cadastrado!\n");
    
    return 0;
}