/*
Faça uma função que ordene um vetor em ordem decrescente usando o algoritmo de ordenação Insertion Sort.

Entrada
A entrada consiste em vários números inteiros, que devem ser inseridos no vetor.
O final da entrada é sinalizado pelo número 0, que não deve ser inserido no vetor.

Saída
Na saída, o programa deve mostrar como ficou o vetor em ordem decrescente.
Não há espaço em branco após o último elemento.

Exemplo de entrada:
7 4 1 2 9 11 0
2 15 4 7 3 0

Exemplo de saída:
11 9 7 4 2 1
15 7 4 3 2

*/

#include <iostream>
using namespace std;

void insercaoDireta(int vetor[], int tamanho)
{
    int i, j; // contadores
    int chave;
    for (j = 1; j < tamanho; j++)
    {
        chave = vetor[j];
        i = j - 1;
        while ((i >= 0) && (vetor[i] > chave))
        {
            vetor[i + 1] = vetor[i];
            i = i - 1;
        }
        vetor[i + 1] = chave;
    }
}

int main()
{

    return 0;
}