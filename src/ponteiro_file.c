#include <stdio.h>
int main(){
    FILE *arquivo;
    arquivo = fopen ("files/texto.txt","a");
    // w -> Write (Escrever)
    // r -> Read (Ler)
    // a -> Append (Adicionar)
    fprintf(arquivo, "O sabor do Whey é de sua preferência");
    fclose(arquivo);
    printf("Criamos o arquivo\n");
     return 0;
}