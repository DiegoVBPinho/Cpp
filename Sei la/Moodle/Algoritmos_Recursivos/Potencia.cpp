#include <iostream>
using namespace std;

int potencia(int a, int n)
{
    if (n == 0)
    {
        return 1;
    }
    else
    {
        return a * potencia(a, n - 1);
    }
}

int main()
{
    int a = 0, n = 0;

    cin >> a;
    cin >> n;

    cout << potencia(a, n);

    return 0;
}