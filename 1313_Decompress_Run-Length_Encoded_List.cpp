/*
We are given a list nums of integers representing a list compressed with run-length encoding.

Consider each adjacent pair of elements [freq, val] = [nums[2*i], nums[2*i+1]] (with i >= 0).  For each such pair, there are freq elements with value val concatenated in a sublist. Concatenate all the sublists from left to right to generate the decompressed list.

Return the decompressed list.
*/

vector<int> decompressRLElist(vector<int>& nums) {
    vector<int> decompressed;
    int times = 0;
    for (int i = 0; i < nums.size(); ++i) {
        if (i % 2 == 0) {
            times = nums[i];
        } else if (i % 2 != 0) {
            for (int j = 0; j < times; ++j) {
                decompressed.push_back(nums[i]);
            }
        }
    }
    return decompressed;
}