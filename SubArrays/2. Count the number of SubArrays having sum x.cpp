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
