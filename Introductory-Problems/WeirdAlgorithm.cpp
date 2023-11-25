/*Weird Algorithm Problem from Introductory Problems*/
/*
    STATEMENT
    Consider an algorithm that takes as input a positive integer n
    If n is even, the algorithm divides it by two, and if n is odd,
    the algorithm multiplies it by 3 and adds one. The algorithm repeats
    this, until n is one.
    Your task is to simulate the execution of the algorithm.
*/

#include <bits/stdc++.h>

#define lli long long

using namespace std;

lli N;

int main(){
    cin >> N;
    //Repeat process until N is one
    while(N!=1){
        cout << N << " "; //Prints n

        //If n is odd then n -> 3*n + 1
        //If n is even then n -> n/2
        if(N%2==1){
            N = 3*N + 1;
        }else{
            N = N/2;
        }
    }
    cout << 1; //Prints 1 at end.
}