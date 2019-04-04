#include <iostream>

using namespace std;

bool esVocal(char c){
	if(c=='a' || c=='e' || c=='i' || c=='o' || c=='u'
		|| c=='A' || c=='E' || c=='I' || c=='O' || c=='U'){
		return true;
	}
	return false;
}

int main(){
	int n=0;
	cout<<"Cuantas vocales desea ingresar: "<<endl;
	cin>>n;
	char vocales[n];
	for(int i=0; i<n; i++){
		cout<<"Ingrese un valor: "<<endl;
		cin>>vocales[i];
		while(!esVocal(vocales[i])){
			cout<<"El caracter debe ser una vocal"<<endl;
			cout<<"Ingrese un valor: "<<endl;
			cin>>vocales[i];
		}
	}
	cout<<"Ingresaste: ";
	for(int i=0; i<n; i++){
		cout<<vocales[i]<<" ";
	}
}