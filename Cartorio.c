#include <stdio.h>//biblioteca de comunica��o de usuario
#include <stdlib.h>//biblioteca de espa�o de memoria
#include <locale.h>//biblioteca de aloca��o de texto e regi�o
#include <string.h>//biblioteca respons�vel pela string

	int Registro(){ // fun��o responsavel por cadastra usuarios no sistema
	 
	 // inicio da cria��o de variaveis string
	 char arquivo[40];
	 char cpf[40];
	 char nome[40];
	 char sobrenome[40];
	 char cargo[40];
	 //final da cria��o de variaveis
	 printf("Digite o CPF  a ser cadastrado: \n"); //coletando informa��es do usuario
	 scanf ("%s",cpf); // se refere-se a string
	 
	 strcpy(arquivo,  cpf); //Respons�vel por copiar os valores da string
	 
	 FILE *file; // Cria um arquivo
	 file = fopen(arquivo, "w"); //Cria um arquivo
	 fprintf(file,cpf); //salva o valor da vari�vel
	 fclose(file); //fecha arquivo
	 
	 file = fopen(arquivo,"a"); //abrindo arquivo
	 fprintf (file,","); //criando arquivo e escrever
	 fclose(file); // fechando o arquivo
	 
	 
	 printf("Digite um nome a ser cadastrado: \n"); //coletando informa��o do usuairo
	 scanf("%s",nome); // se refere-se a string
	 
	 file = fopen(arquivo ,"a");
	 fprintf (file,nome);
	 fclose (file);
	 
	 
	 
	file = fopen(arquivo,"a");
	fprintf (file,",");
	fclose(file);
	 
	 
	 
	printf("Digite o sobrenome a ser Cadastrado\n");
	scanf("%s",sobrenome);
	 
	 
	file = fopen(arquivo,"a");
	fprintf(file,sobrenome);
 	fclose(file);

 
 	file = fopen(arquivo,"a");
	fprintf (file,",");
	fclose(file);
 	
 
 printf("Digite o cargo a ser cadastrado \n");
 scanf("%s",cargo);
 
 
 file = fopen(arquivo,"a");
 fprintf(file,cargo);
 fclose(file);
 
 

 file = fopen(arquivo,"a");
 fprintf (file,",");
 fclose(file);
 
 
 system ("pause");
 
 	
}

int Consultar(){
	
	
 setlocale(LC_ALL, "Portuguese"); 
 
 char cpf[40]; //variavel 
 char conteudo[200];// variavel
 
 	printf("Digite o cpf a ser consultado:\n");
 	scanf("%s",cpf);
 
 	FILE *file;
 	file =fopen(cpf,"r");
 
 	if(file==NULL){
 	
	printf("N�o foi possivel abrir o arquivo, n�o localizado: \n");
 }
 
 	while(fgets(conteudo, 200, file) != NULL){
 	
 	printf("\n Essas s�o as informa��es do Usu�rio:\n,");
 	printf("%s", conteudo);
 	printf("\n \n");
 
 	system("pause");
 
 	
 	
 }
 
 
 
 
}

int Deletar(){
	

	char cpf[40];
	
	printf("digite o cpf do Usu�rio  a ser deletado:\n");
	
	scanf("%s",cpf);
	
	remove(cpf);
	
	FILE  *file;
	file = fopen(cpf,"r");
	
	if(file == NULL){
	printf("o Usu�rio n�o se encontra no sistema!:\n");
	system("pause");	
		
	}
}




int main()
{ 
int opcao =0; 
int laco=1;

for(laco=1;laco=1;) // fun��o
{
	system("cls"); // responsavel por deixa a tela limpa
	
	setlocale(LC_ALL, "Portuguese");
	
	
	printf("### Cart�rio da EBAC ### \n\n"); // inicio do menu
	printf("Escolha a op��o desejada do menu: \n\n");
	printf("\t1 - Registra Nomes \n");
	printf("\t2 - Consultar Nomes \n");
	printf("\t3 - Deletar Nomes \n"); // sair do menu 
	printf("\t4 - sair do sistema \n");// sair do sistema

	printf("Opc�o: "); 
	
	scanf ("%d", &opcao); // armazenamento de escolha usu�rio
	
	system ("cls"); // responsavel por limpa atela
	
	
	switch (opcao){ // inicio da sele��o de menu
		
		case 1:
		Registro(); //chamada de fun��es
		break;
		
		case 2:
		Consultar();
		break; 
		
		case 3:
		Deletar();
		break;
		
		case 4:
		printf("Obrigado por utilizar o Sistema !! \n");
		return 0;
		break;	
		
		default:
		printf("N�o existe essa Opc�o! \n");
		system("pause");
		break;
		
	}
	
	
	

	
	
	
	
	
	
   }
	
}
