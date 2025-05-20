/* 
Description: Find the maximum subarray sum. 
Complexity: O(N) 
*/
int KadanesAlgo(int a[ ], int N) { 
    int MaxSum = INT_MIN; 
    int CurrentSum = 0; 
 
    for (int i=0; i<N; i++) { 
        CurrentSum += a[i]; 
        MaxSum = max (MaxSum, CurrentSum); 
        if (CurrentSum < 0) 
            CurrentSum = 0; 
    } 
    return MaxSum; 
}
