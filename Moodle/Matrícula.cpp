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

    // ler os dados dos alunos dentro do vetor.

    for (int i = 0; i < N; i++)
    {
        cin >> alunos[i].nome;
        cin >> alunos[i].curso;
        cin >> alunos[i].matricula;
    }

    string nome_pesquisa;
    cin >> nome_pesquisa;

    bool achou = false;
    for (int i = 0; i < N && achou == false; i++)
    {
        if (alunos[i].nome == nome_pesquisa)
        {
            achou = true;
        }
    }
    return 0;
}