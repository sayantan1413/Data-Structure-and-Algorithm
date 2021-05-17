#include <iostream>
#include <queue>
#include <vector>
#include <utility>

using namespace std;

bool iscycle(vector<int> adj[], int s, vector<int> &vis)
{
    queue<pair<int, int> > q;
    q.push({s, -1});
    vis[s] = 1;
    while (!q.empty())
    {
        int node = q.front().first;
        int parent = q.front().second;
        q.pop();
        {
            for (auto x : adj[node])
            {
                if (!vis[x])
                {
                    vis[x] = true;
                    q.push({x, node});
                }
                else if (parent != x)
                    return true;
            }
        }
    }
    return false;
}

bool cycledetectionbfs(vector<int> adj[], int v)
{
    vector<int> vis(v + 1, 0);
    for (int i = 1; i <= v; i++)
    {
        if (!vis[i])
        {
            if (iscycle(adj, i, vis) == true)
            {
                return true;
                break;
            }
        }
    }
    return false;
}

int main()
{
    int v, e;
    cin >> v >> e;
    vector<int> adj[v + 1];
    for (int i = 0; i < e; i++)
    {
        int s, d;
        cin >> s >> d;
        adj[s].push_back(d);
        adj[d].push_back(s);
    }

    for (int i = 1; i <= v; i++)
    {
        cout << i << "->";
        for (auto x : adj[i])
            cout << x << " ";
        cout << endl;
    }

    if (cycledetectionbfs(adj, v) == true)
        cout << "Yes\n";
    else
        cout << " No\n";
}