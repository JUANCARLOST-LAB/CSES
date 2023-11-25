/*Increasing Array Problem*/
/*
    STATEMENT
    You are given an array of n integers. You want to modify the array 
    so that it is increasing, i.e., every element is at least as large 
    as the previous element. On each move, you may increase the value 
    of any element by one. What is the minimum number of moves required?
*/

/*
    SOLUTION
    We will move in the array from left to rigth, if the value we are 
    analyzing is less than the previous one we have to perform some 
    operations to make it equal to. If the previous element has a value of a
    and the value we are processing has a value of b we have to perform
    a - b operations to make b equal to a. If the value is already greater 
    or equal than its previous element, we dont have to make any moves.
*/

#include <bits/stdc++.h>

#define lli long long

using namespace std;

lli moves = 0, item, N;
vector<int> arr;

int main(){
    cin >> N;

    for(int i = 0; i < N; i++){
        cin >> item;
        arr.push_back(item);
    }
    for(int i = 1;i < N; i++){
        if(arr[i]<arr[i-1]){
            moves += arr[i-1] - arr[i];
            arr[i] = arr[i-1];
        }
    }

    cout << moves;
}