/*Altere a função bubbleSort, mostrada abaixo para ordenar um vetor de números reais em ordem decrescente.

Depois faça um programa que leia vários números reais e use esta função para ordenar este vetor em ordem decrescente.

Ao final, o programa deve mostrar o vetor ordenado em ordem decrescente.

void bubbleSort(int vetor[], int tamanho)
{
    int i, j; // contadores
    int trab;
    bool troca;
    int limite;
    troca = true;
    limite = tamanho - 1;

    while (troca)
    {
        troca = false;
        for (i = 0; i < limite; i++)
            if (vetor[i] > vetor[i + 1])
            {
                trab = vetor[i];
                vetor[i] = vetor[i + 1];
                vetor[i + 1] = trab;
                j = i;
                troca = true;
            }
        limite = j;
    }
}
Entrada
A entrada consiste de uma única linha com vários números reais. O final da entrada é sinalizado pelo elemento -1, que não deve ser inserido no vetor.
Saída
O programa deve mostrar os elementos do vetor, em ordem decrescente, conforme o exemplo abaixo:


Exemplo de entrada      Exemplo de saída
4.1 1.2 2.7 3.5 -1	    4.1 3.5 2.7 1.2


*/

#include <iostream>
#include <iomanip>
using namespace std;

void bubbleSort(double vetor[], int tamanho)
{
    int i, j; // contadores
    double trab;
    bool troca;
    int limite;

    troca = true;
    limite = tamanho - 1;
    while (troca)
    {
        troca = false;
        for (i = 0; i < limite; i++)
        {
            if (vetor[i] < vetor[i + 1]) // Alterando para descrecente
            {
                trab = vetor[i];
                vetor[i] = vetor[i + 1];
                vetor[i + 1] = trab;
                j = i;
                troca = true;
            }
        }
        limite = j;
    }
}

int main()
{
    // cadastrando vetor
    double vetor[100];
    int i = 0; // contador de index do vetor

    double entrada; // variavel para receber os numeros reais
    cin >> entrada; // leitura dos numeros reais

    while (entrada != -1 && i < 100)
    {
        vetor[i] = entrada;
        i++;
        cin >> entrada;
    }

    // verificando o tamanho real do vetor
    int tamanho = i;

    // chamando a função com alteração realizada, conforme exercicio.
    bubbleSort(vetor, tamanho);

    // imprimindo o vetor na forma solicitada do exercicio.
    for (int j = 0; j < tamanho; j++)
    {
        cout << fixed << setprecision(1) << vetor[j] << " ";
    }

    return 0; // tinha sim, professor que errou.
}

/*
Avaliação
- Nao tem return 0; (-5 pts)
- vetor[tamanho]; ??? (-20 pts) - O erro em questão nao se encontra + neste código

Nota: 75

*/