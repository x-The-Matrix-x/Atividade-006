//Elabore um programa que receba um nome completo por exemplo "Joaquim Pedro Alves" 
//e retorne configurado para uma referência conforme apresentado abaixo:
//ALVES J. P.

#include <stdio.h>
#include <string.h>

#define TAM 100

int main(){
	
	char nome[TAM];
	char primeiroNome[100];
	char intermediario[100];
	char ultimoNome [100];
	int i=0;
	
	printf("Ola. Por favor, informe um nome: ");
	scanf("%[^\n]s",&nome); //regex expressões regulares.
	
	
	printf("\n\nDimensao de nome %d\n\n", strlen(nome));
	
	
	for(i=0;i<strlen(nome);i++){
		printf("%c",nome[i]);
		
	}
	printf("\n\n");
	
	for(i=0;i<strlen(nome);i++){
		printf("%c\n", nome[i]);
	}
	printf("\n\n");
	
	for(i=strlen(nome)-1;i>=0;i--){
		printf("%c",nome[i]);
	}
	printf("\n\n");
	
	for(i=strlen(nome)-1;i>=0;i--){
		printf("%c\n",nome[i]);
	}
	printf("\n\n");
	
return 0;
}



