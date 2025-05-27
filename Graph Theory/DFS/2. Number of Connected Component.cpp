#include<bits/stdc++.h>
using namespace std;
#define Rafiq ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

const int mx = 1012;
vector<int>adj[mx];
bool vis[mx];

void dfs(int u) {
    vis[u] = 1;
    for(auto v : adj[u]) {
        if(vis[v] == 0)
            dfs(v);
    }
}

int ConnectedComponent(int n) {
    int cnt = 0;
    for(i=1; i<=n; i++) {
        if(vis[i])
            continue;
        dfs(i);
        cnt++;
    }
    return cnt;
}

int main() {
    Rafiq;
    int n,m,i,j;
    cin >> n >> m;
    for(i=0; i<m; i++) {
        int u,v;
        cin >> u >> v;
        adj[u].pb(v);
        adj[v].pb(u);
    }

    int CC = ConnectedComponent(n);
    cout << CC << endl;
    return 0;
}
