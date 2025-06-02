#include<bits/stdc++.h>
using namespace std;
#define pb push_back
#define mem(a,b) memset(a, b, sizeof(a) )
#define Rafiq ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

const int mx = 10e4+123;
vector<int>adj[mx];
int level[mx];
int n,m;

void bfs(int s) {
    mem(level,-1);
    level[s] = 0;
    queue<int> q;
    q.push(s);
    while(!q.empty()) {
        int u = q.front();
        q.pop();
        for(auto v:adj[u]) {
            if(level[v]==-1) {
                level[v] = level[u] + 1;
                q.push(v);
            }
        }
    }
}

int main() {
    Rafiq;
    cin >> n >> m;
    for(int i=1; i<=m; i++) {
        int u,v;
        cin >> u >> v;
        adj[u].pb(v);
        adj[v].pb(u);
    }
    bfs(1);
}
