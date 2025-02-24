#include <iostream>

int main()
{

    int N = 0;
    // ler o valor de N ANTES de declarar o vetor de tamanho N
    std::cin >> N;
    // declara vetor de tamanho N, aqui entao ja devemos ter lido N
    int vetor[N];

    for (int i = 0; i < N; i++)
    {
        std::cin >> vetor[i];
    }

    int X = 0;

    std::cin >> X;

    // busca linear ////////////////////////////////////////////////////////////

    // se por exemplo vetor[2] eh igual a X, entao
    // i ->    0           1        2         ....      N-1
    // v ->  vetor[0]   vetor[1]  vetor[2]    ....    vetor[N-1]
    // i=0      X==?
    // i=1                X==?
    // i=2                          X==X
    //                               |
    //                              achou!
    /*
    bool achou = false;
    for (int i = 0; i < N; i++)
    {
        // (INDICE) i -> posicao i do vetor
        // (VALOR) vetor[i] -> eh o valor armazenado na posicao i do vetor
        // (VALOR) X -> valor sendo procurado
        if (X == vetor[i])
        {
            achou = true;
            break;
        }
    }
    */
    /////////////////////////////////////////////////////////////////////////////

    // busca binaria ////////////////////////////////////////////////////////////
    //
    //          L                               R
    //   i->    0 ---------------------------- N-1
    //   a cada iteracao, calcula o indice no meio do caminho entre L e R
    //   e ver se o X esta para direita do meio ou para a esquerda.
    //   e atualiza L ou R de acordo com o lado que o X pode estar.

    int L = 0;
    int R = N - 1;

    bool achou = false;
    int indice_de_X_no_vetor = 0;

    // X pode ja ser o valor de uma das pontas
    if (X == vetor[L])
    {
        indice_de_X_no_vetor = L;
        achou = true;
    }
    else if (X == vetor[R])
    {
        indice_de_X_no_vetor = R;
        achou = true;
    }
    // (achou == false) -> enquanto X nao foi encontrado, continua indo pra
    //                     direita ou esquerda de cada divisao do vetor
    // (L+1 < R) -> caso X nao esteja no vetor, chegaremos a situacao em que
    //              L eh vizinho de R (L == R-1), e nao podemos mais dividir
    //              o vetor em dois. Logo X nao esta no vetor e nao adianta
    //              seguir em frente (loop infinito!).
    while (achou == false && L + 1 < R)
    {
        // verificar o valor no meio do caminho entre L e R
        // calcula o INDICE M do meio do caminho
        int M = (L + R) / 2;
        // M eh o indice do meio, logo o valor do meio eh vetor[M]

        // M divide o vetor L-R em dois pedacos (L-M, M-R)

        // verifica se X esta a ESQUERDA de vetor[M]
        if (X < vetor[M])
        {
            // vamos considerar apenas o pedaco esquerdo L-M
            R = M;
        }
        // verifica se X esta a DIREITA de vetor[M]
        else if (X > vetor[M])
        {
            // vamos considerar apenas o pedaco esquerdo M-R
            L = M;
        }
        // se nao esta a esquerda nem a direita, entao X eh igual a vetor[M]
        else
        {
            // a posicao do valor X eh M (vetor[M] == X, logo M eh o indice de X)
            indice_de_X_no_vetor = M;
            achou = true;
        }
    }

    // neste ponto, temos duas situacoes apenas:
    // -> achou eh false, logo nao encontramos X no vetor
    // -> achou eh true, logo indice_de_X_no_vetor tem o valor do indice em que se encontra X no vetor
    if (achou == false)
    {
        std::cout << "Nao localizado" << std::endl;
    }
    else
    {
        std::cout << "Corredor " << indice_de_X_no_vetor << std::endl;
    }

    /////////////////////////////////////////////////////////////////////////////

    return 0;
}