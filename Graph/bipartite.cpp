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
        l[v].push_back(u); // Since it's an undirected graph
    }

    void printGraph() {
        for (int u = 0; u < v; u++) {
            list<int>neighbors=l[u];
            cout << "Node " << u << " -> ";
            for(int v:neighbors){
                cout<<v<<" ";
            }
            cout << endl;
        }
    }

    bool isBipartite(){
        queue<int>q;
        vector<bool>vis(v,false);
        vector<int>color(v,-1);
        q.push(0);
        vis[0]=true;
        color[0]=0;
        while(!q.empty()){
            int curr=q.front();
            q.pop();
            list<int>neighbors=l[curr];
            for(int v:neighbors){
                if(!vis[v]){
                    vis[v]=true;
                    color[v]=!color[curr];
                    q.push(v);
                    
                }
                else{
                    if(color[v]==color[curr]){
                        return false;
                    }
                }
            }
        }
       return true;
        
    }
};

int main() {
    Graph g(4);
    // undirected bipartite graph
    g.addEdge(0, 1);
    g.addEdge(0, 2);
    g.addEdge(1,3);
    g.addEdge(2, 3);
    
    
    // g.printGraph(); // Fixed function call
    cout<<g.isBipartite();
    
    return 0;
}