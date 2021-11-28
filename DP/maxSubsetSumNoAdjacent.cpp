#include <iostream>
#include <algorithm>
using namespace std;

int maxSubsetSumNoAdjacent(int a[], int n)
{
    if (n == 0)
        return 0;
    if (n == 1)
        return a[0];
    int first = a[0];
    int second = max(a[0], a[1]);
    for (int i = 2; i < n; i++)
    {
        int current = max(second, first + a[i]);
        first = second;
        second = current;
    }
    return second;
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
        int ans = maxSubsetSumNoAdjacent(a, n);
        cout << ans << "\n";
    }
    return 0;
}

// Time Complexity O(N) & Space Complexity O(1)