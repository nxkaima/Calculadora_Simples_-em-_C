🧮 Calculadora Simples em C 

📋 Descrição do Projeto
Esta aplicação console implementa uma calculadora aritmética básica desenvolvida em linguagem C, demonstrando fundamentos sólidos de programação estruturada e manipulação de entrada/saída. O programa processa operações matemáticas em tempo real através de uma interface minimalista e eficiente.
🎯 Objetivo
Desenvolver uma ferramenta funcional que exemplifique conceitos fundamentais da programação em C, incluindo:

- Manipulação de tipos de dados primitivos

- Estruturas condicionais

- Formatação de entrada e saída

- Tratamento básico de casos especiais


⚡ Funcionalidades

- Operações Suportadas: Soma (+), Subtração (-), Multiplicação (*), Divisão (/)
  
- Entrada Flexível: Aceita números de ponto flutuante no formato número operador número

- Saída Formatada: Apresenta resultados com precisão de 3 casas decimais

- Validação de Operadores: Identifica e reporta operadores inválidos

- Interface Intuitiva: Entrada direta via teclado sem menus complexos

🔧 Implementação Técnica

- Arquitetura

- Paradigma: Programação estruturada linear

- Linguagem: C (padrão ANSI)

- Bibliotecas: stdio.h para entrada/saída

- Complexidade: O(1) - processamento de tempo constante

Estrutura de Dados

float operador1, operador2;  // Operandos numéricos

char operando;               // Símbolo da operação


Algoritmo Principal

1.Captura de dados via scanf com formato personalizado

2.Análise do operador através de estrutura condicional encadeada

3.Execução do cálculo integrada à formatação de saída

4.Tratamento de exceções para operadores não reconhecidos


💡 Destaques Técnicos

- Eficiência na Entrada: Utilização inteligente do scanf("%f%c%f") para capturar a expressão completa em uma única operação

- Código Limpo: Estrutura clara e comentários explicativos 

- Formatação Consistente: Saída padronizada para todas as operações matemáticas


- Tratamento de Erros: Implementação de caso padrão para operadores inválidos

🎓 Competências Demonstradas

- Sintaxe C: Domínio de declarações, operadores e estruturas de controle


- Manipulação de E/S: Uso eficiente de funções de entrada e saída formatada

- Lógica Condicional: Implementação de múltiplas condições de forma organizada

- Documentação: Comentários técnicos claros e estruturados

- Boas Práticas: Código legível e manutenível

🚀 Exemplos de Uso

bashEntrada: 15.75 + 8.25

Saída: 15.750+8.250=24.000


Entrada: 100.5 * 2.5


Saída: 100.500*2.500=251.250


Entrada: 45.6 # 12.3

Saída: Operador invalido
