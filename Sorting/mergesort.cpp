#include <iostream>
using namespace std;

void merge(int arr[], int l, int mid, int h)
{
    int n1 = mid - l + 1;
    int n2 = h - mid;
    int a[n1];
    int b[n2];
    for(int i=0;i<n1;i++)
    {
        a[i] = arr[l+i];
    }
    for(int j=0;j<n2;j++)
    {
        b[j] = arr[mid+1+j];
    }
    int i=0;
    int j=0;
    int k=l;
    while(i < n1 && j < n2)
    {
        if(a[i] < b[j])
        {
            arr[k] = a[i];
            k++;
            i++;
        }
        else
        {
            arr[k] = b[j];
            k++;
            j++;
        }
    }
    while(i < n1)
    {
        arr[k] = a[i];
        k++;
        i++;
    }
    while(j < n2)
    {
        arr[k] = b[j];
        k++;
        j++;
    }
}

void mergeSort(int arr[], int l, int h)
{
    if(l < h)
    {
        int mid = (l + h) / 2;
        mergeSort(arr, l, mid);
        mergeSort(arr, mid+1, h);
        merge(arr, l, mid, h);
    }
}

int main(int argc, char const *argv[])
{
    int n;
    cin >> n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin >> arr[i];
    }
    mergeSort(arr, 0, n-1);
    for(int i=0;i<n;i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}
