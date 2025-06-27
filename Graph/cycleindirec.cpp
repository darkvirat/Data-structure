#include<iostream>
#include<vector>
#include<list>
using namespace std ;
class Graph{
    int v;
    list<int>*l;
    bool isundir;
    public:
    Graph(int v,bool isundir=true){
        this->v=v;
        this->isundir=isundir;
        l=new list<int>[v];
    }

    void addEdge(int u ,int v){
        l[u].push_back(v);
        if(isundir){
            l[v].push_back(u);
        }
    }

    bool dircyclehelp(int src,vector<bool>&vis,vector<bool>&recpath){
        vis[src]=true;
        recpath[src]=true;
        list<int>neghbour=l[src];
        for(int v:neghbour){
            if(!vis[v]){
                if(dircyclehelp(v,vis,recpath)){
                    return true;
                }
            }else {
                if(recpath[v]) return true;
            }
        }
        recpath[src]=false;
        return false;
    }

    bool iscycle(){
        vector<bool>vis(v,false);
        vector<bool>recpath(v,false);
        for(int i=0;i<v;i++){
            if(!vis[i]){
                if(dircyclehelp(i,vis,recpath)) return true;
            }
        }
        return false;
    }
};
int main(){
Graph b(4,false);
b.addEdge(1,0);
b.addEdge(0,2);
b.addEdge(2,3);
b.addEdge(3,0);

cout<<b.iscycle();


    
    return 0 ;
}