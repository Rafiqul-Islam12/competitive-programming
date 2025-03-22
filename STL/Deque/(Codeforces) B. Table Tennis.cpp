//Problem link:- https://codeforces.com/contest/879/problem/B
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

int main() {
    Rafiq;
    ll n,k,p,q,r,x,y,z,i,j,sum=0,ans=0,cnt=0;
    cin >> n >> k;

    vl v(n);
    deque<pair<ll,ll>>d;

    for(i=0; i<n; i++) {
        cin >> v[i];
        d.push_back({v[i],0});
    }
    x = *max_element(all(v));

    if(x<=k)
        cout << x << endl;
    else
    {
        while(!d.empty()) {
            p = d.front().F;
            y = d.front().S;
            d.pop_front();

            q = d.front().F;
            z = d.front().S;
            d.pop_front();

            if(p>q) {
                d.push_front({p,y+1});
                d.push_back({q,z});
                ans = p;
                if(p==x) {
                    break;
                }
                cnt = y+1;
            }

            else {
                d.push_front({q,z+1});
                d.push_back({p,y});
                ans = q;
                if(q==x) {
                    break;
                }
                cnt = z+1;
            }

            if(cnt==k)
                break;
        }
        cout << ans << endl;
    }
    return 0;
}
