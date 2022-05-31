#include <iostream>
#include<unordered_map>
using namespace std;

int findUnique(int *arr, int n) {
    unordered_map<int, int> m1;

    for (int i = 0; i < n; ++i)
    {
        m1[arr[i]]++;
    }

    for (int i = 0; i < n; ++i)
    {
        if (m1[arr[i]]==1)
        {
            return arr[i];
        }
    }

    return 0;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int size;
        cin >> size;
        int *input = new int[size];

        for (int i = 0; i < size; ++i) {
            cin >> input[i];
        }

        cout << findUnique(input, size) << endl;
    }

    return 0;
}