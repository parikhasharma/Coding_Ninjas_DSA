/*
Given an integer N, print all the prime numbers that lie in the range 2 to N (both inclusive).
Print the prime numbers in different lines.
Input Format :

Integer N

Output Format :

Prime numbers in different lines

Constraints :

1 <= N <= 100

Sample Input 1:

9

Sample Output 1:

2
3
5
7
*/

#include <iostream>
using namespace std;

int main(){

    int n;
    cin>>n;
    for(int num=2;num<=n;num++){
        int i;
        for(i=2;i<=num;i++){
            if(num%i==0){
                break;
            }
        }

         if(i==num){
                cout<<num<<endl;
            }

        
    }
    return 0;
    
  
}