#include <stdio.h>

int main() {
    float salario_bruto; // Salário bruto
    float desconto_transporte, desconto_inss, desconto_fgts; // Descontos
    float total_descontos, salario_liquido; // Total de descontos e salário líquido

    // Aqui vai o salário bruto
    printf("Digite o salário bruto do funcionário: ");
    scanf("%f", &salario_bruto);

    // Calcular descontos
    desconto_transporte = salario_bruto * 0.06; // 6% de vale transporte
    desconto_inss = salario_bruto * 0.07;        // 7% de INSS
    desconto_fgts = salario_bruto * 0.08;        // 8% de FGTS

    // Calcula o total de descontos
    total_descontos = desconto_transporte + desconto_inss + desconto_fgts;

    // Calcula o salário líquido
    salario_liquido = salario_bruto - total_descontos;

    // Exibe os resultados
    printf("Total de descontos: %f\n", total_descontos);
    printf("Salário líquido: %f\n", salario_liquido);

    return 0; // Finaliza o programa
}
