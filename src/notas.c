#include <stdio.h>

int main() {
    float nota1, nota2, nota3, nota4, media; // Quatro notas e a média

    // Aqui seram colocadas as notas
    printf("Digite a primeira nota: ");
    scanf("%f", &nota1);

    printf("Digite a segunda nota: ");
    scanf("%f", &nota2);

    printf("Digite a terceira nota: ");
    scanf("%f", &nota3);

    printf("Digite a quarta nota: ");
    scanf("%f", &nota4);

    // Aqui fica o calculo da média
    media = (nota1 + nota2 + nota3 + nota4) / 4;

    // E o resultado da média
    printf("A média das notas é: %.2f\n", media);

    return 0;
}
