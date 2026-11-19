bool isPalindrome(int x) {
    if (x < 0 || (x % 10 == 0 && x != 0)) {
        return false;
    }
    
    int reversedHalf = 0;
    while (x > reversedHalf) {
        reversedHalf = reversedHalf * 10 + x % 10;
        x /= 10;
    }
    
    // When the length is odd, we can remove the middle digit by reversedHalf / 10
    // Example: 121 -> x = 1, reversedHalf = 12 -> 1 == 12 / 10 (1 == 1)
    return x == reversedHalf || x == reversedHalf / 10;
} 
