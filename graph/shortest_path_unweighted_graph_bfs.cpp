#include <iostream>
#include <queue>
#include <vector>

using namespace std;

void bfs(vector<int> adj[], int v, int s)
{
    vector<int> dist(v + 1, INT_MAX);
    queue<int> q;
    q.push(s);
    dist[s] = 0;
    while (!q.empty())
    {
        int node = q.front();
        q.pop();
        for (auto x : adj[node])
        {
            if (dist[node] + 1 < dist[x])
            {
                dist[x] = dist[node] + 1;
                q.push(x);
            }
        }
    }
    for (int i = 0; i < v; i++)
    {
        cout << dist[i] << " ";
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

    bfs(adj, v, 0);

    cout << endl;

    for (int i = 0; i < v; i++)
    {
        cout << i << "->";
        for (auto x : adj[i])
            cout << x << " ";
        cout << endl;
    }
}