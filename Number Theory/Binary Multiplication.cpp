/*
Description: Calculate the values a*b modulo 10^9+7. 
Complexity: O(log(b)) 
*/
const ll MOD = 1000000007; 
ll BinMultiply(ll a, ll b) { 
    ll ans = 1; 
    while (b) { 
        if (b & 1) ans = (ans + a) % MOD; 
        a = (a + a) % MOD; 
        b >>= 1; 
    } 
    return ans; 
}
