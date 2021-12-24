#include <iostream>
using namespace std;

int binarySearch(int a[], int n, int key)
{
    int start = 0, end = n - 1;
    int mid = (start + end) / 2;
    while (start <= end)
    {
        if (a[mid] == key)
            return mid;
        if (a[mid] > key)
            end = mid - 1;
        if (a[mid] < key)
            start = mid + 1;

        mid = (start + end) / 2;
    }
    return -1;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, key;
        cin >> n >> key;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        int index = binarySearch(a, n, key);
        cout << index << "\n";
    }
    return 0;
}