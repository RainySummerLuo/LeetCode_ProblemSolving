/* 
You're given strings J representing the types of stones that are jewels, 
and S representing the stones you have.  
Each character in S is a type of stone you have.  
You want to know how many of the stones you have are also jewels.
The letters in J are guaranteed distinct, and all characters in J and S are letters. 
Letters are case sensitive, so "a" is considered a different type of stone from "A".
*/

int maxSubArray(int* nums, int numsSize) {
    int sum = 0;
    int maxSum = nums[0];
    for (int i = 0; i < numsSize; i++) {
        if (sum < 0) {
            sum = 0;
        }
        sum += nums[i];
        if (sum > maxSum) {
            maxSum = sum;
        }
    }
    return maxSum;
}