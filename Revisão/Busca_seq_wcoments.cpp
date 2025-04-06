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

// criando função para busca sequencial
int busca_seq(int vetor_fc[], int numero_a_procurar, int tamanho_vet_fc) // valores do vetor, numero a procurar nele, tamanho do vetor
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

    /*Peça ao usuário para informar o número de elementos que deseja inserir em um vetor (máximo 100).*/

    int tamanho_vetor = 0;
    cout << "Digite o valor para o tamanho do vetor (Max 100): ";
    cin >> tamanho_vetor;

    // enquanto nao preencher corretamente, ele fica pedindo. OU = se um dos 2 nao atender, é igual a falso, logo, repete.
    while (tamanho_vetor <= 0 || tamanho_vetor > 100)
    {
        cout << " Valor invalido! Digite novamente! ";
        cin >> tamanho_vetor;
    }

    // definindo o vetor para preehcner os valores
    int vetor_cd[100];

    // Permita que o usuário digite os valores inteiros do vetor
    int n;     // numero de elementos digitados pelo usuário. Servirá de parametro para a função.
    int i = 0; // contador que servirá de posições dentro do vetor.
    int aux;   // é aonde armazena o valor que o usuário digitou

    while (aux != -1 && i < tamanho_vetor) // se o usuário digitar -1, ele decide parar de digitar valores dentro do vetor
    {
        cout << "Digite o valor para a posicao " << i << " (ou -1 para parar): ";
        cin >> aux;

        if (aux == -1)
            break;

        vetor_cd[i] = aux;
        i++;
    }

    n = i;

    // imprimindo o vetor:

    for (int j = 0; j < n; j++) // n sao os valores reais que foram digitados
    {
        cout << vetor_cd[j] << " ";
    }
    cout << endl;

    //------------------    // fazendo a busca dentro do vetor --------------------------------

    // Solicitar o numero buscado pelo usuario, dado que a entrada é: 11,22,33,44

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
