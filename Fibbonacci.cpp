#include <iostream>
using namespace std;

int main()
{
    
    //declara��o de vari�veis

    int n = 0 ;
    
	 
	    
	 //# 0 # 1 #2 #3
	 //	 0	 1	1  2	
			    
    //entrada de dados
    cout<<"digite a quantidade de numero que deseja verificar na sequencia: ";
    cin>>n;
    
    int vetor[n];  //criei um vetor tamanho N
	vetor[0] = 0;  //posi��o 0 - obrigat�ria
	vetor[1] = 1;  // posi��o 1 - obrigat�ria 
    
      for(int i = 2; i<n;i++)
        {
        	vetor[i] = vetor[i-1] + vetor[i-2];
        	
        }
    
    	
    	for (int j = 0; j<n;j++)
    		cout<<vetor[j]<<endl;
    
    return 0;
}


