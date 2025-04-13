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

#include <iostream>
using namespace std;

int binaria(int vetor[], int tamanho, int x)
{
    bool achou;            // var aux p/ busca
    int baixo, meio, alto; // var aux
    baixo = 0;
    alto = tamanho - 1;
    achou = false;
    while ((baixo <= alto) && (achou == false))
    {
        meio = (baixo + alto) / 2;
        if (x < vetor[meio])
            alto = meio - 1;
        else if (x > vetor[meio])
            baixo = meio + 1;
        else
            achou = true;
    }
    if (achou)
        return meio;
    else
        return -1;
}

int main()
{