#include <iostream>
#include <list>
using namespace std;

class Graph {
    int v;
    list<int> *l;

    public:
        Graph(int v){
            this->v = v;
            l = new list<int> [v];
        }
        void addEdge(int x, int y)
        {
            l[x].push_back(y);
        }
        void print() {
        for(int i=0;i<v;i++)
        {
            cout<<"vertex"<<i<<"->";
            for(auto nbr : l[i])
            {
                cout<<nbr<<",";
            }
            cout<<endl;
        }
    }
};

int main() {
    int v,e;
    cin>>v>>e;
    Graph g(e);
    for(int i=0;i<e;i++)
    {
        int s,d;
        cin>>s>>d;
        g.addEdge(s, d);
    }
    g.print();
    return 0;
}
