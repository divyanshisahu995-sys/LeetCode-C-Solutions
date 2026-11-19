int romanToInt(char* s) {
 int total = 0;
    int prevValue = 0;
    
    // Process the string from right to left
    int len = strlen(s);
    for (int i = len - 1; i >= 0; i--) {
        int currValue = 0;
        switch (s[i]) {
            case 'I': currValue = 1; break;
            case 'V': currValue = 5; break;
            case 'X': currValue = 10; break;
            case 'L': currValue = 50; break;
            case 'C': currValue = 100; break;
            case 'D': currValue = 500; break;
            case 'M': currValue = 1000; break;
        }
        
        // If current value is smaller than the previous one, subtract it (e.g., IV = 5 - 1)
        // Otherwise, add it (e.g., VI = 5 + 1)
        if (currValue < prevValue) {
            total -= currValue;
        } else {
            total += currValue;
        }
        prevValue = currValue;
    }
   return total;
}