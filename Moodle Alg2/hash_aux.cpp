#include <iostream>

using namespace std;

int hash_aux(int k, int m)
{
    int h = k % m;

    if (h < 0)
        h = h + m;
    return h;
}

int main()
{
    int a, b, resultado;

    // fazer a primeira leitura dos dados fora do while
    cin >> a;
    cin >> b;

    while (a != 0 && b != 0)
    {
        // imprime o resultado antes de escrever de novo
        resultado = hash_aux(a, b);
        cout << resultado << endl;

        // coloca o usuário para fazer novamente
        cin >> a;
        cin >> b;
    }

    return 0;
}