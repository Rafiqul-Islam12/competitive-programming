/*
Description: Count the number of subarrays having sum x. 
*/
ll N, x, sum, cnt, a; 
map<ll, ll> freq; 
ll SubArray () { 
    cin >> N >> x; 
    freq[0] = 1; 
    for (ll i = 1; i <= N; i++) { 
        cin >> a; 
        sum += a; 
        cnt += freq[sum-x]; 
        freq[sum]++; 
    } 
    return cnt; 
} 

/*
Description: Count the number of subarrays where the sum of values is 
divisible by x. 
*/
ll N, x, pre, cnt, a; 
map<ll, ll> freq; 
ll SubArray () { 
    cin >> N >> x; 
    freq[0] = 1; 
    for (ll i = 1; i <= N; i++) { 
        cin >> a; 
        pre = ((pre+a) % x + x) % x; 
        cnt += freq[pre]; 
        freq[pre]++; 
    } 
    return cnt; 
} 
