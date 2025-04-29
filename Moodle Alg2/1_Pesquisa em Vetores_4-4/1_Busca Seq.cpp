/*Faça um programa que leia vários valores inteiros e os armazene em um vetor.
Depois, o programa deve ler um inteiro X e fazer uso da pesquisa sequencial para verificar se X está ou não no vetor. Se X for encontrado no vetor, o programa deve indicar a posição onde o mesmo foi encontrado.

Entrada
A entrada consiste em vários números inteiros, que devem ser inseridos no vetor. O final da entrada é sinalizado pelo número -1, que não deve ser inserido. Considere que não haverá mais do que 100 elementos. Após o número -1, será informado o valor de X.
Saída
Na saída, o programa deve mostrar a posição em que X foi encontrado no vetor, ou uma mensagem dizendo que X não foi encontrado, casoccontrário.

Exemplo de entrada
Exemplo de saída
1 4 2 6 5 4 7 -1 9
9 nao encontrado
2 0 4 7 3 -1 3
3 encontrado na posicao 4
*/

#include <iostream>
using namespace std;

// Fazer uma função que olha dentro do vetor e fala se o numero buscado está lá dentro
int busca_seq(int vetor[], int tamanho, int x)
{
    for (int i = 0; i < tamanho; i++) // andar no vetor
    {
        if (vetor[i] == x) // verifica o valor relacionado ao indice possui o valor buscado.
            return i;      // retorna a posição encontrada
    }
    return -1; // retorna -1, caso não o numero buscado não seja encontrado
}

int main()
{
    // Declaração do vetor
    int vetor[100];
    int tamanho = 0;

    // preenchendo o vetor

    int i = 0;
    int entrada = 0;

    // digite o primeiro valor de entrada:

    cin >> entrada;

    while (entrada != -1 && i < 100) // Se digitar -1 sai do While e se ultrapassar 100 elementos, também.
    {
        vetor[i] = entrada;
        i++;
        cin >> entrada;
    }
    tamanho = i; // tamanho passou a receber o tamanho real do vetor

    // digite o valor buscado
    int x;
    cin >> x;

    int resultado = busca_seq(vetor, tamanho, x); // armazenou o resultado da busca na var Resultado

    if (resultado == -1)                // analisa se a função retornou o valor de I ou -1
        cout << x << " nao encontrado"; // resultado -1
    else
        cout << x << " encontrado na posicao " << resultado; // valor procurado e a posição de I no vetor

    return 0;
}
