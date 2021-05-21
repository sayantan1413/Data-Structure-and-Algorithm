#include <iostream>
#include <algorithm>
using namespace std;

int knapsack(int val[], int wt[], int n, int weight)
{
    if (n == 0 || weight == 0)
        return 0;
    if (wt[n - 1] <= weight)
        return max((val[n - 1] + knapsack(val, wt, n - 1, weight - wt[n - 1])), knapsack(val, wt, n - 1, weight));
    else
        return knapsack(val, wt, n - 1, weight);
}

int main()
{
    int n;
    cin >> n;
    int val[n];
    int wt[n];
    for (int i = 0; i < n; i++)
    {
        cin >> val[i];
    }
    for (int j = 0; j < n; j++)
    {
        cin >> wt[j];
    }
    int weight;
    cin >> weight;
    cout << knapsack(val, wt, n, weight) << endl;
    return 0;
}

//Time Complexity O(2^n)
//Space Complexity O(1)
