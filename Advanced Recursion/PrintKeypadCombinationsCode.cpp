#include <iostream>
#include <string>
#include <vector>

using namespace std;

vector<char> keypad[] = 
{
    {},{},
    {'a','b','c'},
    {'d','e','f'},
    {'g','h','i'},
    {'j','k','l'},
    {'m','n','o'},
    {'p','q','r','s'},
    {'t','u','v'},
    {'w','x','y','z'}
};

int reverseNum(int n){
    int num=0;
    while(n>0){
        num = num*10+n%10;
        n /= 10;
    }
    return num;
}

int countDigits(int code){
    int count=0;
    while(code>0){
        code/=10;
        count++;
    }
    return count;
}

void PrintKeypadCombinations(vector<char> keypad[],int input[],string result,int index,int n){
    if(index == n){
        cout << result<<endl;
        return;
    }
	//stores current digit
    int digit = input[index];
    //stores size of char list associated with current digit
    int len = keypad[digit].size();
    
    for(int i=0; i<len; i++){
        PrintKeypadCombinations(keypad,input,result+keypad[digit][i],index+1,n);
    }
}

void printKeypad(int num){
    int code = reverseNum(num);
    //cout<<code<<endl;
    int n = countDigits(code);
    //cout << n<<endl;
    int input[n];
    for(int i=0;i<n;i++){
        input[i] = code%10;
        code/=10;
        //cout<<input[i]<<" ";
    }
    PrintKeypadCombinations(keypad,input,string(""),0,n);
    
}


using namespace std;

int main(){
    int num;
    cin >> num;

    printKeypad(num);

    return 0;
}