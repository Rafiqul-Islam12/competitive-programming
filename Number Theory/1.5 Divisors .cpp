/*
Description: Complexity: O(Sqrt(N)) 
*/
set<int>st; 
void Divisors (int   N) { 
    for (int i = 1; i*i <= N; i++) { 
        if (N % i == 0) { 
            st.insert(i);    st.insert(N / i); 
        } 
    } 
} 
