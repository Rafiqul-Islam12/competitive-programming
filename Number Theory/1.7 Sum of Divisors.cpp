/*
Description: Complexity: O(Sqrt(N)) 
*/
ll SumOfDivisors (ll num) { 
    ll total = 1; 
    for (ll i = 2; i * i <= num; i++) { 
        if (num % i == 0) { 
            ll e = 0; 
            do { 
                e++; 
                num /= i; 
            } while (num % i == 0); 
 
            ll sum = 0, pow = 1; 
            do { 
                sum += pow; 
                pow *= i; 
            } while (e-- > 0); 
            total *= sum; 
        } 
    } 
    if (num > 1) 
        total *= (1 + num); 
    return total; 
} 

/*
Description: Calculate the sum of divisors of 1 to N  
*/
const ll MOD = 1000000007; 
ll sigma (ll x) { 
    return ((x % MOD) * ((x + 1) % MOD) / 2) % MOD; 
} 
ll SumOfDivisors (ll N) { 
    ll sum = 0; 
    for (ll l = 1; l <= N; l++) { 
        ll r = N / (N / l); 
        sum += (N / l) % MOD * (sigma(r) - sigma(l-1) + MOD) % MOD; 
        sum = (sum + MOD) % MOD; 
        l = r; 
    } 
    return sum; 
}
