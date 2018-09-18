/* 
Given an array A of non-negative integers, return an array consisting of all the even elements of A, followed by all the odd elements of A.
You may return any answer array that satisfies this condition.
*/

/**
 * Return an array of size *returnSize.
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* sortArrayByParity(int* A, int ASize, int* returnSize) {
    int *ans = (int*)malloc(sizeof(int) * (ASize + 1));
    memset(ans, 0, sizeof(int) * (ASize + 1));
    int even = 0;
    int odd = 1;
    for(int i = 0; i < ASize; i++)
    {
        if (A[i] % 2 == 0) {
            ans[even] = A[i];
            even++;
        } 
        else {
            ans[ASize - odd] = A[i];
            odd++;
        }
    }
    *returnSize = ASize;
    return ans;
}