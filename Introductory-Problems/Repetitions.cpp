/*Repetitions Problem*/

/*
    STATEMENT
    You are given a DNA sequence: a string consisting of characters
    A, C, G and T. Your task is to find the longest repetition sequence.
    This is a maximum-length substring containing only one type of character.

    Example: ATTCGGGA Answer: 3
    The longest repetition substring is GGG, of size 3
*/

/*
    SOLUTION
    We will move through the string updating the maximum, we will have a counter
    indicating us the length of the longest repetition ending in that position, we will
    compare each character with its previous and thats how we will update counter
    if it is different we set counter to 1, otherwise we increase counter by 1.
*/

#include <bits/stdc++.h>

#define lli long long
using namespace std;

lli counter = 1, maximum = 1;
//We set maximum to 1 because at least the maximum length is 1, a character itself


int main(){
    string s;
    cin >> s;

    //start at position 1 and compare with previous character
    for(int i = 1; i < s.size(); i++){
        if(s[i] == s[i-1]){
            counter++; // If they are equal increase counter by 1
        }else{
            counter = 1; // If they are different set counter to 1
        }

        // Update maximum
        maximum = max(maximum, counter);
    }

    cout << maximum;
}