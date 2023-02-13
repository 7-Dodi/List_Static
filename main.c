#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#include "demo.h"

#define N 5

//Programa principaç
void main (){
	//Declarando os tipos de dados definidos
	Lista *lista;
	Professor prof;
	Aluno aluno;
	Turma turma;
	Curso curso;
	
	//Inciando a lista
	lista = criarLista();
	int opcao, num, mat;
	do{
		//Criando o menu
		printf("\n=================== MENU ======================");
		printf("\n1-Para adicionar um novo atributo;\n2-Para imprimir um atributo;\n3-Para imprimir um atributo especifico;\n4-Para remover um atributo;\n0-Para encerrar;\n");
		printf("===============================================\n");
		scanf("%d", & opcao);
		system("cls");
		switch(opcao){
			case 1:
				//Menu interno de escolha do tipo de dado
				printf("\n============== MENU ================\n");
				printf("====================================");
				printf("\nDeseja adicionar o que?\n1-Para adicionar um novo aluno;\n2-Para adicionar um novo professor;\n3-Para adicionar uma nova turma;\n4-Para adicionar um novo curso;\n");
				printf("====================================\n");
				scanf("%d", & num);
				switch(num){
					case 1:
						if(listaCheia(lista, num) != 0){
							preencherAluno(lista, aluno);
						}
						else{
							printf("\nERRO: Lista cheia\n");
						}
					break;
					case 2:
						if(listaCheia(lista, num) != 0){
							preencherProfessor(lista, prof);
						}
						else{
							printf("\nERRO: Lista cheia\n");
						}
					break;
					case 3:
						if(listaCheia(lista, num) != 0){
							preencherTurma(lista, turma);
						}
						else{
							printf("\nERRO: Lista cheia\n");
						}
					break;
					case 4:
						if(listaCheia(lista, num) != 0){
							preencherCurso(lista, curso);
						}
						else{
							printf("\nERRO: Lista cheia\n");
						}
					break;
				}
				system("pause");
				system("cls");
			break;
			
			case 2:
				//Menu interno de escolha do tipo de dado
				printf("\n============== MENU ================\n");
				printf("====================================");
				printf("\nDeseja imprimir qual lista?\n1-Para lista de alunos;\n2-Para lista de professores;\n3-Para lista de turmas;\n4-Para lista de cursos\n");
				printf("====================================\n");
				scanf("%d", & num);
				if(listaVazia(lista, num) != 0){
					imprimirLista(lista, num);
				}
				else{
					printf("\nERRO: Lista vazia\n");
				}
				system("pause");
				system("cls");
			break;
			
			case 3:
				//Menu interno de escolha do tipo de dado
				printf("\n============== MENU ================\n");
				printf("====================================");
				printf("\nDeseja imprimir qual atributo?\n1-Para aluno;\n2-Para professo;\n3-Para turma;\n4-Para curso;\n");
				scanf("%d", & num);
				printf("====================================\n");
				switch(num){
					system("cls");
					case 1:
						if(listaVazia(lista, num) != 0){
							printf("\nInforme a matricula do aluno:");
							scanf("%d", & mat);
							imprimirAluno(lista, mat);
						}
						else{
							printf("\nERRO: Lista vazia\n");
						}
					break;
					case 2:
						if(listaVazia(lista, num) != 0){
							printf("\nInforme a mtricula do professor:");
							scanf("%d", & mat);
							imprimirProfessor(lista, mat);
						}
						else{
							printf("\nERRO: Lista vazia\n");
						}
					break;
					case 3:
						if(listaVazia(lista, num) != 0){
							printf("\nInforme o codigo da turma:");
							scanf("%d", & mat);
							imprimirTurma(lista, mat);
						}
						else{
							printf("\nERRO: Lista vazia\n");	
						}
					break;
					case 4:
						if(listaVazia(lista, num) != 0){
							printf("\nInforme o codigo da curso:");
							scanf("%d", & mat);
							imprimirCurso(lista, mat);
						}
						else{
							printf("\nERRO: Lista vazia\n");	
						}
					break;
				}
				system("pause");
				system("cls");
			break;
				
			case 4:
				//Menu interno de escolha do tipo de dado
				printf("\n============== MENU ================\n");
				printf("====================================");
				printf("\nDeseja remover qual atributo?\n1-Para remover aluno;\n2-Para remover professor;\n3-Para remover turma;\n4-Para remover curso;\n");
				printf("====================================\n");
				scanf("%d", & num);
				system("cls");
				if(num == 1 || num == 2){
					printf("\nInforme a matricula que deseja remover:");
					scanf("%d", & mat);
				}
				else{
					printf("\nInforme o codigo que deseja remover:");
					scanf("%d", & mat);
				}
				removerAtributo(lista, mat, num);
				system("pause");
				system("cls");
			break;
			default:
				if(opcao != 0){
					printf("\nERRO: Opcao invalida");
				}
		}
	}while(opcao != 0);
	system("pause");
}
