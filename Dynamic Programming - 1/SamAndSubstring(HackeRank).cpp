/*
Problem Link : https://www.hackerrank.com/challenges/sam-and-substrings/problem
*/

#include <bits/stdc++.h>

using namespace std;

/*
 * Complete the 'substrings' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts STRING n as parameter.
 */

typedef long long ll;

int mod = 1000000007;

int substrings(string n) {
    ll totalSum = n[0]-'0';
    ll lastValue = n[0]-'0';
    
    for(int i=1;i<n.length();i++){
        lastValue = (lastValue*10)%mod + ((n[i]-'0')*(i+1))%mod;
        lastValue = lastValue%mod;
        totalSum = totalSum%mod + lastValue;
        totalSum = totalSum%mod;
    }
    return totalSum%mod;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string n;
    getline(cin, n);

    int result = substrings(n);

    fout << result << "\n";

    fout.close();

    return 0;
}
