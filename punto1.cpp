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

int main(){
	int n=0;
	cout<<"Escriba la longitud de los vectores: "<<endl;
	cin>>n;
	int vector1[n];
	int vector2[n];
	for(int i=0; i<n; i++){
		cout<<"Valor para la posicion "<< i << " del vector 1: ";
		cin>>vector1[i];
	}
	for (int i=0; i<n; i++){
		cout<<"Valor para la posicion "<< i << " del vector 2: ";
		cin>>vector2[i];
	}

	//Multiplicacion de los vectores termino a termino
	//Primero se declara el vector final de la misma longitud que los vectores iniciales

	int vectorFinal[n];
	for(int i=0; i<n; i++){
		vectorFinal[i]=vector1[i]*vector2[i];
		if(esPrimo(vectorFinal[i])){
			//NUNCA VA A ENTRAR AQUI PORQUE SI CADA COMPONENTE DEL VECTOR FINAL ES PRODUCTO DE LA
			//MULTIPLICACION DE DOS NUMEROS EL RESULTADO SERA UN NUMERO COMPUESTO
			//SOLO ENTRA CUANDO SE MULTIPLICA POR 1 Y EL MISMO O 1 Y UN NUMERO PRIMO
			cout<<"El elemento "<< i <<" del vector final es primo"<<endl;
		}
	}

	//Vector final
	for(int i=0; i<n; i++){
		cout<<vectorFinal[i]<<" ";
	}
	cout<<endl;
}