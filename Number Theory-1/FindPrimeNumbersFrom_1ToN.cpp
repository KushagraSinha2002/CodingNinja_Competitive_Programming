// C++ program to find all primes smaller than or equal to n

/*
	Find Prime Numbers From 1 to N

	Given a number N, find number of primes in the range [1,N].
	
	Input Format:
	The only line of input consists of a number N
	
	Output Format:
	Print the number of primes in the range [1,N].
	
	Constraints:
	1 ≤ N ≤ 10^6
	
	Sample Input :
	3 
	
	Sample Output -
	2



								There are 3 Approaches
*/
//----------------------------------------------------------------------------------------------------
/*
								Approach 1
								Time Complexity: O(n^2)
#include <iostream>
using namespace std;

int checkPrime(int n){
    int count=0;
    for(int i=1;i<=n;i++){
        if(n%i == 0){
            if(n%i == 0){
                count+=2;
            }
        }
    }
    if(count == 2){
        return true;
    }
    return false;
}

int main(){
    int n;
    cin>>n;
    int count=0;
    for(int i=1;i<=n;i++){
        if(checkPrime(i)){
            count++;
        }
    }
    cout<<count<<endl;
    return 0;
}
*/
//----------------------------------------------------------------------------------------------------

/*
								Approach 2
								Time Complexity: O(n*root(n))
#include <iostream>
using namespace std;

int checkPrime(int n){
    int count=0;
    for(int i=1;i*i<=n;i++){
        if(n%i == 0){
            if(i*i == n){
                count+=1;
            }else{
                count+=2;
            }
        }
    }
    if(count == 2){
        return true;
    }
    return false;
}

int main(){
    int n;
    cin>>n;
    int count=0;
    for(int i=1;i<=n;i++){
        if(checkPrime(i)){
            count++;
        }
    }
    cout<<count<<endl;
    return 0;
}

*/
//----------------------------------------------------------------------------------------------------

/*
								Approach 3
								Time Complexity: O(n*log(log(n)))
*/
#include <bits/stdc++.h>
using namespace std;

int SieveOfEratosthenes(int n)
{
	// Create a boolean array "prime[0..n]" and initialize
	// all entries it as true. A value in prime[i] will
	// finally be false if i is Not a prime, else true.
	bool prime[n + 1];
	memset(prime, true, sizeof(prime));

	for (int p = 2; p * p <= n; p++) {
		// If prime[p] is not changed, then it is a prime
		if (prime[p] == true) {
			// Update all multiples of p greater than or
			// equal to the square of it numbers which are
			// multiple of p and are less than p^2 are
			// already been marked.
			for (int i = p * p; i <= n; i += p)
				prime[i] = false;
		}
	}

	// Count number of prime numers
    int count=0;
	for (int p = 2; p <= n; p++)
		if(prime[p])
            count++;
    return count;
			
}

// Driver Code
int main()
{
	int n;
    cin>>n;
	cout<<SieveOfEratosthenes(n)<<endl;
	return 0;
}
//----------------------------------------------------------------------------------------------------
