/*
Sample Input 1:

3

Sample Output 1:

      1 
    12
  123
*/

#include<iostream>
using namespace std;


int main(){
      int n;
    cin>>n;
    
    for(int i=0;i<=n;i++){
        
        for(int j=1;j<=n-i;j++){
            cout<<" ";

        }
        for(int j=1;j<=i;j++){
            cout<<j;

        }
        cout<<endl;
    }
        
    
  
}