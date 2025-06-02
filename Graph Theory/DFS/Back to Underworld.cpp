//Problem link: https://lightoj.com/problem/back-to-underworld
#include<bits/stdc++.h>
using namespace std;
#define Rafiq ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

const int mx = 1e5+123;
vector<int>adj[mx];
bool vis[mx];
bool isNode[mx];
int cnt, cnt1;

void dfs(int u, int col) {
    vis[u] = 1;
    if (col==1) cnt1++;
    cnt++;

    int tmp;
    if(col==1) tmp = 2;
    else tmp = 1;

    for(auto v:adj[u]) {
        if(vis[v]==0)
            dfs(v, tmp);
    }
}

int main() {
    Rafiq;
    int t;
    cin >> t;
    int n = t;
    while(t--) {
        for(int i=0; i<mx; i++) {
            adj[i].clear();
            isNode[i] = 0;
            vis[i] = 0;
        }

        int m;
        cin >> m;
        for(int i=1; i<=m; i++) {
            int u, v;
            cin >> u >> v;
            adj[u].pb(v);
            adj[v].pb(u);

            isNode[u] = 1;
            isNode[v] = 1;
        }

        int ans = 0;
        for(int i=1; i<=2e4; i++) {
            if(isNode[i]==1 && vis[i]==0) {
                cnt=0, cnt1=0;
                dfs(i,1);
                ans += max(cnt1,cnt-cnt1);
            }
        }
        cout << "Case " << n-t << ": " << ans << endl;
    }
    return 0;
}
