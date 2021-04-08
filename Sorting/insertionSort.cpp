#include<iostream>
using namespace std;

int32_t main(int argc, char const *argv[])
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin >> a[i];
    }
    
    for(int i=1;i<n;i++)
    {
        int current = a[i];
        int j = i-1;
        while(current < a[j] && j>=0)
        {
            a[j+1] = a[j];
            j--;
        }
        a[j+1] = current;
    }

    for(int i=0;i<n;i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
    return 0;
}
