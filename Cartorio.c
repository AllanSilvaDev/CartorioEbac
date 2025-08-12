#include <stdio.h> //biblioteca de comunicação com o usuário
#include <stdlib.h> //biblioteca de alocação de espaço em memória
#include <locale.h> //biblioteca de alocações de texto por região
#include <string.h> //biblioteca responsÃ¡vel por cuidar das string

int registro() //Função responsável por cadastrar os usuários no sistema
{
	//início criação de variáveis/string
	char arquivo[40];
	char cpf[40];
	char nome[40];
	char sobrenome[40];
	char cargo[40];
	//final da criação de variáveis/string
	
	printf("Digite o CPF a ser cadastrado: "); //coletando informação do usuário
	scanf("%s", cpf); //%s refere-se a string
	
	strcpy(arquivo, cpf); //Responsavel por copiar os valores das string
	
	FILE *file; // cria o arquivo
	file = fopen(arquivo, "w"); // cria o arquivo e o "w" siginifica escrever
	fprintf(file,cpf); // salvo o valor da variavel
	fclose(file); // fecha o arquivo
	
	file = fopen(arquivo, "a"); //cria o arquivo e o "a" significa atualizar
	fprintf(file,","); // salvo o valor da variavel e a "," significa gravar
	fclose(file); // fecha o arquivo
	
	printf("Digite o nome a ser cadastrado: "); //coletando informação do usuário
	scanf("%s",nome); //%s refere-se a string
	
	file = fopen(arquivo, "a"); //cria o arquivo e o "a" significa atualizar
	fprintf(file,nome); // salvo o valor da variavel
	fclose(file); // fecha o arquivo
	
	file = fopen(arquivo, "a"); //cria o arquivo e o "a" significa atualizar
	fprintf(file,","); // salvo o valor da variavel e a "," significa gravar
	fclose(file); // fecha o arquivo
	
	printf("Digite o sobrenome a ser cadastrado: "); //coletando informação do usuário
	scanf("%s",sobrenome); //%s refere-se a string
	
	file = fopen(arquivo, "a"); //cria o arquivo e o "a" significa atualizar
	fprintf(file,sobrenome); // salvo o valor da variavel
	fclose(file); // fecha o arquiv
	
	file = fopen(arquivo, "a"); //cria o arquivo e o "a" significa atualizar
	fprintf(file,","); // salvo o valor da variavel e a "," significa gravar
	fclose(file); // fecha o arquivo
	
	printf("Digite o cargo a ser cadastrado: "); //coletando informação do usuário
	scanf("%s",cargo); //%s refere-se a string
	
	file = fopen(arquivo, "a"); //cria o arquivo e o "a" significa atualizar
	fprintf(file,cargo); // salvo o valor da variavel
	fclose(file); // fecha o arquivo	
	
    system("pause");
    
}

int consulta() //Função responsável por consultar os usuários no sistema
{
	setlocale(LC_ALL, "Portuguese"); //Definindo a linguagem

//início criação de variáveis/string	
char cpf[40];
char conteudo[100];
//final da criação de variáveis/string
	
printf("Digite o CPF a ser consultado: "); //coletando informação do usuário
scanf("%s",cpf);//%s refere-se a string
  	
FILE *file;
file = fopen(cpf,"r");
  	
if(file == NULL)
{
	printf("Não foi possivel abrir o arquivo, não localizado!.\n");
}
	
while(fgets(conteudo, 100, file) != NULL)
{
	printf("\nEssas são as informações do usuário: ");
	printf("%s", conteudo);
	printf("\n\n");
}
  	
system ("pause");

}

int deletar()
{
	char cpf[40];
	
	printf("Digite o CPF do usuário a ser deletado: ");
	scanf("%s",cpf);
	
	remove(cpf);
	
	FILE *file;
	file = fopen(cpf,"r");
	
	if(file == NULL)
	{
		printf(" O usuário não se encontra no sistema!.\n");
		system("pause");
	}
}





int main()
  {
  int opcao=0; //Definido varáveis
  int laco=1;
  
  for(laco=1;laco=1;)
  {
 
  
     system("cls");
  
     setlocale(LC_ALL, "Portuguese"); //Definido a linguagem
  
     printf("### Cartório de Liguagens Mundiais ###\n\n"); //inicio do menu
     printf("Escolha a opção desejada do menu:\n\n");
     printf("\t1 - Registrar nomes\n");
     printf("\t2 - Consultar nomes\n");
     printf("\t3 - Deletar nomes\n\n"); 
     printf("Opção: ");//fim do menu

     scanf("%d", &opcao); //armazenamento de escolha do usuário

     system("cls"); //responsável por limpar a tela
   
   
   switch(opcao) //início da seleção de menu
   {
     case 1:
     registro(); //chamada de funções
     break;
     
     case 2:
     consulta(); //chamda de consulta
     break;
     
     case 3:
     deletar(); //chamda de deletar
     break;
     
     default:
     printf("Essa opção não está disponivel!\n");
     system("pause");
     break;
  
     } //fim da seleção
    
     }
   }
