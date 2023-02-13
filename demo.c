#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#include "demo.h"

#define N 5

typedef struct lista{ //Definindo o tipo Lista
	//Variaveis para a contagem de elementos em cada vetor
	int qtdeAluno;
	int qtdeProfessor;
	int qtdeTurma;
	int qtdeCurso;
	//Definindo os vetores das estruturas
	Aluno aluno[N];
	Professor professor[N];
	Turma turma[N];
	Curso curso[N];
}Lista;

Lista *criarLista(){
	Lista *li;
	li = (Lista*) malloc (sizeof(struct lista));
	if(li != NULL){
		//Iniciando as variaveis de contagem com o valor zero
		li->qtdeAluno = 0;
		li->qtdeProfessor = 0;
		li->qtdeCurso = 0;
		li->qtdeTurma = 0;
	}
	return li;
}

void inserirOrdenadoAluno (Lista *li, Aluno al){ //Inserir ordenado
	int k, i=0;
	while(i<li->qtdeAluno && strcmp(li->aluno[i].nome, al.nome) < 0){ //Para encontrar a indice I
		i++;
	}
	for(k=li->qtdeAluno-1; k>=i; k--){ //Modificando o vetor, para a sua ordenação
		li->aluno[k+1] = li->aluno[k];
	}
	li->aluno[i] = al; //Inserindo o tipo aluno no vetor Aluno
	li->qtdeAluno++; //Acrescentando 1 na variável de contagem
	printf("\nSUCESSO: Aluno inserido\n");
}

void inserirOrdenadoProfessor (Lista *li, Professor prof){ //Inserir ordenado
	int k, i=0;
	while(i<li->qtdeProfessor && strcmp(li->professor[i].nome, prof.nome) < 0){ //Para encontrar a indice I
		i++;
	}
	for(k=li->qtdeProfessor-1; k>=i; k--){ //Modificando o vetor, para a sua ordenação
		li->professor[k+1] = li->professor[k];
	}
	li->professor[i] = prof; //Inserindo o tipo professor no vetor Professor
	li->qtdeProfessor++; //Acrescentando 1 na variável de contagem
	printf("\nSUCESSO: Professor inserido\n");
}

void inserirOrdenadoTurma (Lista *li, Turma turma){ //Inseriri ordenado
	int k, i=0;
	while(i<li->qtdeTurma && strcmp(li->turma[i].nome, turma.nome) < 0){ //Para encontrar a indice I
		i++;
	}
	for(k=li->qtdeTurma-1; k>=i; k--){ //Modificando o vetor, para a sua ordenação
		li->turma[k+1] = li->turma[k];
	}
	li->turma[i] = turma; //Inserindo o tipo turma no vetor Turma
	li->qtdeTurma++; //Acrescentando 1 na variável de contagem
	printf("\nSUCESSO: Turma inserida\n");
}

void inserirOrdenadoCurso (Lista *li, Curso curso){ //Inseriri ordenado
	int k, i=0;
	while(i<li->qtdeCurso && strcmp(li->curso[i].nome, curso.nome) < 0){ //Para encontrar a indice I
		i++;
	}
	for(k=li->qtdeCurso-1; k>=i; k--){ //Modificando o vetor, para a sua ordenação
		li->curso[k+1] = li->curso[k];
	}
	li->curso[i] = curso; //Inserindo o tipo curso no vetor Curso
	li->qtdeCurso++; //Acrescentando 1 na variável de contagem
	printf("\nSUCESSO: Curso inserido\n");
}

void imprimirAluno (Lista *li, int mat){ //Imprimir dados de um aluno em especifico
 	int k, i = (li->qtdeAluno*2); //Incialmente declaramos a variavel I valor espefico
 	for(k=0; k<li->qtdeAluno; k++){ //Loop para ler o vetor
 		if(li->aluno[k].matricula == mat){ //Procurar o aluno que apresente a matricula informada 
 			i = k; //Caso encontre a variável I, será igual ao valor da variável K
		 }
	}
	if(i == (li->qtdeAluno*2)){ //Caso não encontre um aluno que apresente a matricula informada
		printf("\nERRO: Aluno nao encontrado\n");
	} 
	else{ //Imprimir os dados referentes ao tipo
		printf("\nImprimindo dados do aluno:\n");
		printf("\nNome: %s", li->aluno[i].nome);
		printf("\nMatricula: %d", li->aluno[i].matricula);
		printf("\nNOTAS\n");
		printf("\nNota 1: %.2f", li->aluno[i].nota1);
		printf("\nNota 2: %.2f", li->aluno[i].nota2);
		printf("\nNota 3: %.2f\n", li->aluno[i].nota3);
	}
}

