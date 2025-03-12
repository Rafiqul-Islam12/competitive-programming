//Problem link:- https://codeforces.com/contest/1800/problem/C1
#include<bits/stdc++.h>
#define ll long long int
#define MOD 1000000007
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        ll n,k,p,q,r,x,y,z,i,j=0,sum=0,ans=0,cnt=0;
        cin >> n;
 
        string s;
        vector<ll>v(n);
        map<ll,ll>m;
        set<ll>st;
 
        for(i=0; i<n; i++)
        {
            cin >> v[i];
        }
 
        priority_queue<ll>pq;
 
        for(i=0; i<n; i++)
        {
            if(v[i]==0)
            {
                if(pq.empty())
                    continue;
                else
                {
                    sum += pq.top();
                    pq.pop();
                }
            }
            else
                pq.push(v[i]);
        }
        cout << sum << endl;
    }
    return 0;
}
