#include<iostream>
using namespace std;

/*
Sample Input 1:

5

Sample Output 1:

*
**
***
****
*****
*/

int main(){

        int n;
    cin>>n;

    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){

            
                cout<<"*";
               
            
    
        }
        cout<<endl;
    }
  
}