char* addBinary(char* a, char* b) {
int i = strlen(a) - 1;
    int j = strlen(b) - 1;
    int maxLen = (i > j ? i : j) + 2; // Extra space for a potential carry and '\0'
    
    char* result = (char*)malloc((maxLen + 1) * sizeof(char));
    int k = maxLen;
    result[k--] = '\0'; // Null-terminate the string at the end
    
    int carry = 0;
    while (i >= 0 || j >= 0 || carry > 0) {
        int sum = carry;
        
        if (i >= 0) {
            sum += a[i--] - '0'; // Convert char '0'/'1' to int 0/1
        }
        if (j >= 0) {
            sum += b[j--] - '0';
        }
        
        result[k--] = (sum % 2) + '0'; // Store current binary digit as char
        carry = sum / 2;               // Carry is 1 if sum is 2 or 3
    }
    
    // If there was no overflow carry at the very front, shift the pointer forward
    return result + k + 1;
}
