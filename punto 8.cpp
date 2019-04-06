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
    int max=2000;
    int pos[5];
    float contador=0;
    int j=0;
    while(i<max){
        if(esPrimo(n)){
            if(j<5 && (n==19 || n==47 || n==643 || n==829 || n==997)){
                pos[j]=i;
                j++;
            }
            contador+=float(n);
            i++;
        }
        n++;
    }
    cout<<"el promedio de los primeros 2000 numeros primos es: "<<contador/float(max)<<endl;
    cout<<"19, 47, 643, 829 y 997 estan en las posiciones "<<pos[0]<<", "<<pos[1]<<", "<<pos[2]<<", "<<pos[3]<<" y "<<pos[4]<<" respectivamente "<<endl;
    return 0;
}