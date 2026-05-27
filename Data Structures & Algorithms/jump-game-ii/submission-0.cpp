// for this question we are going to use the greedy approach 

class Solution {
public:
    int jump(vector<int>& nums) {
        int sum = nums.size()-1;

        for(int i = nums.size()-2;i>=0;i--){
            if(i+nums[i] >=  sum) sum = i;
        }
        return (sum == 0);
    }
};
