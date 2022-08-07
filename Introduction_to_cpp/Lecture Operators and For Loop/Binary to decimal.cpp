/*
Given a binary number as an integer N, convert it into decimal and print.
Input format :

An integer N in the Binary Format

Output format :

Corresponding Decimal number (as integer)

Constraints :

0 <= N <= 10^9

Sample Input 1 :

1100

Sample Output 1 :

12

Sample Input 2 :

111

Sample Output 2 :

7
*/

#include<iostream>
using namespace std;

int main() {
	
       int binary;
    cin>>binary;
    int decimal=0;
    int weight=1;
    int rem;
    while(binary!=0){
         rem =binary%10;
        decimal = decimal + rem*weight;
        binary=binary/10;
        weight = weight*2;
        
    }
    
    cout<<decimal;
	
	
}