#define N 5

//Definindo os tipos de dados
typedef struct aluno{ //Definindo o tipo de dado aluno
	char nome[15]; //Estrutura que servir� para ordena��o na lista
	int matricula; //Estrutura que servir� para identifica��o
	float nota1, nota2, nota3;
}Aluno;

typedef struct professor{ //Definindo o tipo de dado professor
	char nome[15]; //Estrutura que servir� para a ordena��o na lista
	int matricula; //Estrutura que servir� para identifica��o
	char disciplina[10];
}Professor;

typedef struct turma{ //Definindo o tipo de dado turma
	char nome[15]; //Estrutura que servir� para a ordena��o na lista
	float periodo;
	int codigo; //Estrutura que servir� para identifica��o
}Turma;

typedef struct curso{ //Definindo o tipo de dado curso
	char nome[15]; //Estrutura que servir� para a ordena��o na lista
	int qtdeAno;
	int codigo; //Estrutura que servir� para identifica��o
}Curso;

typedef struct lista Lista; //Definindo o tipo lista

Lista *criarLista(); //Iniciando a cria��o da lista

//Fun��oes de ordena��o dos vetores da lista
void inserirOrdenadoAluno (Lista *li, Aluno al); //Vetor Aluno 

void inserirOrdenadoProfessor (Lista *li, Professor prof); //Vetor Professor

void inserirOrdenadoTurma (Lista *li, Turma turma); //Vetor Turma

void inserirOrdenadoCurso (Lista *li, Curso curso); //Vetor Curso

//Fun��es para imprimir os dados das estrutura individualmente
void imprimirAluno (Lista *li, int mat); //Imprimir um aluno

void imprimirProfessor (Lista *li, int mat); //Imprimir um professir

void imprimirTurma (Lista *li, int cod); //Imprimir uma turma

void imprimirCurso (Lista *li, int cod); //Imprimir um curso

void removerAtributo (Lista *li, int mat, int num); //Fun��o para remover um elemento da estrutura

void imprimirLista (Lista *li, int num); //Imprimir lista completa 

int listaVazia (Lista *li, int num); //Lista vazia

int listaCheia (Lista *li, int num); //Lista cheia

int confirmarMatricula (Lista *li, int num, int mat); //Fun��o para n�o permitir que haja duas matriculas iguais

//Fun��es para preencher os campos de dados das estruturas
void preencherAluno (Lista *li, Aluno aluno); //Dados Aluno

void preencherProfessor (Lista *li, Professor prof); //Dados Professor

void preencherTurma (Lista *li, Turma turma); //Dados Turma

void preencherCurso (Lista *li, Curso curso); //Dados Curso
