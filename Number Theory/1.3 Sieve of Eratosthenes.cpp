/*
Description: Normal sieve for generating all primes numbers up to 1e8. 
*/
const int N = 100000000; 
bool is_prime[N+1]; 
vector<int>prime; 
void sieve ( ) { 
    memset (is_prime, true,sizeof(is_prime)); 
    for (int i = 3; i * i <= N; i += 2) { 
        if (is_prime[i]) { 
            for (int j = 2*i; j <= N; j += i) 
                is_prime[j] = false; 
        } 
    } 
    prime.push_back(2); 
    for (int i = 3; i <= N; i += 2) { 
        if (is_prime[i]) 
            prime.push_back(i); 
    } 
} 
