/*
Sample Input 1:

5

Sample Output 1:

           1
         232
       34543
     4567654
   567898765
*/

#include <iostream>
using namespace std;

int main() {
     int n;
    cin>>n;
    int count;
    for(int i=1;i<=n;i++){
        count=i;
        for(int j=1;j<=n-i;j++){
            cout<<" ";

        }
        for(int j=1;j<=i;j++){
            cout<<count;
            count++;

        }
         count=count-2;
        for(int j=i-1;j>=1;j--){
               
               cout<<count;
               count--;
        }    
     cout<<endl;
    }
    
}