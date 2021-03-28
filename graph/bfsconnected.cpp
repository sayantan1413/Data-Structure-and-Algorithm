#include <iostream>
#include <list>
#include <queue>
using namespace std;

class Graph {
	int V;
	list<int> *adj;
	public :
		Graph(int V)
		{
			this->V=V;
			adj = new list<int>[V];
		}
		void addEdge (int x, int y)
		{
			adj[x].push_back(y);
			adj[y].push_back(x);
		}
		void bfs(int s, bool visited[])
		{
			queue<int> q;
			q.push(s);
			visited[s] = true;
			while(!q.empty())
			{
				int node = q.front();
				q.pop();
				cout << node <<" ";
				for(auto i : adj[node])
				{
					if(!visited[i])
					{
						visited[i] = true;
						q.push(i);
					}
				}
			}
		}
		void bfsdin()
		{
			bool visited[V+1];
			for(int i=0;i<V;i++)
				visited[i] = false;
			for(int i=0;i<V;i++)
				{
					if(visited[i] == false)
						{
							bfs(i, visited);
						}
				}
		}
};

int main() 
{
	int v,e;
	cin >> v >> e;
	Graph g(e);
	for(int i=0;i<e;i++)
	{
		int s,d;
		cin >> s >> d;
		g.addEdge(s, d);
	}
	g.bfsdin();
	return 0;
}