//A lógica descrita acima é a mesma aplicada nas demais funções de busca e impressão
void imprimirProfessor (Lista *li, int mat){ //Imprimir dados de um professor em especifico
 	int k, i = (li->qtdeProfessor*2);
 	for(k=0; k<li->qtdeProfessor; k++){
 		if(li->professor[k].matricula == mat){
 			i = k;
		 }
	}
	if(i == (li->qtdeProfessor*2)){
		printf("\nERRO: Professor nao encontrado\n");
	} 
	else{
		printf("\nImprimindo dados do Professor:\n");
		printf("\nNome: %s", li->professor[i].nome);
		printf("\nMatricula: %d", li->professor[i].matricula);
		printf("\nDisciplina: %s", li->professor[i].disciplina);
	}
}

void imprimirTurma (Lista *li, int cod){ //Imprimir dados de uma turma em especifica
 	int k, i = (li->qtdeTurma*2);
 	for(k=0; k<li->qtdeTurma; k++){
 		if(li->turma[k].codigo == cod){
 			i = k;
		 }
	}
	if(i == (li->qtdeTurma*2)){
		printf("\nERRO: Turma nao encontrada\n");
	} 
	else{
		printf("\nImprimindo dados da turma:\n");
		printf("\nNome: %s", li->turma[i].nome);
		printf("\nMatricula: %d", li->turma[i].codigo);
		printf("\nDisciplina: %.1f", li->turma[i].periodo);
	}
}

void imprimirCurso (Lista *li, int cod){ //Imprimir dados de um curso em especifico
 	int k, i = (li->qtdeCurso*2);
 	for(k=0; k<li->qtdeCurso; k++){
 		if(li->curso[k].codigo == cod){
 			i = k;
		 }
	}
	if(i == (li->qtdeCurso*2)){
		printf("\nERRO: Curso nao encontrado\n");
	} 
	else{
		printf("\nImprimindo dados do curso:\n");
		printf("\nNome: %s", li->curso[i].nome);
		printf("\nCodigo: %d", li->curso[i].codigo);
		printf("\nQuantidade de erros: %d\n", li->curso[i].qtdeAno);
	}
}

//Função de remover um dado de um tipo
void removerAtributo (Lista *li, int mat, int num){ //Passando como parametros: a lista, a matricula ou código do dado e um numero resultante da opção selecionada
	int k, i=0;
	switch(num){
		case 1: //Opção selecionada: 1 (Aluno)
			while(i<li->qtdeAluno && li->aluno[i].matricula != mat){ //Remoção acionada por meio da procura de um aluno
				i++;
			}
			if(i == li->qtdeAluno){ //Caso o aluno não seja encontrado
				printf("\nERRO: Matricula nao encontrada\n");
			}
			else{ //Caso seja
				for(k=i; k<li->qtdeAluno-1; k++){ //Modificando o vetor
					li->aluno[k] = li->aluno[k+1];
				}
				li->qtdeAluno--; //Decremetando a variável de contagem
				printf("\nSUCESSO: Aluno removido\n");
			}	
		break;
		case 2: //Opção selecionada: 2 (Professor)
			while(i<li->qtdeProfessor && li->professor[i].matricula != mat){ //Remoção acionada por meio da procura de um aluno
				i++;
			}
			if(i == li->qtdeProfessor){
				printf("\nERRO: Matricula nao encontrada\n");
			}
			else{
				for(k=i; k<li->qtdeProfessor-1; k++){
					li->professor[k] = li->professor[k+1];
				}
				li->qtdeProfessor--;
				printf("\nSUCESSO: Professor removido\n");
			}		
		break;
		case 3: //Opção selecionada: 3 (Turma)
			while(i<li->qtdeTurma && li->turma[i].codigo != mat){ //Remoção acionada por meio da procura de um aluno
				i++;
			}
			if(i == li->qtdeTurma){
				printf("\nERRO: Matricula nao encontrada\n");
			}
			else{
				for(k=i; k<li->qtdeTurma-1; k++){
					li->turma[k] = li->turma[k+1];
				}
				li->qtdeTurma--;
				printf("\nSUCESSO: Turma removido\n");
			}	
		break;
		case 4: //Opção selecionada: 4 (Curso)
			while(i<li->qtdeCurso && li->curso[i].codigo != mat){ //Remoção acionada por meio da procura de um aluno
				i++;
			}
			if(i == li->qtdeCurso){
				printf("\nERRO: Matricula nao encontrada\n");
			}
			else{
				for(k=i; k<li->qtdeCurso-1; k++){
					li->curso[k] = li->curso[k+1];
				}
				li->qtdeCurso--;
				printf("\nSUCESSO: Curso removido\n");
			}
		break;
	}
}

