//Problem link:- https://codeforces.com/contest/580/problem/C
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
/*
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
template <typename T> using ordered_set = tree<T, null_type,
less_equal<T>, rb_tree_tag, tree_order_statistics_node_update>;
*/
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
template < typename F, typename S >
ostream& operator << ( ostream& os, const pair< F, S > & p )
{
    return os << "(" << p.first << ", " << p.second << ")";
}

template < typename T >
ostream &operator << ( ostream & os, const vector< T > &v )
{
    os << "{";
    for(auto it = v.begin(); it != v.end(); ++it)
    {
        if( it != v.begin() ) os << ", ";
        os << *it;
    }
    return os << "}";
}

template < typename T >
ostream &operator << ( ostream & os, const set< T > &v )
{
    os << "[";
    for(auto it = v.begin(); it != v.end(); ++it)
    {
        if( it != v.begin() ) os << ", ";
        os << *it;
    }
    return os << "]";
}

template < typename T >
ostream &operator << ( ostream & os, const multiset< T > &v )
{
    os << "[";
    for(auto it = v.begin(); it != v.end(); ++it)
    {
        if( it != v.begin() ) os << ", ";
        os << *it;
    }
    return os << "]";
}

template < typename F, typename S >
ostream &operator << ( ostream & os, const map< F, S > &v )
{
    os << "[";
    for(auto it = v.begin(); it != v.end(); ++it)
    {
        if( it != v.begin() ) os << ", ";
        os << it -> first << " = " << it -> second ;
    }
    return os << "]";
}

#define dbg(args...) do {cerr << #args << " : "; faltu(args); } while(0)

void faltu ()
{
    cerr << endl;
}

template <typename T>
void faltu( T a[], int n )
{
    for(int i = 0; i < n; ++i) cerr << a[i] << ' ';
    cerr << endl;
}
template <typename T, typename ... hello>
void faltu( T arg, const hello &... rest)
{
    cerr << arg << ' ';
    faltu(rest...);
}


int n, m,ans;
const int mx = 2*10e5+123;
vector<int>adj[mx];
bool vis[mx];
int a[mx];

void dfs(int u, int k) {
    vis[u] = 1;
    int f = 1;  // for finding leaf nodes
    if(k>m)
        return;
    for(auto v:adj[u]) {
        if(vis[v]==0) {
            f = 0;
            dfs(v, k*a[v] + a[v]);
        }
    }
    if(f)
        ans++;
}

int main() {
    Rafiq;
    cin >> n >> m;

    for(int i=1; i<=n; i++) {
        cin >> a[i];
    }

    for(int i=1; i<=n-1; i++) {
        int u,v;
        cin >> u >> v;
        adj[u].pb(v);
        adj[v].pb(u);
    }
    dfs(1, a[1]);
    cout << ans << endl;
    return 0;
}
