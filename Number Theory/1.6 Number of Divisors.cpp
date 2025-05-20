/*
Description: Complexity: O(Sqrt(N)) 
*/
int number_of_divisors (int   N) { 
    int total = 1; 
    for (int i = 2; i*i <= N; i++) { 
        if (N % i == 0) { 
            int e = 0; 
            while (N % i == 0) { 
                e++;   N /= i; 
            } 
            total *= e + 1; 
        } 
    } 
    if (N > 1)   total *= 2; 
    return total; 
}

/*
Description:  For multiple test cases. (CSES-Counting Divisors) 
At first, Generating Sieve of Eratosthenes up to 10^6. 
*/
#define all(v) v.begin(),v.end() 
int number_of_divisors (int   n) { 
    int ans = 1; 
    for (int i = 0; i < prime.size(); i++) { 
        int p = prime[i]; 
        if (p * p * p > n)  
            break; 
        int count = 1; 
        while (n % p == 0) { 
            n /= p; count++; 
        } 
        ans *= (count); 
    } 
    if (binary_search(all(prime), n)) ans *= 2; 
    else if (binary_search(all(prime), sqrt(n))) ans *= 3; 
    else if (n > 1) ans *= 4; 
    return ans; 
}
