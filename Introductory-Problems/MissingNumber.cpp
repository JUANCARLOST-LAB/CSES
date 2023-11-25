/*Missing Number Problem*/
/*
    STATEMENT
    You are given all numbers between 1 and n excep one. Your
    task is to find the missing number
*/

/*
    SOLUTION EXPLANATION
    If we sum all the numbers from 1 to n and substract it
    the sum of the numbers we have then we will remain with 
    the missing number
    Example :
    5
    2 3 1 5 (Missing number is 4)
    (1 + 2 + 3 + 4 + 5) - (2 + 3 + 1 + 5) = (15) - (11) = 4

    With Gauss Formula we know 1 + 2 + ... + n = (n+1)*n/2
    and we can easily sum the numbers of the input so we just
    subtract both numbers. 
    Complexity Time: O(n)
*/

#include <bits/stdc++.h>

#define lli long long

using namespace std;

lli total_sum = 0, N, input;

int main(){
    cin >> N; //Read N
    //Read N-1 numbers
    for(int i = 0;i<N-1;i++){
        cin >> input;
        total_sum += input;
    }

    lli missing_number = N*(N+1)/2 - total_sum;
    cout << missing_number ;
}