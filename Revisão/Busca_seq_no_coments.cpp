/*
Escreva um programa em C++ que:
1 - Peça ao usuário para informar o número de elementos que deseja inserir em um vetor (máximo 100).
2 - Permita que o usuário digite os valores inteiros do vetor.
3 - Solicite ao usuário um valor a ser buscado.
4 - Utilize a busca sequencial para verificar se esse valor está presente no vetor.
5 - Informe a posição do valor, caso encontrado, ou imprima uma mensagem informando que ele não foi encontrado.
*/

#include <iostream>
using namespace std;

int busca_seq(int vetor_fc[], int numero_a_procurar, int tamanho_vet_fc)
{
    for (int i = 0; i < tamanho_vet_fc; i++)
    {
        if (vetor_fc[i] == numero_a_procurar)
            return i;
    }
    return -1;
}

int main()
{
    int tamanho_vetor = 0;
    cout << "Digite o valor para o tamanho do vetor (Max 100): ";
    cin >> tamanho_vetor;

    while (tamanho_vetor <= 0 || tamanho_vetor > 100)
    {
        cout << " Valor invalido! Digite novamente! ";
        cin >> tamanho_vetor;
    }

    int vetor_cd[100];
    int n = 0;
    int i = 0;
    int aux = 0;

    while (i < tamanho_vetor)
    {
        cout << "Digite o valor para a posicao " << i << " (ou -1 para parar): ";
        cin >> aux;

        if (aux == -1)
            break;

        vetor_cd[i] = aux;
        i++;
    }

    n = i;

    for (int j = 0; j < n; j++)
    {
        cout << vetor_cd[j] << " ";
    }
    cout << endl;

    int valor_buscado = 0;
    cout << "Digite o valor procurado: ";
    cin >> valor_buscado;

    int resultado = busca_seq(vetor_cd, valor_buscado, n);

    if (resultado != -1)
        cout << "posicao " << resultado << " do vetor";
    else
        cout << "nao encontrado!";

    return 0;
}
