//Problem link: https://lightoj.com/problem/guilty-prince
//6 9
//....#.      . - land
//.....#      # - water
//......      @ - initial position of the prince
//......      Find the number of cells, 
//......      he can reach from the initial position.
//......
//......      Output:- 45
//#@...#
//.#..#.
#include<bits/stdc++.h>
using namespace std;
#define mem(a,b) memset(a, b, sizeof(a))
#define Rafiq ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

const int mx = 23;
char c[mx][mx];
int n, m, cnt;
bool vis[mx][mx];

int dx[] = { -1, +1, 0, 0 };
int dy[] = { 0, 0, -1, +1 };

void dfs(int x, int y) {
    vis[x][y] = 1;
    cnt++;

    for(int i=0; i<4; i++) {
        int x1 = x + dx[i];
        int y1 = y + dy[i];

        if(x1>=1 && x1<=n && y1>=1 && y1<=m && c[x1][y1]=='.' && vis[x1][y1]==0){
            dfs(x1, y1);
        }
    }
}

int main() {
    Rafiq;
    int t;
    cin >> t;
    for(int tc=1; tc<=t; tc++) {
        cin >> n >> m;
        swap(n,m);
        int x,y;

        for(int i=1; i<=n; i++) {
            for(int j=1; j<=m; j++) {
                cin >> c[i][j];
                if(c[i][j]=='@') {
                    x = i;
                    y = j;
                }
            }
        }
        mem(vis, 0);
        cnt = 0;
        dfs(x,y);
        cout << "Case " << tc << ": " << cnt << endl;
    }
    return 0;
}
