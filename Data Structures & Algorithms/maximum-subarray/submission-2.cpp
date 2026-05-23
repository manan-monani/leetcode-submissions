// if in the NQT if any solution is not coming in the mind atleast go for the brute force solution , so that it can definately solve the all the cases , no matter that time complexity is n2 , go for that it can increase the change of the selection , and it is always better to have something than nothing , so always go for the brute force sol first . 

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int maxsum ;
        int sum=0;
        int n = nums.size();

        for (int i=0; i<n ; i++){
            for(int j=0 ; j<i ; j++){
                sum += nums[j];
                maxsum = max (maxsum , sum);
            }
        }
        return maxsum;
    }
};
