/*
Sample Input 1:

5

Sample Output 1:

A
BC
CDE
DEFG
EFGHI
*/

#include<iostream>
using namespace std;


int main(){

       int n;
    cin>>n;
    
    int count=1;

    for(int i=1;i<=n;i++){
          count=i;
        for(int j=1;j<=i;j++){

            char ch='A'+count-1;
                cout<<ch;
            count++;
            
    
        }
        cout<<endl;
    }
}