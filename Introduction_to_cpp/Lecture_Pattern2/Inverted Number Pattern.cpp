/*
Sample Input 1:

5

Sample Output 1:

55555 
4444
333
22
1
*/

#include<iostream>
using namespace std;


int main(){

      int n;
    cin>>n;
    
    for(int i=n;i>=1;i--){
        
        for(int j=1;j<=i;j++){
            cout<<i;

        }
    
        cout<<endl;
    }
        
  
}