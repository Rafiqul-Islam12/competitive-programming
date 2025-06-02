//Problem link: https://codeforces.com/contest/277/problem/A
#include<bits/stdc++.h>
using namespace std;
#define pb push_back
#define Rafiq ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

const int mx = 212;
vector<int>adj[mx];
bool vis[mx];
bool isNode[mx];

void dfs(int u) {
    vis[u] = 1;
    for(auto v:adj[u]) {
        if(vis[v]==0)
            dfs(v);
    }
}

int main() {
    Rafiq;
        ll n,m,k,p,q,r,x,y,z,i,j,sum=0,ans=0,cnt=0,ok=false;
        cin >> n >> m;
        for(i=1; i<=n; i++) {
            cin >> k;
            if(k==0)
                cnt++;
            for(j=1; j<=k; j++) {
                int u;
                cin >> u;
                adj[u].pb(m+i);
                adj[m+i].pb(u);

                isNode[u] = 1;
                isNode[m+i] = 1;
            }
        }
        for(i=1; i<=n; i++) {
            if(vis[i] || isNode[i]==0)
                continue;
            dfs(i);
            ans++;
        }
        if(cnt==n)
            cout << n << endl;
        else
            cout << ans+cnt-1 << endl;
    return 0;
}
