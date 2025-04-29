/*Faça um programa que leia o número de matrícula e as notas de duas provas de um aluno (as notas são reais), e armazene estas informações em uma struct adequada.
Depois o programa deve calcular a média do aluno (uma média ponderada, onde a primeira prova tem peso 2 e a segunda, peso 3), e guardar este resultado na struct também.
Finalmente, o programa deve mostrar os dados na tela.
Entrada
Número de matrícula, nota da primeira prova, nota da segunda prova.

Saída
Os valores digitados e a média final do aluno. As notas e a média devem ser mostradas com 2 casas decimais.


Exemplos de entrada             Exemplos de saída
4223 70.0 71.0
                                Digite o seu numero de matricula:
                                Digite a nota da primeira prova:
                                Digite a nota da segunda prova:
                                Matricula do aluno: 4223
                                Nota da primeira prova: 70.00
                                Nota da segunda prova: 71.00
                                Media: 70.60

*/

#include <iostream>
#include <iomanip>

using namespace std;

struct Aluno
{
    int matricula;
    double nota_1;
    double nota_2;
};

int main()
{
    Aluno vetor[1];

    // entrada de dados
    cin >> vetor[0].matricula;
    cin >> vetor[0].nota_1;
    cin >> vetor[0].nota_2;

    // calculando media

    double media = ((vetor[0].nota_1 * 2) + (vetor[0].nota_2 * 3)) / 5;

    // saida de dados
    cout << "Digite o seu numero de matricula:" << endl;
    cout << "Digite a nota da primeira prova:" << endl;
    cout << "Digite a nota da segunda prova:" << endl;
    cout << "Matricula do Aluno: " << vetor[0].matricula << endl;
    cout << "Nota da primeira prova: " << fixed << setprecision(2) << vetor[0].nota_1 << endl;
    cout << "Nota da segunda prova: " << fixed << setprecision(2) << vetor[0].nota_2 << endl;
    cout << "Media: " << fixed << setprecision(2) << media << endl;

    return 0;
}