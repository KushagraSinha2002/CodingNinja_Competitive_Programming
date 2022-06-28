/*
XOR of Natural Numbers

You are given an integer N and asked to find the Xor of first N natural numbers.

Input Format:
The first line of input will contain T(number of test cases), each test case follows as.
The only line of input contains an integer N.

Output Format:
For each test case print the Xor of first N natural number in a new line.

Constraints:
1 <= T <= 10^5
1 <= N <= 10^9

Sample Input:
1 
8

Sample Output:
8
*/

#include<bits/stdc++.h>
using namespace std;

int XORofNaturalNumbers(int n){
    // If n is a multiple of 4
    if (n % 4 == 0)
        return n;

    // If n%4 gives remainder 1
    if (n % 4 == 1)
        return 1;

    // If n%4 gives remainder 2
    if (n % 4 == 2)
        return n + 1;

    // If n%4 gives remainder 3
    return 0;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        cout<<XORofNaturalNumbers(n)<<endl;
    }
    return 0;
}

/* ------------------------------------ Logic -------------------------------------

When we do XOR of numbers, we get 0 as the XOR value just before a multiple of 4.
This keeps repeating before every multiple of 4. 

                    Number Binary-Repr  XOR-from-1-to-n
                    1         1           [0001]
                    2        10           [0011]
                    3        11           [0000]  <----- We get a 0
                    4       100           [0100]  <----- Equals to n
                    5       101           [0001]
                    6       110           [0111]
                    7       111           [0000]  <----- We get 0
                    8      1000           [1000]  <----- Equals to n
                    9      1001           [0001]
                    10     1010           [1011]
                    11     1011           [0000] <------ We get 0
                    12     1100           [1100] <------ Equals to n

  -----------------------------------------------------------------------------------
*/