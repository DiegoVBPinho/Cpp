#include <iostream>
using namespace std;

int main()
{
    
    //declaração de variáveis

    int n = 0 ;
    
	     
	 //# 0 # 1 #2 #3 # 4 #5
	 //	 0	 1	1  2  3  5	
			    
    //entrada de dados
    cin>>n;
    
    if (n>=2)
   	cout<<"0 1";
    else if (n == 1)
	{
		cout<<"0"; 
	}
			
	int fib_penultimo =  0; 
    int fib_ultimo = 1;
    
	    
    for (int i  = 2; i <= n; i++)
	{				
		int fib = fib_penultimo + fib_ultimo; // i = 2 # 0 + 1 = 1
	//	int fib = fib_penultimo + fib_ultimo; // i = 3 #     1 + 1 = 2
	//	int fib = fib_penultimo + fib_ultimo; // i = 4 #         1 + 2  = 3
	//	int fib = fib_penultimo + fib_ultimo; // i = 5 #             2 + 3  = 5
		
		fib_penultimo = fib_ultimo;
		fib_ultimo = fib;
		
		cout<<" "<< fib;
		
	}
    
    
    return 0;
}


