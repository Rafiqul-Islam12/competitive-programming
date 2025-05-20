/*
Description: Calculate the values 𝑎^𝑏 modulo 109+7. 
Complexity: O(log(b)) 
*/
const ll MOD = 1000000007; 
ll BinExpo (ll a, ll b) { 
    ll ans = 1; 
    while (b) { 
        if (b & 1) ans = (ans * a) % MOD; 
        a = (a * a) % MOD; 
        b >>= 1; 
    } 
    return ans; 
} 
