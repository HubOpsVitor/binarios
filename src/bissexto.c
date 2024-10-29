#include <stdio.h>
int main() {
    int ano;
    printf("Digite um ano e tecle Enter:\n");
    scanf("%d", &ano);

    // Verifica se o ano é bissexto
    if ((ano % 4 == 0 && ano % 100 != 0) || (ano % 400 == 0)) {
        printf("O ano %d é bissexto.\n", ano);
    } else {
        printf("O ano %d não é bissexto.\n", ano);
    }

    return 0;
}
