#include <iostream>
#include <string>
using namespace std;

int busca_seq(string vetor[], string nome_a_buscar, int tamanho)
{
    for (int i = 0; i < tamanho; i++)
    {
        if (vetor[i] == nome_a_buscar)
            return i;
    }
    return -1;
}

int main()
{
    string livros[5] =
        {
            "Dom Casmurro",
            "O Alquimista",
            "Vidas Secas",
            "Iracema",
            "Capitaes da Areia"};
    int tamanho = 5;
    string nome_livro;

    cout << "Digite o nome do Livro a deseja buscar: ";
    getline(cin >> ws, nome_livro); // o 'ws' ignora espaços e quebras de linha antes de pegar o nome

    // precisamos fazer a busca e ver aonde ele se encontra.

    int resultado = busca_seq(livros, nome_livro, tamanho);

    if (resultado == -1)
        cout << "Nao achou";
    else
        cout << "livro achado na posicao: " << resultado;

    return 0;
}
