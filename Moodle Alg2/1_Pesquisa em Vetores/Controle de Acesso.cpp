/*  - Controle de Acesso

Com o avanço da tecnologia, muitos empresas adotaram o método do cartão magnético para controle de acesso aos seus ambientes.
Você deve construir um programa verifica se uma ID( identificação) tem acesso ao ambiente.
Antes de ser informado a ID, será informado a lista de IDS que possuem acesso ao ambiente.
Obs: A verificação de acesso deve ser rápida. Portanto, use busca binária.

Entrada
A entrada consiste em vários números inteiros, que devem ser inseridos no vetor.
O final da entrada é sinalizado pelo número -1, que não deve ser inserido no vetor.
Considere que não haverá mais do que 20 elementos. Após o número -1, será informado a ID que deseja verificar se tem acesso ou não.


Saída
Na saída, o programa deve mostrar "Possui acesso" caso a ID esteja na lista de IDS autorizadas ou "Nao possui acesso", caso não tenha acesso.

Exemplo de entrada:         Saída:
1 3 5 7 10 13 -1 9          Nao possui acesso
1 3 5 7 10 13 -1 3          Possui acesso
*/

// CONSIDERANDO QUE O VETOR JÁ ESTÁ ORDENADO, NÃO USAREI NENHUMA FUNÇÃO DE ORDENAÇÃO.

#include <iostream>
using namespace std;

int binaria(int vetor[], int tamanho, int x) // um vetor completo, o tamanho dele, um valor a ser procurado.
{
    bool achou;            // var aux p/ busca
    int baixo, meio, alto; // var aux
    baixo = 0;
    alto = tamanho - 1;
    achou = false;
    while ((baixo <= alto) && (achou == false))
    {
        meio = (baixo + alto) / 2;
        if (x < vetor[meio])
            alto = meio - 1;
        else if (x > vetor[meio])
            baixo = meio + 1;
        else
            achou = true;
    }
    if (achou)
        return meio;
    else
        return -1;
}

int main()
{
    // vetor
    int vetor[20];
    int tamanho = 0;

    // parametros de preenchimento do vetor
    int entrada;
    int i = 0;

    // preenchendo o vetor

    cin >> entrada;
    while (entrada != -1 && i < 20)
    {
        vetor[i] = entrada;
        i++;
        cin >> entrada;
    }
    tamanho = i; // Encontra o verdadeiro tamanho do vetor, apos digitado os valores do mesmo.

    int x;
    cin >> x;

    int resultado = binaria(vetor, tamanho, x);

    if (resultado != -1)
        cout
            << "Possui acesso";
    else
        cout << "Nao possui acesso";

    return 0;
}

/*
//----------------------------------------------------------------------------------------------------------------------------------------------
    //busca binaria - PROCURAR O 10

   //    #0  #1  #2  #3  #4  #5
   //    1   3   5   7   10  13
   //    ^       ^           ^
   //    L       M           R            PRIMEIRA ITERAÇÃO
   //                                       M = (L + R) / 2 = 5/2 = 2

   //            ^   ^       ^
   //            L   M       R            SEGUNDA ITERAÇÃO
   //                                      M = (2+5)/2 = 3


   //                ^   ^   ^
   //                L   M   R            TERCEIRA ITERAÇÃO
   //                                      M = (3+5)/2 = 4


   //                ^   ^   ^
   //                L   M   R            QUARTA ITERAÇÃO
   //                                      M = (3+5)/2 = 4 - M == 10 - ACHOU!

     int L = 0;
     int R = tamanho;
     int M = 0;
     bool achou = false;

     if(x == vetor[L] || x == vetor[R])
     achou = true;


     while(achou == false && L+1 < R) // enquanto nao achou, repete
     {
         M = (L + R) / 2; // achar o meio

         //cout<<L<<" "<< M<<" "<< R <<endl;

         if(vetor[M]<x)
         {
             L = M; // vai pra direita
             //cout<< "vai pra direita"<<endl;
         }
         else if (vetor[M]>x)
         {
             R = M; // vai pra esquerda
             //cout<< "vai pra esquerda"<<endl;
         }
         else
         {
            achou = true; // achou o valor procurado
            //cout<<"achou!"<<endl;
         }

     }

    if (achou == false)
    cout<<"Nao possui acesso";
    else
    cout<<"Possui acesso";


 //busca binaria - PROCURAR O 9

   //    #0  #1  #2  #3  #4  #5
   //    1   3   5   7   10  13
   //    ^       ^           ^
   //    L       M           R            PRIMEIRA ITERAÇÃO
   //                                       M = (L + R) / 2 = 5/2 = 2


   //            ^   ^       ^
   //            L   M       R            SEGUNDA ITERAÇÃO
   //                                      M = (2+5)/2 = 3


   //                ^   ^   ^
   //                L   M   R            TERCEIRA ITERAÇÃO
   //                                      M = (3+8)/2 = 4


   //                ^   ^
   //                L   R               QUARTA ITERAÇÃO
   //                M                      M = (3+4)/2 = 3

 return 0;
}*/