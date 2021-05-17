#include <iostream>
#include <vector>

using namespace std;

int dfs(vector<int> adj[], vector<int> &vis, int s)
{
    cout << s << " ";
    vis[s] = 1;
    for (auto x : adj[s])
    {
        if (!vis[x])
            dfs(adj, vis, x);
    }
}

void dfsconnected(vector<int> adj[], int v)
{
    vector<int> vis(v + 1, 0);
    for (int i = 1; i <= v; i++)
    {
        if (!vis[i])
            dfs(adj, vis, i);
    }
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

    dfsconnected(adj, v);
    cout << endl;

    for (int i = 1; i <= v; i++)
    {
        cout << i << "->";
        for (auto x : adj[i])
            cout << x << " ";
        cout << endl;
    }
}