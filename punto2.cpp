#include <iostream>
#include <math.h>

using namespace std;

bool esPrimo(int n){
	if(n==1 || n==2){
		return true;
	}
	int maximo=sqrt(n);
	for(int i=2; i<=maximo; i++){
		if(n%i==0 and n!=i){
			return false;
		}
	}
	return true;
}

bool esDivisiblePor3(int n){
	if(n%3==0){
		return true;
	}
	return false;
}

int main(){
	float n=0;
	float m=0;
	cout<<"Ingresa el primer valor: "<<endl;
	cin>>n;
	while (!esPrimo((int)n)){
		cout<<"Ups, el valor debe ser primo"<<endl;
		cout<<"Ingresa el primer valor: "<<endl;
		cin>>n;
	}
	cout<<"Primer valor agregado correctamente!"<<endl;
	cout<<"Ingresa el segundo valor: "<<endl;
	cin>>m;
	while(!esDivisiblePor3((int)m)){
		cout<<"Ups, el valor debe ser divisible por 3"<<endl;
		cout<<"Ingresa el segundo valor: "<<endl;
		cin>>m;
	}
	float resultado=n/m;
	cout<<"El resultado de la division es este: "<<resultado<<endl;
}