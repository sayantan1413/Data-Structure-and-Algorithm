// Leetcode 665
#include <iostream>
using namespace std;

bool checkPossibility(int a[], int n)
{
    int violation = 0;
    for (int i = 1; i < n; i++)
    {
        if (a[i - 1] > a[i])
        {
            if (violation == 1)
                return false;
            violation++;
            if (i < 2 || a[i - 2] <= a[i])
                a[i - 1] = a[i];
            else
                a[i] = a[i - 1];
        }
    }
    return true;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        bool ans = checkPossibility(a, n);
        if (ans)
            cout << "true\n";
        else
            cout << "false\n";
    }
}

// Time Complexity O(N) & Space Complexity O(1)