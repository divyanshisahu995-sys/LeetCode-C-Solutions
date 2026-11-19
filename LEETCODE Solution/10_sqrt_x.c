int mySqrt(int x) {
 if (x == 0 || x == 1) {
        return x;
    }
    
    int left = 1;
    int right = x / 2;
    int ans = 0;
    
    while (left <= right) {
        int mid = left + (right - left) / 2;
        
        // Use division (mid <= x / mid) instead of multiplication (mid * mid <= x)
        // to prevent 32-bit signed integer overflow
        if (mid <= x / mid) {
            ans = mid;       // Store mid as a potential answer
            left = mid + 1;  // Search for a larger integer in the right half
        } else {
            right = mid - 1; // Search in the left half
        }
    }
    
    return ans;
}   