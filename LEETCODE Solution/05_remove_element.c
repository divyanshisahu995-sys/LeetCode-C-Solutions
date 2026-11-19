int removeElement(int* nums, int numsSize, int val) {
   int k = 0; // Pointer for the position of valid elements
    
    for (int i = 0; i < numsSize; i++) {
        // If the current element is not equal to val, keep it
        if (nums[i] != val) {
            nums[k] = nums[i];
            k++;
        }
    }
    
    return k;
} 
