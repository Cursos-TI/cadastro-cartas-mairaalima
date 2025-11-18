#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Cálculo de densidade populacional e PIB per capita
// Objetivo: Calcular informações usando operadores matemáticos, conversão de tipos de variáveis e 

int main() {
  // Definição das variáveis para armazenar as propriedades das cidades

    int populacao, p_turistico;
    float area, pib;
	float densidade, pib_pc;
	char estado, codigo[4], nome[50];

  // Entrada de dados
    //Carta 1

    printf("Vamos cadastrar a carta 1! \n");
	printf("Digite uma letra de A a H representado o estado escolhido: \n");
	scanf(" %c", &estado);

	printf("Digite a letra do estado escolhido seguida de um número de 01 a 04(ex:A01): \n");
	scanf(" %s", &codigo);

	printf("Digite o nome da cidade: \n");
	scanf(" %s", &nome);

	printf("Digite a população da cidade escolhida: \n");
	scanf(" %d", &populacao);

	printf("Digite a área da cidade escolhida em Km2: \n");
	scanf(" %f", &area);

	printf("Digite o PIB da cidade escolhida: \n");
	scanf(" %f", &pib);

	printf("Digite o número de pontos turísticos da cidade escolhida: \n");
	scanf(" %d", &p_turistico);

  //Realização dos cálculos
  
	densidade = populacao / area;
	pib_pc = pib / populacao;

  
  // Exibição dos dados da carta 1

    printf("\n Carta 1 \n");
	printf("Estado: %c \n", estado);
	printf("Código da carta: %s \n", codigo);
	printf("Nome da cidade: %s \n", nome);
	printf("População da cidade: %d \n", populacao);
	printf("Área da cidade: %f Km2 \n", area);
	printf("PIB da cidade: %f \n", pib);
	printf("Número de pontos turísticos: %d \n", p_turistico);
	printf("Densidade populacional: %f \n", densidade);
	printf("PIB per capita: %f \n", pib_pc);

  // Entrada de dados
   //Carta 2

    printf("\nVamos cadastrar a carta 2! \n");
	printf("Digite uma letra de A a H representado o estado escolhido: \n");
	scanf(" %c", &estado);

	printf("Digite a letra do estado escolhido seguida de um número de 01 a 04(ex:A01): \n");
	scanf(" %s", &codigo);

	printf("Digite o nome da cidade: \n");
	scanf(" %s", &nome);

	printf("Digite a população da cidade escolhida: \n");
	scanf(" %d", &populacao);

	printf("Digite a área da cidade escolhida em Km2: \n");
	scanf(" %f", &area);

	printf("Digite o PIB da cidade escolhida: \n");
	scanf(" %f", &pib);

	printf("Digite o número de pontos turísticos da cidade escolhida: \n");
	scanf(" %d", &p_turistico);
	
	//Realização dos cálculos
  
	densidade = populacao / area;
	pib_pc = pib / populacao;
	

  // Exibição dos dados da carta 2

    printf("\n Carta 2 \n");
	printf("Estado: %c \n", estado);
	printf("Código da carta: %s \n", codigo);
	printf("Nome da cidade: %s \n", nome);
	printf("População da cidade: %d \n", populacao);
	printf("Área da cidade: %f Km2 \n", area);
	printf("PIB da cidade: %f \n", pib);
	printf("Número de pontos turísticos: %d \n", p_turistico);
	printf("Densidade populacional: %f \n", densidade);
	printf("PIB per capita: %f \n", pib_pc);
	

return 0;
}
