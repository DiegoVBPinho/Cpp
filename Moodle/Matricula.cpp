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
}