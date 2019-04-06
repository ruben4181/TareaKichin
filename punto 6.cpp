/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

unsigned long long factorialRecursivo(int n){
    if(n==0){
        return 1;
    }
    return n*(factorialRecursivo(n-1));
}

int main()
{
    int i=0;
    int n=2;
    while(i<1000){
        cout<<n<<"! = "<<factorialRecursivo(n)<<endl;
        n=n+2;
        i++;
    }

    return 0;
}