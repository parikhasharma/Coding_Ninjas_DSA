/*
Print the following pattern for given number of rows.

Input format :

Line 1 : N (Total number of rows)
Sample Input :

   5

Sample Output :

1234554321
1234**4321
123****321
12******21
1********1

*/

#include<iostream>
using namespace std;

int main(){

 int n,temp;
    cin>>n;
    for(int i=0;i<n;i++){
        temp=n-i;
        for(int j=1;j<=n;j++){
            if(j<=temp)
                cout<<j;
            else
                cout<<"*";
        }
        for(int k=n;k>=1;k--){
            if(k<=temp)
                cout<<k;
            else 
                cout<<"*";
        }
        cout<<"\n";
    }
}