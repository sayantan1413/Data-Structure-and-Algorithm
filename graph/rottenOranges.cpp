#include <iostream>
#include <vector>
#include <queue>
#include <utility>
using namespace std;

int rottenOrange(int grid[20][20], int n, int m)
{
    int tot = 0, count = 0, days = 0;
    queue<pair<int, int> > rotten;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (grid[i][j] != 0)
                tot++;
            if (grid[i][j] == 2)
                rotten.push({i, j});
        }
    }

    int dx[4] = {1, -1, 0, 0};
    int dy[4] = {0, 0, -1, 1};

    while (!rotten.empty())
    {
        int k = rotten.size();
        count += k;
        while (k--)
        {
            int x = rotten.front().first, y = rotten.front().second;
            rotten.pop();
            for (int i = 0; i < 4; i++)
            {
                int nx = x + dx[i], ny = y + dy[i];
                if (nx < 0 || ny < 0 || nx >= n || ny >= m || grid[nx][ny] != 1)
                    continue;
                grid[nx][ny] = 2;
                rotten.push({nx, ny});
            }
        }
        if (!rotten.empty())
            days++;
    }
    return tot == count ? days : -1;
}

int main()
{
    int n, m;
    cin >> n >> m;
    int grid[20][20];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> grid[i][j];
        }
    }

    int days = rottenOrange(grid, n, m);
    cout << days << endl;
    return 0;
}