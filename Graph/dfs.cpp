#include <iostream>
#include <vector>
#include <queue>
#include <list>

using namespace std;

class Graph {
    int v;
    list<int> *l;

public:
    Graph(int v) {
        this->v = v;
        l = new list<int>[v];
    }

    void addEdge(int u, int v) {
        l[u].push_back(v);
        l[v].push_back(v); // Since it's an undirected graph
    }

    void dfshelp(int u,vector<bool>&vis){
        vis[u]=true;
        cout<<u<<" ";
        list<int>neighour=l[u];
        for(int i:neighour){
            if(!vis[i]){
                dfshelp(i,vis);
            }
        }
    }

    void dfs(){
        vector<bool>vis(7,false);
        dfshelp(0,vis);
    }


};

int main() {
    Graph g(8);

    // Providing weights for each edge
    g.addEdge(0, 1);
    g.addEdge(0, 2);
    g.addEdge(1, 3);
    g.addEdge(2, 4);
    g.addEdge(3, 4);
    g.addEdge(3, 5);
    g.addEdge(4, 5);
    g.addEdge(5, 6);

    g.dfs();
    
    return 0;
}