/*

Magic Grid Problem

You are given a magrid S ( a magic grid ) having R rows and C columns. Each cell in this magrid has either a Hungarian horntail dragon that our intrepid hero has to defeat, or a flask of magic potion that his teacher Snape has left for him. A dragon at a cell (i,j) takes away |S[i][j]| strength points from him, and a potion at a cell (i,j) increases Harry's strength by S[i][j]. If his strength drops to 0 or less at any point during his journey, Harry dies, and no magical stone can revive him.
Harry starts from the top-left corner cell (1,1) and the Sorcerer's Stone is in the bottom-right corner cell (R,C). From a cell (i,j), Harry can only move either one cell down or right i.e., to cell (i+1,j) or cell (i,j+1) and he can not move outside the magrid. Harry has used magic before starting his journey to determine which cell contains what, but lacks the basic simple mathematical skill to determine what minimum strength he needs to start with to collect the Sorcerer's Stone. Please help him once again.

Input Format :
The first line contains the number of test cases T. T cases follow. Each test case consists of R C in the first line followed by the description of the grid in R lines, each containing C integers. Rows are numbered 1 to R from top to bottom and columns are numbered 1 to C from left to right. Cells with S[i][j] < 0 contain dragons, others contain magic potions.

Output Format :
Output T lines, one for each case containing the minimum strength Harry should start with from the cell (1,1) to have a positive strength through out his journey to the cell (R,C).

Constraints:
1 ≤ T ≤ 5

2 ≤ R, C ≤ 500

-10^3 ≤ S[i][j] ≤ 10^3

S[1][1] = S[R][C] = 0

Sample Input
3
2 3
0 1 -3
1 -2 0
2 2
0 1
2 0
3 4
0 -2 -3 1
-1 4 0 -2
1 -2 -3 0

Sample Output
2
1
2

*/

// Iterative Approach

#include <bits/stdc++.h> 

using namespace std; 

int solve(vector<vector<int>> &mat, int n, int m) { 
    vector<vector<int>> hp(n + 1, vector<int>(m + 1, INT_MAX)); 
    hp[n][m - 1] = 1; 
    hp[n - 1][m] = 1; 
    for (int i = n - 1; i >= 0; i--) { 
        for (int j = m - 1; j >= 0; j--) { 
            int need = min(hp[i + 1][j], hp[i][j + 1]) - mat[i][j];
            hp[i][j] = need <= 0 ? 1 : need; 
        }
    }
    return hp[0][0]; 
} 

int main(){
    int t; 
    cin >> t; 
    while (t--) {
        int n, m; 
        cin >> n >> m; 
        vector<vector<int>> mat(n, vector<int>(m)); 
        for (int i = 0; i < n; i++) 
            for (int j = 0; j < m; j++) 
                cin >> mat[i][j]; 

        cout << solve(mat, n, m) << endl; 
    } 
}