#include <iostream>

using namespace std;

void imprimirLetras(char c){
	if(c=='a' || c=='A'){
		if(c=='a'){
			cout<<"y, z, "<<c<<", "<<"b, c"<<endl;
		}
		if(c=='A'){
			cout<<"Y, Z, "<<c<<", "<<"B, C"<<endl;
		}
	}
	if(c=='z' || c=='Z'){
		if(c=='z'){
			cout<<"x, y, z, a, b"<<endl;
		}
		if(c=='Z'){
			cout<<"X, Y, Z, A, B"<<endl;
		}
	}
	if(c!='a' && c!='A' && c!='z' && c!='Z'){
		cout<<char(int(c)-2)<<", "<<char(int(c)-1)<<", "<<c<<", "<<char(int(c)+1)<<", "<<char(int(c)+2)<<endl;
	}
}

int main(){
	char c;
	cout<<"Ingrese letra: ";
	cin>>c;
	imprimirLetras(c);
}