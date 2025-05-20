/*
Description: Calculate the values 𝑎^−1 modulo 10^9+7. 
*/
ll ModInverse(ll a) { 
    ll b = MOD – 2; 
    ll ans = 1; 
    while (b) { 
        if (b & 1) ans = (ans * a) % MOD; 
        a = (a * a) % MOD; 
        b >>= 1; 
    } 
    return ans; 
}
