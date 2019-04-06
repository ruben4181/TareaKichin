/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <math.h>|

using namespace std;

int esPrimo(int n){
	if(n==1 || n==2){
		return 1;
	}
	int maximo=sqrt(n);
	for(int i=2; i<=maximo; i++){
		if(n%i==0 and n!=i){
			return 0;
		}
	}
	return 1;
}

int main()
{
    int i=0;
    int n=2;
    int max=1000;
    int contador=0;
    while(i<max){
        if(esPrimo(n)){
            contador+=n;
            i++;
        }
        n++;
    }
    cout<<"La suma de los primeros " << max << " numeros primos es "<< contador<<endl;
    return 0;
}