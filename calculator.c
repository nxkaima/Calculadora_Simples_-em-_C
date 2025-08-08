/*
 * Calculadora Simples em C
 * 
 * Este programa implementa uma calculadora básica que realiza operações
 * aritméticas fundamentais (soma, subtração, multiplicação e divisão)
 * entre dois números de ponto flutuante.
 * 
 * Formato de entrada: número1 operador número2
 * Exemplo: 5.5 + 3.2
 */

#include <stdio.h>

int main() {
    // Declaração das variáveis
    float operador1, operador2;  // Números que serão operados
    char operando;               // Operador aritmético (+, -, *, /)
    
    // Leitura da entrada no formato: número operador número
    // Exemplo: 10.5 + 3.2
    scanf("%f%c%f", &operador1, &operando, &operador2);
    
    // Verificação do tipo de operação e execução do cálculo correspondente
    
    if (operando == '+') {
        // Operação de soma
        printf("%.3f+%.3f=%.3f\n", operador1, operador2, operador1 + operador2);
    }
    else if (operando == '-') {
        // Operação de subtração
        printf("%.3f-%.3f=%.3f\n", operador1, operador2, operador1 - operador2);
    }
    else if (operando == '*') {
        // Operação de multiplicação
        printf("%.3f*%.3f=%.3f\n", operador1, operador2, operador1 * operador2);
    }
    else if (operando == '/') {
        // Operação de divisão
        // Nota: Este código não verifica divisão por zero
        printf("%.3f/%.3f=%.3f\n", operador1, operador2, operador1 / operador2);
    }
    else {
        // Caso o operador inserido não seja válido
        printf("Operador invalido\n");
    }
    
    return 0; // Indica que o programa terminou com sucesso
}