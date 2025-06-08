#include <stdio.h>
int main(){


// Definição das variáveis da Carta 1 ===========================================

	char estado1[0];
	char codigo1[96]; // código (letra estado) + numeral (01,02,03 ou 04)
	char cidade1[30]; //string
	int populacao1; //quantidade
	float area1; //em km quadrados
	float pib1; //valor decimal
	int ponto1;
  
// Definição das variáveis da Carta 2 ===========================================
  
	char estado2[0];
	char codigo2[1]; // código (letra estado) + numeral (01,02,03 ou 04)
	char cidade2[30]; //string
	int populacao2; //quantidade
	float area2; //em km quadrados
	float pib2; //valor decimal
	int ponto2;

// Definição das variáveis do DESAFIO AVENTUREIRO para fins de cálculo==========

	// Variáveis - Carta 01
	float densidadePopulacional1;
	float pibPerCapita1;

	// Variáveis - Carta 02
	float densidadePopulacional2;
	float pibPerCapita2;
  
// Iniciando a caputura de dados junto ao usuário================================
//===============================================================================
  
printf("Prezado(a) usuário(a), inicialmente iremos cadastrar os dados de duas cidades \n \n");

printf("Favor, insira as informações da primeira cidade (Carta 1) \n \n");


//Dados da Carta 1 (Primeira Cidade) -------------------------------------------

// ESTADO
	printf("Digite uma letra de 'A' até 'H' que represente o Estado da primeira cidade:");
	scanf("%s.1\n", &estado1);
	printf("\n");

// CÓDIGO
	printf("Agora, vamos incluir o código da primeira cidade. \n");
	printf("O código deve conter a LETRA escolhida para o Estado seguida de 01, 02, 03 ou 04. Exemplo: A01, B02, etc. \n");
	printf("Seguindo a instrução acima, digite o código da primeira cidade:");
	scanf("%s.3", &codigo1);
	printf("\n");

//CIDADE
	printf("Digite o nome da primeira cidade:");
	scanf("%s", &cidade1);
	printf("\n");

//POPULAÇÃO
	printf("Digite a quantidade de habitantes da primeira cidade:");
	scanf("%d", &populacao1);
	printf("\n");

//ÁREA
	printf("Digite o tamanho da área da primeira cidade (km²):");
	scanf("%f", &area1);
	printf("\n");

//PIB
	printf("Digite o PIB da primeira cidade:");
	scanf("%f", &pib1);
	printf("\n");

//PONTOS TURISTICOS
	printf("Digite a quantidade de pontos turísticos da primeira cidade:");
	scanf("%d", &ponto1);
	printf("\n");


// RETORNO DAS DADOS INFORMADOS ACIMA =======================================================

printf("Segue abaixo, as informações cadastradas da primeira cidade: \n");

printf("Carta 1 \n");
printf("Estado: %.1s\n", estado1);
printf("Código: %s\n", codigo1); //concatenação
printf("Nome da cidade: %s\n", cidade1);
printf("População: %d\n",populacao1);
printf("Área: %.2f km² \n", area1);
printf("PIB: %.2f\n", pib1);
printf("Número de pontos turísticos: %d\n", ponto1);
printf(" \n");


// DESAFIO AVENTUREIRO - Complemento com cálculo da densidade populacional e PIB per capita 
  
	densidadePopulacional1 = populacao1 / area1;
	printf("A densidade populacional é: %.2f\n", densidadePopulacional1);

	pibPerCapita1 = pib1 / populacao1;
	printf("O PIB per capita é: %.2f\n", pibPerCapita1);

		printf("\n");
		printf("\n");
	  
  
//Dados da Carta 2 (Segunda Cidade) -------------------------------------------

printf("Agora, vamos iniciar o cadastro da SEGUNDA CARTA de Cidade!\n \n");

//ESTADO
	printf("Digite uma letra de 'A' até 'H' que represente o Estado da segunda cidade:");
	scanf("%s.1\n", &estado2);
	printf("\n");

// CÓDIGO
	printf("Agora, vamos incluir o código da segunda cidade. \n");
	printf("O código deve conter a LETRA escolhida para o Estado seguida de 01, 02, 03 ou 04. Exemplo: A01, B02, etc. \n");
	printf("Seguindo a instrução acima, digite o código da segunda cidade:");
	scanf("%s.3", &codigo2);
	printf("\n");

//CIDADE
	printf("Digite o nome da segunda cidade:");
	scanf("%s", &cidade2);
	printf("\n");

//POPULAÇÃO
	printf("Digite a quantidade de habitantes da segunda cidade:");
	scanf("%d", &populacao2);
	printf("\n");

//ÁREA
	printf("Digite o tamanho da área da segunda cidade (km²):");
	scanf("%f", &area2);
	printf("\n");

//PIB
	printf("Digite o PIB da segunda cidade:");
	scanf("%f", &pib2);
	printf("\n");

//PONTOS TURISTICOS
	printf("Digite a quantidade de pontos turísticos da sua segunda cidade:");
	scanf("%d", &ponto2);
	printf("\n");


// RETORNO DAS DADOS INFORMADOS ACIMA =======================================================

printf("Segue abaixo, as informações cadastradas da SEGUNDA CARTA: \n");
printf("Carta 2 \n");
printf("Estado: %.1s\n", estado2);
printf("Código: %s\n", codigo2); //concatenação
printf("Nome da cidade: %s\n", cidade2);
printf("População: %d\n",populacao2);
printf("Área: %.2f km² \n", area2);
printf("PIB: %.2f\n", pib2);
printf("Número de pontos turísticos: %d\n", ponto2);
printf(" \n");


// DESAFIO AVENTUREIRO - Complemento com cálculo da densidade populacional e PIB per capita 

	densidadePopulacional2 = populacao2 / area2;
	printf("A densidade populacional é: %.2f\n", densidadePopulacional2);

	pibPerCapita2 = pib1 / populacao2;
	printf("O PIB per capita é: %.2f\n", pibPerCapita2);
		
		printf("\n");
  
return 0;
}
