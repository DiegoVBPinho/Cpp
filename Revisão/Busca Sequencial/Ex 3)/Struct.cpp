#include <iostream>
#include <string>

using namespace std;

struct aluno
{
    int matricula;
    string nome;
};

int main()
{
    aluno alunos[4]; // precisa de um vetor, para armazenar as coisas do struct.

    // como criar alunos?
    for (int i = 0; i < 4; i++)
    {
        cout << "Aluno n# " << i + 1 << endl;
        cout << "Digite o nome do aluno: " << endl;
        getline(cin, alunos[i].nome);
        cout << "Digite a matricula do aluno: ";
        cin >> alunos[i].matricula;
        cin.ignore();
    }

    // imprime os 3 alunos:
    for (int i = 0; i < 4; i++)
    {
        cout << alunos[i].nome << endl;
        cout << alunos[i].matricula << endl;
    }

    return 0;
}