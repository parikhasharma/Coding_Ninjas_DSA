/*
Given a decimal number (integer N), convert it into binary and print.
The binary number should be in the form of an integer.

Input format :

Integer N

Output format :

Corresponding Binary number (long)

Constraints :

0 <= N <= 10^5

Sample Input 1 :

12

Sample Output 1 :

1100

Sample Input 2 :

7

Sample Output 2 :

111
*/

#include<iostream>
using namespace std;
typedef long long ll;

int main() {
	   long long decimal;
    cin>>decimal;
    long long binary=0;
    long long weight=1;
    long long rem;
    while(decimal!=0){
         rem =decimal%2;
        binary = binary + rem*weight;
        decimal=decimal/2;
        weight = weight*10;
        
    }
    
    cout<<binary;
	
}