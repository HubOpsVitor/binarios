#include <stdio.h>
int main(){

        float km_inicial, km_final, tempo_inicial, tempo_final, velocidade_media; 
        // Aqui serão colocados o KM final e inical, tempos e a velocidade média

    // Aqui seram colocadas os KM e Tempos
    printf("Digite o KM Inicial: ");
    scanf("%f", &km_inicial);

    printf("Digite o KM Final: ");
    scanf("%f", &km_final);

    printf("Digite o Tempo Inicial: ");
    scanf("%f", &tempo_inicial);

    printf("Digite a Tempo Final: ");
    scanf("%f", &tempo_final);

    // A operação
    velocidade_media = (km_final - km_inicial) / (tempo_final - tempo_inicial);

    // Resultado (Velocidade Média)
    printf("A velocidade média é: %.2f km/h\n", velocidade_media);

    return 0;
}
