/*
Description: For first one, Generating Sieve of Eratosthenes. 
*/
map<int, int>mp;                                 // Complexity: O(log(log(N)) 
void prime_factor (int   N) { 
    int i = 0, pf = prime [0]; 
    while (pf * pf <= N) { 
        while (N % pf == 0) { 
            N /= pf; 
            mp[pf]++; 
        } 
        pf = prime[i++]; 
    } 
    if (N > 1) 
        mp[N]++; 
} 

map<int,int>mp;                                  // Complexity: O(Sqrt(N)) 
void prime_factor (int   N) { 
    for (int i = 2; i * i <= N; i++) { 
        if (N % i == 0) { 
            while (N % i == 0) { 
                N /= i; 
                mp[i]++; 
            } 
        } 
    } 
    if (N > 1) 
        mp[N]++; 
} 
