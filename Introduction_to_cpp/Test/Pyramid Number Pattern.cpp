/*
Print the following pattern for the given number of rows.
Pattern for N = 4

   1
  212
 32123
4321234

Input format : N (Total no. of rows)

Output format : Pattern in N lines
Sample Input :

5

Sample Output :

        1
      212
    32123
  4321234
543212345

*/

#include<iostream>
using namespace std;

int main(){

  int n;
    cin>>n;
    
  int count=0;
    for(int i=1;i<=n;i++){
        
        count=i;
        
        for(int j=1;j<=n-i;j++){
            cout<<" ";
                
        }
        
        for(int j=1;j<=i;j++){
            cout<<count;
            count--;
                
        }
        
        count=count+2;
             for(int j=1;j<=i-1;j++){
            cout<<count;
            count++;
                
        }
        
        cout<<endl;
        
    }

  
}