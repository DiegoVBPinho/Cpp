/*
Os Stormtroopers são a tropa de base do Império Galáctico, e são montados a partir
dos clones que participaram da derrubada da República.
Embora sejam clones, com o passar do tempo, começam a se diferenciar,
por conta das diferentes missões que participam.
O Império criou então um conjunto de índices para controlar a
eficácia de cada um dos membros desta tropa de elite. Estes indicadores são:

- Índice de Maldade (IM): mede o quão malvada é esta unidade
- Força de Abate (FA): proporcional ao número de inimigos abatidos

Temos uma missão importante para cumprir, então o comandante Darth Vader
ordenou então que você fizesse um programa para cadastrar cada um dos Stormtroopers,
e mostrar aquele mais apto para esta missão. O grau de aptidão (GA) pode ser
calculado como a média aritmética dos dois índices acima.
Sugiro que você faça este programa rápido, e sem erros, senão
você sabe o que vai acontecer...


Entrada:
Para cada Stormtrooper, tem-se uma linha na entrada.
Esta linha consiste da identificação de cada soldado (um número inteiro),
seu IM e seu FA (números reais entre 0 e 1).

A entrada de dados termina quando for digitado um Id igual a zero.

Saída:
Id do Stormtrooper escolhido, e seu grau de aptidão, este com duas casas decimais.

Exemplos de entrada         Exemplos de saída
2134 0.2 0.5                Stormtrooper escolhido: 4432
4432 0.7 0.8                GA = 0.75
6154 0.2 0.9
0
*/

#include <iostream>
#include <iomanip>

using namespace std;

struct Trooper
{
    int ID;
    double IM;
    double FA;
    double GA;
};

int main()
{
    // criando o vetor
    Trooper vetor[100];
    int i = 0;

    cin >> vetor[i].ID;

    while (vetor[i].ID != 0 && i < 100)
    {
        cin >> vetor[i].IM;
        cin >> vetor[i].FA;

        vetor[i].GA = (vetor[i].IM + vetor[i].FA) / 2;

        i++;

        cin >> vetor[i].ID;
    }
    // procurar o stormtrooper escolhido por Vader.
    //   Digite o Stormtrooper
    double maior_ga = 0;
    int id_escolhido = 0;

    for (int j = 0; j < i; j++)
    {
        if (vetor[j].GA > maior_ga)
        {
            maior_ga = vetor[j].GA;
            id_escolhido = vetor[j].ID;
        }
    }
    cout << "Stormtrooper escolhido: " << id_escolhido << endl;
    cout << "GA = " << fixed << setprecision(2) << maior_ga << endl;

    return 0;
}
