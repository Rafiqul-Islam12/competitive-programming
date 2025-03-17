//Problem Link:- https://codeforces.com/contest/1353/problem/D
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
        int n,k,p,q,r,x,y,z,i,j,l,len,sum=0,ans=0,cnt=1,mid;
        cin >> n;

        priority_queue<pair<int,int>>pq;
        vector<int>v(n+1,0);

        pq.push({n,-1});
        cnt = 1;
        while(!pq.empty())
        {
            len = pq.top().F;
            l = pq.top().S * -1;
            pq.pop();
            r = len + l - 1;

            if(len%2)
                mid = (l+r)/2;
            else
                mid = (l+r-1)/2;

            v[mid] = cnt;
            cnt++;

            int l1,r1,l2,r2;
            l1 = l, r1 = mid-1;
            l2 = mid+1, r2 = r;

            if(l1<=r1)
                pq.push({r1-l1+1, -l1});
            if(l2<=r2)
                pq.push({r2-l2+1, -l2});
        }
        for(i=1; i<=n; i++)
            cout << v[i] << " ";
        cout << endl;
    }
    return 0;
}
