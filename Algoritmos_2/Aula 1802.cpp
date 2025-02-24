//Aula 18/02

#include <iostream>
using  namespace std;

int main ()
{
	int vetor[5];
	int x; // numero a ser procurado
	int i;//cotador
	
	for (i=0; i<5; i++)
	{
	cin>> vetor[i];
	}
	cout<< "Digite o valor de x"<<endl;
	cin >> x;

	for (i=0; i<5; i++)
	{
	if	(vetor[i] == x)
	cout<< "o Valor de x: " << x<< " foi encontrado" <<endl;
	}	
	
	 
	 
}