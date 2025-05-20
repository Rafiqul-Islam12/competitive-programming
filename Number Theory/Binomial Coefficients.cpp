/*
Description: Calculate the values (nCr) modulo 10^9+7 for N test cases. 
Where 1 ≤ N ≤ n ≤ r ≤ 10^6 
*/
const ll N = 1000001; 
const ll MOD = 1000000007; 
ll fact[N]; 
void Factorial () { 
    fact [0] = 1; 
    for (ll i = 1; i <= N; i++) 
        fact[i] = (fact[i-1] * i) % MOD; 
} 
ll ModInverse(ll a) { 
    ll b = MOD - 2; 
    ll ans = 1; 
    while (b) { 
        if (b & 1) ans = (ans * a) % MOD; 
        a = (a * a) % MOD; 
        b >>= 1; 
    } 
    return ans; 
} 
ll nCr (ll n, ll r) { 
    ll ans = fact[n]; 
    ll den = (fact[n-r] * fact[r]) % MOD; 
    ans = (ans * ModInverse(den)) % MOD; 
    return ans; 
}
