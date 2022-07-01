// C++ program to find GCD of two numbers
#include <iostream>
using namespace std;
// Recursive function to return gcd of a and b in single line
int gcd(int a, int b)
{
	return b == 0 ? a : gcd(b, a % b);
}

int main()
{
	int t;
    cin>>t;
    while(t--){
        int a,b;
        cin>>a>>b;
        cout << gcd(a, b)<<endl;
    }
	return 0;
}
// This code is contributed by Suruchi Kumari