//Imprimir a lista completa
void imprimirLista (Lista *li, int num){ //Passados os parametros: lista e um numero de indentificação (mesmo numero da opção selcionada no menu)
	int k, cont = 0;
	switch(num){
		system("cls");
		case 1: //Opção selecionada: 1 (Aluno)
			for(k=0; k<li->qtdeAluno; k++){
				cont++;
				printf("\n============ Dados aluno %d =============\n", cont);
				printf("=========================================");
				printf("\nNOME: %s", li->aluno[k].nome);
				printf("\nMATRICULA: %d", li->aluno[k].matricula);
				printf("\nNOTAS:\n");
				printf("\nNOTA 1: %.2f", li->aluno[k].nota1);
				printf("\nNOTA 2: %.2f", li->aluno[k].nota2);
				printf("\nNOTA 3: %.2f", li->aluno[k].nota3);
				printf("\n=========================================\n\n");
			}
		break;
		case 2: //Opção selecionada: 2 (Professor)
			for(k=0; k<li->qtdeProfessor; k++){
				cont++;
				printf("\n============ Dados professor %d =============\n", cont);
				printf("=========================================");
				printf("\nNOME: %s", li->professor[k].nome);
				printf("\nMATRICULA: %d", li->professor[k].matricula);
				printf("\nDISCIPLINA: %s\n", li->professor[k].disciplina);
				printf("\n=========================================\n\n");
			}
		break;
		case 3: //Opção selecionada: 3 (Turma)
			for(k=0; k<li->qtdeTurma; k++){
				cont++;
				printf("\n============ Dados turma %d =============\n", cont);
				printf("=========================================");
				printf("\nNOME: %s", li->turma[k].nome);
				printf("\nMATRICULA: %d", li->turma[k].codigo);
				printf("\nPERIODO: %.1f\n", li->turma[k].periodo);
				printf("\n=========================================\n\n");
			}
		break;
		case 4: //Opção selecionada: 4 (Curso)
			for(k=0; k<li->qtdeCurso; k++){
				cont++;
				printf("\n============ Dados curso %d =============\n", cont);
				printf("=========================================");
				printf("\nNOME: %s", li->curso[k].nome);
				printf("\nMATRICULA: %d", li->curso[k].codigo);
				printf("\nQUATIDADE DE ANOS: %d\n", li->curso[k].qtdeAno);
				printf("\n=========================================\n\n");
			}
		break;
	}
}

//Analisar se o vetor está vazio
int listaVazia (Lista *li, int num){ //Passado como parametros: lista e numero de indentificação (mesmo numero do menu)
	switch(num){
		case 1: //Opção selecionada: 1 (Aluno)
			if(li->qtdeAluno == 0){
				return 0;
			}
			else{
				return 1;
			}
		break;
		case 2: //Opção selecionada: 2 (Professor)
			if(li->qtdeProfessor == 0){
				return 0;
			}
			else{
				return 1;
			}
		break;
		case 3: //Opção selecionada: 3 (Turma)
			if(li->qtdeTurma == 0){
				return 0;
			}
			else{
				return 1;
			}
		break;
		case 4: //Opção selecionada: 4 (Curso)
			if(li->qtdeCurso == 0){
				return 0;
			}
			else{
				return 1;
			}
		break;
	}
}

//Analisar se o vetor está cheio
int listaCheia (Lista *li, int num){ //Parametros: lista e numero de indentificação
	switch(num){
			case 1: //Opção selecionada: 1 (Aluno)
				if(li->qtdeAluno == N){
					return 0;
				}
				else{
					return 1;
				}
			break;
			case 2: //Opção selecionada: 2 (Professor)
				if(li->qtdeProfessor == N){
					return 0;
				}
				else{
					return 1;
				}
			break;
			case 3: //Opção selecionada: 3 (Turma)
				if(li->qtdeTurma == N){
					return 0;
				}
				else{
					return 1;
				}
			break;
			case 4: //Opção selecionada: 4 (Curso)
				if(li->qtdeCurso == N){
					return 0;
				}
				else{
					return 1;
				}
			break;
		}
}

