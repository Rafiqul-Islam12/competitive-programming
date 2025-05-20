/*
Description: Find the Fibonacci numbers till 10^18. 
*/
const ll MOD = 1000000007; 
map<ll, ll> F; 
ll f (ll n) { 
    F [0] = F [1] = 1; 
    if (F. count(n)) return F[n]; 
    ll k=n/2; 
    if (n%2==0) 
           return F[n] = (f(k)*f(k) + f(k-1) * f(k-1)) % MOD; 
    else  
          return F[n] = (f(k) * f(k+1) + f(k-1) * f(k)) % MOD; 
} 
ll Fibo (ll n) { 
    return (n==0? 0: f(n-1)); 
}
