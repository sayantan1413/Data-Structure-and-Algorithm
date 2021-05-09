#include <iostream>
using namespace std;

void swap(int a[], int i, int j)
{
    int temp = a[i];
    a[i] = a[j];
    a[j] = temp;
}

int partition(int a[], int l, int h)
{
    int pi = a[h];
    int i = l - 1;
    for (int j = l; j < h; j++)
    {
        if (a[j] < pi)
        {
            i++;
            swap(a, i, j);
        }
    }
    swap(a, i + 1, h);
    return i + 1;
}

void quicksort(int a[], int l, int h)
{
    if (l < h)
    {
        int pivot = partition(a, l, h);

        quicksort(a, l, pivot - 1);
        quicksort(a, pivot + 1, h);
    }
}

int main(int argc, char const *argv[])
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    quicksort(a, 0, n - 1);
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    //cout << endl;
    return 0;
}
