/*
Sample Input 1:

5

Sample Output 1:

1
21
321
4321
54321
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

            
                cout<<count;
            count--;
               
            
    
        }
        cout<<endl;
    }
  
}