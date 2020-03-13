/*
Given the array nums, for each nums[i] find out how many numbers in the array are smaller than it. That is, for each nums[i] you have to count the number of valid j's such that j != i and nums[j] < nums[i].

Return the answer in an array.
*/

vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
    vector<int> sorted, result;
    sorted = nums;
    sort(sorted.begin(), sorted.end());
    for (int num : nums) {
        int smallerNum = 0;
        for (int j = 0; j < sorted.size(); ++j) {
            if (num == sorted[j]) {
                smallerNum = j;
                break;
            }
        }
        result.push_back(smallerNum);
    }
    return result;
}