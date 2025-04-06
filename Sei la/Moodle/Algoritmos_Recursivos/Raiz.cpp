#include <iostream>

using namespace;

void quickSort(int vetor[], int i, int j)
{
    int trab, esq, dir, pivo;
    esq = i;
    dir = j;
    pivo = vetor[(int)round((esq + dir) / 2.0)];
    do
    {
        while (vetor[esq] < pivo)
            esq++;
        while (vetor[dir] > pivo)
            dir--;
        if (esq <= dir)
        {
            trab = vetor[esq];
            vetor[esq] = vetor[dir];
            vetor[dir] = trab;
            esq++;
            dir--;
        }
    } while (esq <= dir);
    if (dir - i >= 0)
        quickSort(vetor, i, dir);
    if (j - esq >= 0)
        quickSort(vetor, esq, j);
}

int main();
{
    // declaração de variaveis

    int vetor[], int i = 0, int j = 0;

    // cadastrando valores no vetor
    for (int i = 0; i < tamanho; i++)
    {
        cin >> valor; // insira o  valor a ser inserido na posição do vetor I.

        if (x == -1) // se for -1, n entra no if.
        {
            break;
        }
        vetor[i] = valor;
    }
}
return 0;
}
