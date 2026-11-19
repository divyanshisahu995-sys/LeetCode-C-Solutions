/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* plusOne(int* digits, int digitsSize, int* returnSize) {
 for (int i = digitsSize - 1; i >= 0; i--) {
        if (digits[i] < 9) {
            digits[i]++;
            *returnSize = digitsSize;
            return digits;
        }
        digits[i] = 0;
    }
    
    // If all digits were 9 (e.g., 999 -> 1000), allocate a new array
    *returnSize = digitsSize + 1;
    int* newDigits = (int*)malloc((*returnSize) * sizeof(int));
    newDigits[0] = 1;
    for (int i = 1; i < *returnSize; i++) {
        newDigits[i] = 0;
    }
    return newDigits;
}