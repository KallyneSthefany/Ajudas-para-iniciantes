#include <stdio.h>
#include <stdlib.h>
#include <conio.h> //biblioteca serve para utilizar o getchar

//Para utilizar acentos pode usar a biblioteca locale.h, eu nao utilizei qui, mas pode usar sem problemas

void menu();
void opcao1();
void opcao2();
void opcao3();

void menu(){
	int op;
	
	do{
		printf("\t\t\t\t\t\tMENU DE OPCOES\n\n\n"); // \t serve para dar espaco
		printf("\t\t\t\t\t\t1 - OPCAO 1\n");
		printf("\t\t\t\t\t\t2 - OPCAO 2\n");
		printf("\t\t\t\t\t\t3 - OPCAO 3\n"); //Pode colocar a quantidade de opcoes que quiser
		printf("\t\t\t\t\t\t0 - FINALIZAR\n\n\n");
		printf("\t\t\t\t\t\tOPCAO: ");
		scanf("%d", &op);
		
		system("cls"); //Apaga a tela de opcoes e vai para a funcao escolhida
		
		switch(op){
			case 1:
				opcao1();
				break;
			case 2:
				opcao2();
				break;
			case 3:
				opcao3();
				break;
			case 0:
				exit(0);
		}
	}while(op != 0); //O laco while ficara sendo execultado enquanto a opcao for diferente de 0, quando ele escolher a opcao 0, finaliza sem erro
	
}


void opcao1(){
	printf("\t\t\t\t\t\tAJUDINHAS PARA ALUNOS DE PROGRAMACAO\n"); //So um exemplo para quando voce clicar na opcao 1 ver como aparece, lembrando que voce pode execultar ou printar qualquer coisa dentro de um funcao 
	//Pode declarar variaveis locais
	//aqui voce coloca o que quiser execultar ou printar
	getchar();
	getchar();
	system("cls");
}


void opcao2(){
	//aqui voce coloca o que quiser execultar ou printar
	getchar();
	getchar();
    system("cls");
}

void opcao3(){
	//aqui voce coloca o que quiser execultar ou printar
	getchar();
	getchar();
    system("cls");
}


int main(){
	
	menu(); //So precisa colocar essa funcao, pos por meio dela voce pode acessar todas as outras
	
	return 0;
}




