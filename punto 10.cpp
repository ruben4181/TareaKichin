/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <math.h>

using namespace std;

unsigned long long factorialRecursivo(int n){
    if(n==0){
        return 1;
    }
    return n*(factorialRecursivo(n-1));
}

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
    int N=0;
    cout<<"Ingresa el tamaño del vector: ";
    cin>>N;
    int vector[N];
    for(int i=0; i<N; i++){
        cout<<"Ingrese el valor para la posicion "<<i+1<<" del vector: "<<endl;
        cin>>vector[i];
    }
    for(int i=0; i<N; i++){
        if((i+1)%2==0){
            cout<<factorialRecursivo(vector[i]);
        }else{
            if(esPrimo(vector[i])){
                cout<<"es primo";
            }else{
                cout<<"no primo";
            }
        }
        if((i+1)<N){
            cout<<", ";
        }else{
            cout<<endl;
        }
    }
    return 0;
}
