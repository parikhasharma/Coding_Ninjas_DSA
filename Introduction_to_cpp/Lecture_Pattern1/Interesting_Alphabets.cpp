/*
Sample Input 1:

8

Sample Output 1:

H
GH
FGH
EFGH
DEFGH
CDEFGH
BCDEFGH
ABCDEFGH
*/

#include<iostream>
using namespace std;


int main() {
    
      int n;
    cin>>n;

    
    for(int i=n;i>=1;i--){
         
        for(int j=i;j<=n;j++){

            
                cout<<((char)(j+64));
            
               
        }
        cout<<endl;
    }
}