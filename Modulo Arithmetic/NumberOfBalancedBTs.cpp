/*

Number Of Balanced BTs

You are given an integer h, find and print the count of all possible balanced binary trees of height h.
This number can be huge, so return the output modulus 10^9 + 7.

Input Format :
The first line of input contains an integer, that denotes the value of the number of test cases. Let us denote it with the symbol T.
Each test case consists of a single integer h, that denotes height of the binary tree, in a separate line.

Output Format :
For each test case, there is a single line of output, which prints the count of all possible balanced binary trees of height h, modulus 10^9 + 7. The output for each test case is printed in a separate line.

Constraints :
1 <= T <= 10
1 <= h <= 20
Time Limit: 1 second

Sample Input 1:
1
2

Sample Output 1:
3    

Sample Input 2:
2
3
4
Sample Output 2:
15
315

*/
#include<bits/stdc++.h>

using namespace std;


int balancedBTs(int h){

	if(h==0 || h==1){
		return 1;
	}

	int m = pow(10,9) + 7;
	int x = balancedBTs(h-1);
	int y = balancedBTs(h-2);

	long res1 = (long)x*x;
	long res2 = (long)x*y*2;

	int ans1 = (int)(res1%m);
	int ans2 = (int)(res2%m);

	int ans = (ans1+ans2)%m;

	return ans;
}

int main(){

	int t,h;
    cin>>t;
    while(t--){
        cin>>h;
        cout << balancedBTs(h) << endl;   
	}
	return 0;
}