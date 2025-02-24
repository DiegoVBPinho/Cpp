#include <iostream>
using namespace std;

int main()
{

    // declaração de variáveis

    int n = 0;

    // # 0 # 1 #2 #3
    //	 0	 1	1  2

    // entrada de dados
    cin >> n;

    int vetor[n]; // criei um vetor tamanho N
    vetor[0] = 0; // posição 0 - obrigatória
    vetor[1] = 1; // posição 1 - obrigatória

    for (int i = 2; i < n; i++)
    {
        vetor[i] = vetor[i - 1] + vetor[i - 2];
    }

    for (int j = 0; j < n; j++)
    {
        cout << vetor[j] << endl;
    }

    return 0;
}
