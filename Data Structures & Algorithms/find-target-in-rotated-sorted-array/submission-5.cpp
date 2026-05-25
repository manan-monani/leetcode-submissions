class Solution {
public:
    int search(vector<int>& nums, int target) {
        for (int& num : nums) {
            if (num == target) {
                return num;
            }
        }
        return -1;
    }
};