bool prime (int   N) { 
    if (N < 2) 
        return false; 
    if (N <= 3) 
        return true; 
    if (N % 2 == 0) 
        return false; 
 
    for (int i = 3; i * i <= N; i += 2) { 
        if (N % i == 0) 
            return false; 
    } 
    return true; 
} 