//Para não permitir que haja duas matriculas iguais dentro de um mesmo vetor
int confirmarMatricula (Lista *li, int num, int mat){ //Parametros: lista, numero de indentificação e matricula
	int k;
	switch(num){
		case 1: //Opção selecionada: 1 (Aluno)
			for(k=0; k<li->qtdeAluno; k++){
				if(li->aluno[k].matricula == mat){
					return 0;
				}
			}
			return 1;
		break;
		case 2: //Opção selecionada: 2 (Professor)
			for(k=0; k<li->qtdeProfessor; k++){
				if(li->professor[k].matricula == mat){
					return 0;
				}
			}
			return 1;
		break;
		case 3: //Opção selecionada: 3 (Turma)
			for(k=0; k<li->qtdeTurma; k++){
				if(li->turma[k].codigo == mat){
					return 0;
				}
			}
			return 1;
		break;
		case 4: //Opção selecionada: 4 (Curso)
			for(k=0; k<li->qtdeCurso; k++){
				if(li->curso[k].codigo == mat){
					return 0;
				}
			}
			return 1;
		break;
	}
}

//Funções para preencher os campos de dados das estruturas
void preencherAluno (Lista *li, Aluno aluno){ //Estrutura: Aluno
	system("cls");
	printf("\n=========== Adicionar Aluno ============== \n");
		fflush(stdin);
		printf("\nInforme o nome do aluno:");
		gets(aluno.nome);
		printf("\nInforme a matricula do aluno:");
		scanf("%d", & aluno.matricula);
		while(confirmarMatricula(li, 1, aluno.matricula) == 0){
			printf("\nERRO: Matricula invalida. Tente novamente...");
			printf("\nInforme a matricula do aluno:");
			scanf("%d", & aluno.matricula);
		}	
		printf("\nNOTAS:\n");
		printf("\nNota 1:");
		scanf("%f", & aluno.nota1);
		printf("\nNota 2:");
		scanf("%f", & aluno.nota2);
		printf("\nNota 3:");
		scanf("%f", & aluno.nota3);
		inserirOrdenadoAluno(li, aluno);	
}

void preencherProfessor (Lista *li, Professor prof){ //Estrutura: Professor
	system("cls");
	printf("\n=========== Adicionar professor ============== \n");
		fflush(stdin);
		printf("\nInforme o nome do professor:");
		gets(prof.nome);
		printf("\nInforme a matricula do professor:");
		scanf("%d", & prof.matricula);
		while(confirmarMatricula(li, 2, prof.matricula) == 0){
			printf("\nERRO: Matricula invalida. Tente novamente...");
			printf("\nInforme a matricula do professor:");
			scanf("%d", & prof.matricula);
		}
		fflush(stdin);
		printf("\nInforme a disciplina do professor:");
		gets(prof.disciplina);
		inserirOrdenadoProfessor(li, prof);
}

void preencherTurma (Lista *li, Turma turma){ //Estrutura: Turma
	system("cls");
	printf("\n============= Adicionar Turma ===============\n");
		fflush(stdin);
		printf("\nInforme o nome da turma:");
		gets(turma.nome);
		printf("\nInforme o codigo da turma:");
		scanf("%d", & turma.codigo);
		while(confirmarMatricula(li, 3, turma.codigo) == 0){
			printf("\nERRO: Matricula invalida. Tente novamente...");
			printf("\nInforme o codigo da turma:");
			scanf("%d", & turma.codigo);	
		}
		printf("\nInforme o periodo de inicio da turma:");
		scanf("%f", & turma.periodo);
		inserirOrdenadoTurma(li, turma);
}

void preencherCurso (Lista *li, Curso curso){ //Estrutura: Curso
	system("cls");
	printf("\n=========== Adicionar Curso ===============\n");
		fflush(stdin);
		printf("\nInforme o nome do curso:");
		gets(curso.nome);
		printf("\nInforme o codigo do curso:");
		scanf("%d", & curso.codigo);
		while(confirmarMatricula(li, 4, curso.codigo) == 0){
			printf("\nERRO: Matricula invalida. Tente novamente...");
			printf("\nInforme o codigo do curso:");
			scanf("%d", & curso.codigo);
		}
		printf("\nInforme a quantidade de anos do curso:");
		scanf("%d", & curso.qtdeAno);
		inserirOrdenadoCurso(li, curso);	
}
