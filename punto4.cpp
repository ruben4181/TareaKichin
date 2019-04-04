#include <iostream>

using namespace std;

int main(){
	char c;
	cout<<"Ingresa una letra: ";
	cin>>c;
	if(c=='a'){
		cout<<"z, "<<c<<", "<<char(int(c)+1)<<endl;
	}
	if(c=='A'){
		cout<<"Z, "<<c<<", "<<char(int(c)+1)<<endl;
	}
	if(c!='a' && c!='A'){
		if(c=='z'){
			cout<<char(int(c)-1)<<", "<<c<<", "<<"a"<<endl;
		}
		if(c=='Z'){
			cout<<char(int(c)-1)<<", "<<c<<", "<<"A"<<endl;	
		}
		if(c!='z' && c!='Z'){
			cout<<char(int(c)-1)<<", "<<c<<", "<<char(int(c)+1)<<endl;
		}
	}
	return 0;
}