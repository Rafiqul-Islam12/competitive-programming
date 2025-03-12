//Problem link:- https://codeforces.com/problemset/problem/1579/D
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
    int t;
    cin >> t;
    while(t--)
    {
        int n,k,x,y,z,i,j,sum=0,cnt=0;
        cin >> n;

        priority_queue<pair<int,int>> pq;
        vector<pair<int,int>>ans;

        for(i=1; i<=n; i++)
        {
            cin >> x;
            if(x)
                pq.push({x,i});
        }

        while(pq.size()>1)
        {
            auto p = pq.top();
            pq.pop();
            auto q = pq.top();
            pq.pop();
            ans.pb({p.second, q.second});

            if(p.first>1)
                pq.push({p.first-1, p.second});
            if(q.first>1)
                pq.push({q.first-1, q.second});
        }

        cout << ans.size() << endl;
        for(auto i:ans)
        {
            cout << i.first << " " << i.second << endl;
        }
    }
    return 0;
}
