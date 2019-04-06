/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int A[12]={2, 1, 4, 3, 6, 5, 8, 7, 10, 9, 12, 11};
    unsigned long int B[6]; //de este tipo debe ser B para que no se desborde la memoria al querer elevar 12**11 y guardarlo
    int j=0;
    for(int i=0; i<6; i++){
        B[i]=pow(float(A[j]), float(A[j+1]));
        j+=2;
    }
    cout<<"B = "<<"["<<B[0]<<", "<<B[1]<<", "<<B[2]<<", "<<B[3]<<", "<<B[4]<<", "<<B[5]<<"]"<<endl;
    return 0;
}