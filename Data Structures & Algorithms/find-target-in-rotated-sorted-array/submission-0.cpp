class Solution {
public:
    int search(vector<int>& nums, int target) {
        for(int i=0;i<nums.size()-1;i++){
            if(nums[i]==targert) return i;
        }
    }
    return -1;
};
