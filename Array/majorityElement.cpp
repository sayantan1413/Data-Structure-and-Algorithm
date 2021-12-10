#include <iostream>
using namespace std;
int majorityElement(int a[], int n)
{
    int ansIdx = 0;
    int count = 1;
    for (int i = 1; i < n; i++)
    {
        if (a[i] == a[ansIdx])
            count++;
        else
            count--;
        if (count == 0)
        {
            ansIdx = i;
            count = 1;
        }
    }
    int totCount = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] == a[ansIdx])
            totCount++;
    }
    if (totCount > n / 2)
        return a[ansIdx];
    else
        return -1;
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
        int ans = majorityElement(a, n);
        cout << ans << "\n";
    }
    return 0;
}