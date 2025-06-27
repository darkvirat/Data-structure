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
         // Since it's an directed graph
    }

void calculateindegre(vector<int>&indeg){
    for(int u=0;u<v;u++){
        list<int>neighbors=l[u];
        for(int v:neighbors){
            indeg[v]++;
        }
    }
}
void toposort(){
    vector<int>indeg(v,0);
    calculateindegre(indeg);
    queue<int>q;
    for(int i=0;i<v;i++){
        if(indeg[i]==0){
            q.push(i);
        }
    }
    while(q.size()>0){
        int curr=q.front();
        q.pop();
        cout<<curr<<" ";
        list<int>neighbors=l[curr];
        for(int v:neighbors){
            indeg[v]--;
            if(indeg[v]==0){
                q.push(v);
            }
        }

    }
    cout<<endl;
}


};

int main() {
    Graph g(6);

    // Providing weights for each edge
    g.addEdge(2, 3);
    g.addEdge(3, 1);
    g.addEdge(4, 0);
    g.addEdge(4, 1);
    g.addEdge(5, 0);
    g.addEdge(5, 2);
    g.toposort();

 
    
    return 0;
}