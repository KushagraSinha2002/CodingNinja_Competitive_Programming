#include<bits/stdc++.h>
#include<vector>
using namespace std;

int reverseDigits(int num)
{
    int rev_num = 0;
    while (num > 0) {
        rev_num = rev_num * 10 + num % 10;
        num = num / 10;
    }
    return rev_num;
}

int countDigit(long long n)
{
    if (n/10 == 0)
        return 1;
    return 1 + countDigit(n / 10);
}

void findCombinations(vector<char> keypad[],int input[], string result, int index, int n ){
    if(index==n){
        cout<<result<<" "<<endl;
        return;
    }
    // Stores current digit
    int digit = input[index];
    // Size of the list corresponding to current digit
    int len = keypad[digit].size();
    
    for(int i=0;i<len;i++){
        findCombinations(keypad, input, result+keypad[digit][i], index+1, n );
	}
}

int main(){
    int t;
    cin>>t;
    vector<char> keypad[] =
    {
        {}, {},
        { 'a', 'b', 'c' },
        { 'd', 'e', 'f' },
        { 'g', 'h', 'i' },
        { 'j', 'k', 'l' },
        { 'm', 'n', 'o' },
        { 'p', 'q', 'r', 's'},
        { 't', 'u', 'v' },
        { 'w', 'x', 'y', 'z'}
    };
    while(t--){
        int code;
        cin>> code;
        //reverse code
        code = reverseDigits(code);
        //count number of digits
        int n = countDigit(code);
         //input array
        int input[n];
        for(int i=0;i<n;i++){
            input[i] = code%10;
            code /= 10;
        }
        // Function call to find all combinations
        findCombinations(keypad, input, string(""), 0, n );
	}
    return 0;
}