#include <stdio.h>//biblioteca de comunicação de usuario
#include <stdlib.h>//biblioteca de espaço de memoria
#include <locale.h>//biblioteca de alocação de texto e região
#include <string.h>//biblioteca responsável pela string

	int Registro(){ // função responsavel por cadastra usuarios no sistema
	 
	 // inicio da criação de variaveis string
	 char arquivo[40];
	 char cpf[40];
	 char nome[40];
	 char sobrenome[40];
	 char cargo[40];
	 //final da criação de variaveis
	 printf("Digite o CPF  a ser cadastrado: \n"); //coletando informações do usuario
	 scanf ("%s",cpf); // se refere-se a string
	 
	 strcpy(arquivo,  cpf); //Responsável por copiar os valores da string
	 
	 FILE *file; // Cria um arquivo
	 file = fopen(arquivo, "w"); //Cria um arquivo
	 fprintf(file,cpf); //salva o valor da variável
	 fclose(file); //fecha arquivo
	 
	 file = fopen(arquivo,"a"); //abrindo arquivo
	 fprintf (file,","); //criando arquivo e escrever
	 fclose(file); // fechando o arquivo
	 
	 
	 printf("Digite um nome a ser cadastrado: \n"); //coletando informação do usuairo
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
 	
	printf("Não foi possivel abrir o arquivo, não localizado: \n");
 }
 
 	while(fgets(conteudo, 200, file) != NULL){
 	
 	printf("\n Essas são as informações do Usuário:\n,");
 	printf("%s", conteudo);
 	printf("\n \n");
 
 	system("pause");
 
 	
 	
 }
 
 
 
 
}

int Deletar(){
	

	char cpf[40];
	
	printf("digite o cpf do Usuário  a ser deletado:\n");
	
	scanf("%s",cpf);
	
	remove(cpf);
	
	FILE  *file;
	file = fopen(cpf,"r");
	
	if(file == NULL){
	printf("o Usuário não se encontra no sistema!:\n");
	system("pause");	
		
	}
}




int main()
{ 
int opcao =0; 
int laco=1;

for(laco=1;laco=1;) // função
{
	system("cls"); // responsavel por deixa a tela limpa
	
	setlocale(LC_ALL, "Portuguese");
	
	
	printf("### Cartório da EBAC ### \n\n"); // inicio do menu
	printf("Escolha a opção desejada do menu: \n\n");
	printf("\t1 - Registra Nomes \n");
	printf("\t2 - Consultar Nomes \n");
	printf("\t3 - Deletar Nomes \n"); // sair do menu 
	printf("\t4 - sair do sistema \n");// sair do sistema

	printf("Opcão: "); 
	
	scanf ("%d", &opcao); // armazenamento de escolha usuário
	
	system ("cls"); // responsavel por limpa atela
	
	
	switch (opcao){ // inicio da seleção de menu
		
		case 1:
		Registro(); //chamada de funções
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
		printf("Não existe essa Opcão! \n");
		system("pause");
		break;
		
	}
	
	
	

	
	
	
	
	
	
   }
	
}
