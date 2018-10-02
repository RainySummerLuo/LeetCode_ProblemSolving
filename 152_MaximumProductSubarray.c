/* 
Given an integer array nums, 
find the contiguous subarray within an array (containing at least one number) which has the largest product.
*/

int maxProduct(int *  nums, int numsSize) {
    if (numsSize <= 0) {
        return 0;
    }
    int ansMax, max, min;
    ansMax = max = min = nums[0];
    for(int i = 1; i < numsSize; i++) {
        int temp = max;
        if (max * nums[i] > min * nums[i]) {
            if (max * nums[i] > nums[i]) {
                max = max * nums[i];
            } else {
                max = nums[i];
            }
        } else {
            if (min * nums[i] > nums[i]) {
                max = min * nums[i];
            } else {
                max = nums[i];
            }
        }
        if (temp * nums[i] < min * nums[i]) {
            if (temp * nums[i] < nums[i]) {
                min = temp * nums[i];
            } else {
                min = nums[i];
            }
        } else {
            if (min * nums[i] < nums[i]) {
                min = min * nums[i];
            } else {
                min = nums[i];
            }
        }
        if (ansMax < max) {
            ansMax = max;
        }
    }
    return ansMax;
}