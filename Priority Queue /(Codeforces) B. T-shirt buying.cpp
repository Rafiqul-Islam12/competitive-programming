//Problem lnk:- https://codeforces.com/contest/799/problem/B
#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef vector<vi> vvi;
typedef vector<vl> vvl;
typedef pair<int,int> pii;
typedef pair<ll, ll> pll;
typedef vector<pii> vii;
typedef vector<pll> vll;
typedef set<ll> sl;
typedef map<ll,ll> ml;

#define pb push_back
#define F first
#define S second
#define mp make_pair
#define endl '\n'
#define all(a) (a).begin(),(a).end()
#define allr(a) (a).rbegin(),(a).rend()
#define srt(v) sort(v.begin(), v.end())
#define rsrt(v) sort(v.rbegin(), v.rend())
#define sz(x) (int)x.size()
#define mx_int_prime 999999937

const int N = 1e5+10;
const double PI = acos(-1);
const double eps = 1e-9;
const int inf = 2000000000;
const ll infLL = 9000000000000000000;
#define MOD 1000000007
#define mem(a,b) memset(a, b, sizeof(a) )
#define gcd(a,b) __gcd(a,b)
#define lcm(a,b) (a*b)/(__gcd(a,b))
#define Rafiq ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction(a) cout.unsetf(ios::floatfield); cout.precision(a); cout.setf(ios::fixed,ios::floatfield);
#define file() freopen("input.txt","r",stdin);freopen("output.txt","w",stdout);

int main()
{
    Rafiq;
    int n,k,q,r,x,y,z,i,j,sum=0,ans=0,cnt=0;
    cin >> n;

    vi p(n),a(n),b(n);
    priority_queue<int, vector<int>, greater<int>> pq[6][6];

    for(i=0; i<n; i++) cin >> p[i];
    for(i=0; i<n; i++) cin >> a[i];
    for(i=0; i<n; i++) cin >> b[i];

    for(i=0; i<n; i++) {
         pq[a[i]][b[i]].push(p[i]);
    }

    int m;
    cin >> m;

    while(m--) {
        int c;
        cin >> c;

        ans = INT_MAX;
        int f,b;

        for(i=1; i<=3; i++) {
            if(!pq[c][i].empty() && pq[c][i].top() < ans) {
                ans = pq[c][i].top();
                f = c;
                b = i;
            }
        }

        for(i=1; i<=3; i++) {
            if(!pq[i][c].empty() && pq[i][c].top() < ans) {
                ans = pq[i][c].top();
                f = i;
                b = c;
            }
        }

        if(ans==INT_MAX)
            cout << -1 << endl;
        else {
            cout << ans << endl;
            pq[f][b].pop();
        }
    }
}
