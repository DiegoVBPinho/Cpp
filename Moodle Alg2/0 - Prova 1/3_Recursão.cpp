/*
Considere a função Comb(n,k), que representa o número de grupos distintos com k pessoas que podem ser formados a partir de n pessoas.


Por exemplo, Comb(4,3) = 4, pois com 4 pessoas (A, B, C, D), é possível formar 4 diferentes grupos: ABC, ABD, ACD e BCD.

Podemos calcular a combinação de n elementos k a k por:

comb(n,k)=⎧⎩⎨n,1,comb(n−1,k−1)+comb(n−1,k),k=1k=ncaso contrario


Implemente uma função recursiva para calcular Comb(n, k).

Entrada
A entrada consiste de dois inteiros, que correspondem aos valores de  n
 e k
, respectivamente.
Saída
O programa deve mostrar o valor de comb(n,k), conforme os exemplos abaixo:

Exemplo de entrada   Exemplo de saída
5 3                     10
4 3                     4


*/

#include <iostream>
using namespace std;

int comb(int n, int k)
{
    if (k == 1)
        return n;
    if (k == n)
        return 1;
    return (comb(n - 1, k - 1) + comb(n - 1, k));
}

int main()
{
    int n; // var de parametro de entrada a ser usada na função
    int k; // var de parametro de entrada a ser usada na função

    cin >> n; // leitura de dados de n
    cin >> k; // leitura de dados de k

    int resultado = 0; // variavel resultado para armazenar o resultado da funcao

    // chamando a função
    resultado = comb(n, k);

    cout << resultado << endl;

    return 0; // Professor reclamou que haviam muitas linhas em branco antes do return 0; já corrigido aqui.
}

/*
Avaliação
- Indentação errada (-5 pts): O código apresenta excesso de linhas em branco desnecessárias, que não são consistentes com a prática padrão de
estilo de código. Embora as partes críticas, como as condições e funções, estejam bem indentadas, as linhas vazias demais impactam a legibilidade
e clareza do código. É importante manter um equilíbrio para facilitar a leitura sem excessos.

Nota: 95

*/