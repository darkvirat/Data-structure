#include<iostream>
#include<list>
#include<vector>
using namespace std;
class Graph{
    public:
    int v;
    list<int>*l;

    Graph(int v){
        this->v=v;
        l=new list<int>[v];

    }

    void addEdge(int u,int v){
        l[u].push_back(v);
        l[v].push_back(u);
    }

   void dfshelp(int src,vector<bool>&vis){
    vis[src]=true;
    cout<<src<<" ";
    list<int>neghour=l[src];
    for(int v:neghour){
        if(!vis[v]){
            dfshelp(v,vis);
        }
    }
   }
   void dfs(){
    vector<bool>vis(v,false);
    dfshelp(0,vis);
   }

};
int main(){
Graph b(7);
b.addEdge(0,1);
b.addEdge(0,2);
b.addEdge(2,3);
b.addEdge(1,5);
b.addEdge(3,4);
b.addEdge(5,4);
b.addEdge(4,6);
b.dfs();
    return 0 ;
}