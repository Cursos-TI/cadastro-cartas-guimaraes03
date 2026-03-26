#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
 // CARTA 1 
char estado1;
char codigo1[4];
char cidade1[50];
int populacao1;
float area1;
float pib1;
int pontosTuristicos1;

// CARTA 2 
char estado2;
char codigo2[4];
char cidade2[50];
int populacao2;
float area2;
float pib2;
int pontosTuristicos2;
//Carta 1

printf("-- Especs da Carta 1 --\n");

printf("Estado (A-H): ");
scanf("%s", &estado1);

printf("Codigo (ex: A01): ");
scanf("%s", &codigo1);

printf("Nome da Cidade: ");
scanf("%s", &cidade1);

printf("Populacao: ");
scanf("%d", &populacao1);

printf("Area(km2): ");
scanf("%f", &area1);

printf("PIB: ");
scanf("%f", &pib1);

printf("Numero de pontos turisticos: ");
scanf("%d", &pontosTuristicos1);

//Carta 2
printf("-- Especs da Carta 2 --\n");

printf("Estado (A-H): ");
scanf("%s", &estado2);

printf("Codigo (ex: A01): ");
scanf("%s", &codigo2);

printf("Nome da Cidade: ");
scanf("%s", &cidade2);

printf("Populacao: ");
scanf("%d", &populacao2);

printf("Area(km2): ");
scanf("%f", &area2);

printf("PIB: ");
scanf("%f", &pib2);

printf("Numero de pontos turisticos: ");
scanf("%d", &pontosTuristicos2);

return 0;
} 
