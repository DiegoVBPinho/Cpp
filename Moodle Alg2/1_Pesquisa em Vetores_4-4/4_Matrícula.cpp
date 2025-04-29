/*A Robélia, chefe das secretárias do Inatel está querendo organizar o registro acadêmico dos alunos, e pediu para você ajudá-la.
Ela precisa de um sistema de armazene o nome de cada aluno, bem como seu curso e número de matrícula.
Depois ela quer digitar o nome de um aluno, e o sistema deve retornar o curso e o nome de matrícula deste aluno.

Será que você consegue ajudá-la?

Entrada
A entrada consiste de várias linhas:
- a primeira irá conter um único número inteiro N (1<=N<=10000), que indica a quantidade de alunos;

- Para cada aluno, será digitadas três linhas:
- a primeira irá conter o nome do aluno;
- segunda, o seu curso;
- a terceira, seu número de matrícula.

A última entrada será o nome do aluno a ser consultado.

Saída

Na saída, o programa deve mostrar o nome do aluno, seu número de matrícula e curso do aluno. Se o aluno não for encontrado, seu programa deve mostrar a mensagem "Aluno nao encontrado".

DICA: armazene os dados de cada aluno em um vetor de structs.

Exemplo de entrada:
4
Jose Carlos
Biomedica
335
Maria Antonia
Telecom
10347
Marcela Araujo
Software
112
Andre de Souza
Automacao
543
Marcela Araujo

Exemplo de saída:
Marcela Araujo
Software
112
*/

// acredito ser uma busca sequencial por char. comparando nomes até achar o aluno e depois, retornar seus devidos valores

#include <iostream>
#include <string>

using namespace std;

struct Aluno
{
    string nome;
    string curso;
    int matricula;
};

int main()
{
    int n; // quantidade de alunos

    cin >> n;
    cin.ignore();

    Aluno vetor[n];

    // cadastrar valores no vetor
    for (int i = 0; i < n; i++)
    {
        cout << "aluno n: " << i << endl;
        getline(cin, vetor[i].nome);
        getline(cin, vetor[i].curso);
        cin >> vetor[i].matricula;
        cin.ignore();
    }

    // variavel para verificar um nome especifíco dentro do vetor.
    string nome_procurado;
    getline(cin, nome_procurado);

    cout << endl;

    bool achou = false; // var para sair do if, caso encontre.
    int aux;            // usada para verificar a posição real do aluno e usada pra imprimir

    // busca no vetor e retorna a posição dentro do vetor
    for (int i = 0; i < n; i++)
    {
        if (nome_procurado == vetor[i].nome)
        {
            aux = i; // armazenou qual posição de I
            achou = true;
            break;
        }
    }

    // imprime o resultado, com as posições corretas do vetor de Struct

    if (achou == false)
        cout << "Aluno nao localizado" << endl;
    else
    {
        cout << vetor[aux].nome << endl;
        cout << vetor[aux].curso << endl;
        cout << vetor[aux].matricula << endl;
    }

    return 0;
}
///////////////////////////////////////////////////////////////////////////////////////////////////////////////
/*#include <iostream>
#include <string>

using namespace std;

struct Aluno
{
    string nome;
    string curso;
    int matricula;
};

int main()
{

    int N = 0;
    cin >> N;        // ler o valor da entrada do N
    Aluno alunos[N]; // N Alunos dentro do Vetor de Alunos.
    int armazena_i = 0;

    // ler os dados dos alunos dentro do vetor.

    for (int i = 0; i < N; i++)
    {
        getline(cin >> ws, alunos[i].nome);
        getline(cin >> ws, alunos[i].curso);
        cin >> alunos[i].matricula;
    }

    string nome_pesquisa;
    getline(cin >> ws, nome_pesquisa);

    bool achou = false;
    for (int i = 0; i < N && achou == false; i++)
    {
        if (alunos[i].nome == nome_pesquisa)
        {
            achou = true;
            armazena_i = i;
        }
    }

    if (achou == false)
    {
        cout << "Aluno nao localizado";
    }
    else
    {
        cout << alunos[armazena_i].nome << endl;
        cout << alunos[armazena_i].curso << endl;
        cout << alunos[armazena_i].matricula << endl;
    }

    return 0;
}*/