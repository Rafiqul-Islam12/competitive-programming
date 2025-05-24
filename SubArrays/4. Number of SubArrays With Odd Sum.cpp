/*
Count the number of subarrays with an odd sum.
Complexity: O(n)
*/
int MOD = 1000000007;
int Subarray() {
        int preSum = 0;
        int evenCount = 1;
        int oddCount = 0;
        int cnt = 0;
        for(int i=0; i<arr.size(); i++) {
            preSum += arr[i];
            if(preSum%2==0) {
                cnt = (cnt + oddCount) % MOD;
                evenCount++;
            }
            else {
                cnt = (cnt + evenCount) % MOD;
                oddCount++;
            }
        }
        return cnt;
}
