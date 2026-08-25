class Solution {
public:
    bool cycle=false;
    void dfs(vector<vector<int>>&a,int n,int node,vector<bool>&vis,vector<bool>&pathvis){
        vis[node]=1;
        pathvis[node]=1;
        for(int j=0;j<a[node].size();j++){
            int neigh=a[node][j];
            if(pathvis[neigh]==1) cycle=true;
            if(vis[neigh]==0) dfs(a,n,neigh,vis,pathvis);
        }
        pathvis[node]=0;
        return;
    }
    bool isCyclic(int V, vector<vector<int>>& edges) {
        vector<vector<int>>a(V);
        int i;
        for(i=0;i<edges.size();i++){
            int src=edges[i][0];
            int dest=edges[i][1];
            a[src].push_back(dest);
        }
        vector<bool>vis(V,0);
        vector<bool>pathvis(V,0);
        for(i=0;i<V;i++){
            if(vis[i]==0) dfs(a,V,i,vis,pathvis);
        }
        return cycle;
    }
};