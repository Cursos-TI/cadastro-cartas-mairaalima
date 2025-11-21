#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 3 - Comparação entre as cartas 
// Objetivo: Uso de operadores relacionais 

int main() {
  // Definição das variáveis para armazenar as propriedades das cidades

    int populacao1, populacao2, p_turistico1, p_turistico2;
    float area1, area2, pib1, pib2;
	char estado, codigo[4], nome[50];
	float densidade1, densidade2, pib_pc1, pib_pc2;
	float superPoder1, superPoder2;
	
	int resultado_populacao, resultado_p_turistico, resultado_area, resultado_pib;
	int resultado_densidade, resultado_pib_pc, resultado_superPoder;

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
	scanf(" %d", &populacao1);

	printf("Digite a área da cidade escolhida em Km2: \n");
	scanf(" %f", &area1);

	printf("Digite o PIB da cidade escolhida: \n");
	scanf(" %f", &pib1);

	printf("Digite o número de pontos turísticos da cidade escolhida: \n");
	scanf(" %d", &p_turistico1);

  //Realização dos cálculos
  
	densidade1 = populacao1 / area1;
	pib_pc1 = pib1 / populacao1;
	superPoder1 = (int)populacao1 + (int)p_turistico1 + area1 + pib1 + pib_pc1 + 1/densidade1;

  
  // Exibição dos dados da carta 1

    printf("\n Carta 1 \n");
	printf("Estado: %c \n", estado);
	printf("Código da carta: %s \n", codigo);
	printf("Nome da cidade: %s \n", nome);
	printf("População da cidade: %d \n", populacao1);
	printf("Área da cidade: %f Km2 \n", area1);
	printf("PIB da cidade: %f \n", pib1);
	printf("Número de pontos turísticos: %d \n", p_turistico1);
	printf("Densidade populacional: %f \n", densidade1);
	printf("PIB per capita: %f \n", pib_pc1);
	printf("Super poder: %f \n", superPoder1);

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
	scanf(" %d", &populacao2);

	printf("Digite a área da cidade escolhida em Km2: \n");
	scanf(" %f", &area2);

	printf("Digite o PIB da cidade escolhida: \n");
	scanf(" %f", &pib2);

	printf("Digite o número de pontos turísticos da cidade escolhida: \n");
	scanf(" %d", &p_turistico2);
	
	//Realização dos cálculos
  
	densidade2 = populacao2 / area2;
	pib_pc2 = pib2 / populacao2;
	superPoder2 = (int)populacao2 + (int)p_turistico2 + area2 + pib2 + pib_pc2 + 1/densidade2;

  // Exibição dos dados da carta 2

    printf("\n Carta 2 \n");
	printf("Estado: %c \n", estado);
	printf("Código da carta: %s \n", codigo);
	printf("Nome da cidade: %s \n", nome);
	printf("População da cidade: %d \n", populacao2);
	printf("Área da cidade: %f Km2 \n", area2);
	printf("PIB da cidade: %f \n", pib2);
	printf("Número de pontos turísticos: %d \n", p_turistico2);
	printf("Densidade populacional: %f \n", densidade2);
	printf("PIB per capita: %f \n", pib_pc2);
	printf("Super poder: %f \n", superPoder2);
	
  //Comparação entre as cartas
	resultado_populacao = populacao1 > populacao2;
	resultado_area = area1 < area2;
	resultado_pib = pib1 > pib2;
	resultado_p_turistico = p_turistico1 > p_turistico2;
	resultado_densidade = densidade1 < densidade2;
	resultado_pib_pc = pib_pc1 > pib_pc2;
	resultado_superPoder = superPoder1 < superPoder2;
	
	
  //Exibição dos resultados
	printf("\n *** Comparação de cartas *** \n");
	printf("População: Carta 1 venceu (%d) \n", resultado_populacao);
	printf("Área: Carta 2 venceu (%d) \n", resultado_area);
	printf("PIB: Carta 1 venceu (%d) \n", resultado_pib);
	printf("Pontos turísticos: Carta 1 venceu (%d) \n", resultado_p_turistico);
	printf("Densidade: Carta 2 venceu (%d) \n", resultado_densidade);
	printf("PIB per capita: Carta 1 venceu (%d) \n", resultado_pib_pc);
	printf("Super poder: Carta 2 venceu (%d) \n", resultado_superPoder);

return 0;
}