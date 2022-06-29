#include <bits/stdc++.h>
using namespace std;

int dp[105][1 << 12];

int find_touches(int pos, int mask, vector<string> &v)
{
    if (!(mask & (mask - 1)) && mask)
    {
        return 0;
    }

    if (pos == -1 || mask == 0)
    {
        return 1000000;
    }

    if (dp[pos][mask])
    {
        return dp[pos][mask];
    }

    int newmask1 = 0, newmask2 = 0, touches = 0;

    for (int i = 0; i < v.size(); i++)
    {

        if ((mask >> i) & 1)
        {
            touches++;
            if (v[i][pos] == '0')
            {
                newmask1 |= (1 << i);
            }
            else
            {
                newmask2 |= (1 << i);
            }
        }
    }
    return dp[pos][mask] = min(find_touches(pos - 1, newmask1, v) + find_touches(pos - 1, newmask2, v) + touches, find_touches(pos - 1, mask, v));
}

int solve(int n, vector<string> v)
{
    return find_touches(v[0].size() - 1, (1 << n) - 1, v);
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<string> v;
        memset(dp, 0, sizeof(dp));

        for (int i = 0; i < n; i++)
        {
            string s;
            cin >> s;
            v.push_back(s);
        }
        cout << solve(n, v) << endl;
    }
}