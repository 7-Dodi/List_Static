#define N 5

//Definindo os tipos de dados
typedef struct aluno{ //Definindo o tipo de dado aluno
	char nome[15]; //Estrutura que servirá para ordenação na lista
	int matricula; //Estrutura que servirá para identificação
	float nota1, nota2, nota3;
}Aluno;

typedef struct professor{ //Definindo o tipo de dado professor
	char nome[15]; //Estrutura que servirá para a ordenação na lista
	int matricula; //Estrutura que servirá para identificação
	char disciplina[10];
}Professor;

typedef struct turma{ //Definindo o tipo de dado turma
	char nome[15]; //Estrutura que servirá para a ordenação na lista
	float periodo;
	int codigo; //Estrutura que servirá para identificação
}Turma;

typedef struct curso{ //Definindo o tipo de dado curso
	char nome[15]; //Estrutura que servirá para a ordenação na lista
	int qtdeAno;
	int codigo; //Estrutura que servirá para identificação
}Curso;

typedef struct lista Lista; //Definindo o tipo lista

Lista *criarLista(); //Iniciando a criação da lista

//Funçãoes de ordenação dos vetores da lista
void inserirOrdenadoAluno (Lista *li, Aluno al); //Vetor Aluno 

void inserirOrdenadoProfessor (Lista *li, Professor prof); //Vetor Professor

void inserirOrdenadoTurma (Lista *li, Turma turma); //Vetor Turma

void inserirOrdenadoCurso (Lista *li, Curso curso); //Vetor Curso

//Funções para imprimir os dados das estrutura individualmente
void imprimirAluno (Lista *li, int mat); //Imprimir um aluno

void imprimirProfessor (Lista *li, int mat); //Imprimir um professir

void imprimirTurma (Lista *li, int cod); //Imprimir uma turma

void imprimirCurso (Lista *li, int cod); //Imprimir um curso

void removerAtributo (Lista *li, int mat, int num); //Função para remover um elemento da estrutura

void imprimirLista (Lista *li, int num); //Imprimir lista completa 

int listaVazia (Lista *li, int num); //Lista vazia

int listaCheia (Lista *li, int num); //Lista cheia

int confirmarMatricula (Lista *li, int num, int mat); //Função para não permitir que haja duas matriculas iguais

//Funções para preencher os campos de dados das estruturas
void preencherAluno (Lista *li, Aluno aluno); //Dados Aluno

void preencherProfessor (Lista *li, Professor prof); //Dados Professor

void preencherTurma (Lista *li, Turma turma); //Dados Turma

void preencherCurso (Lista *li, Curso curso); //Dados Curso
