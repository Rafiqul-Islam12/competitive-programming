#include<bits/stdc++.h>
using namespace std;
#define Rafiq ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

const int mx = 1012;
vector<int>adj[mx];
bool vis[mx];

void dfs(int u) {
    vis[u] = 1;
    for(auto v:adj[u]) {
        if(vis[v]==0)
            dfs(v);
    }
}

int main() {
    Rafiq;
    int n,m,k,p,q,r,y,z,i,j,sum=0,ans=0,cnt=0,ok=false;
    cin >> n >> m;

    for(i=0; i<m; i++) {
        int u,v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    dfs(1);
    return 0;
}

