#include <iostream>
#include <queue>
#include <list>
#include <map>

using namespace std;

template <typename T>
class Graph {
    map <T, list<T> > l;

    public:
        
        void addEdge(int x, int y) {
            l[x].push_back(y);
            l[y].push_back(x);
        }

        void bfs (T src)
        {
            map<T, int> visited;
            queue <T> q;

            q.push(src);
            visited[src] = true;

            while(!q.empty())
            {
                T node = q.front();
                q.pop();
                cout<<node<<" ";

                for(auto nbr : l[node])
                {
                    if(!visited[nbr])
                    {
                        q.push(nbr);
                        visited[nbr] = true;
                    }
                }
            }
        }
};

int main() {
    int v,e;
    cin>>v>>e;
    Graph<int> g;
    for(int i=0;i<e;i++)
    {
        int s,d;
        cin>>s>>d;
        g.addEdge(s, d);
    }
    int src;
    cin>>src;
    g.bfs(src);
    return 0;
}
