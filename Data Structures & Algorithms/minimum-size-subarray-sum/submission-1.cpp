// In this problem the sliding window solution is the most appropriate solution we can implement
// you are given an array of positive integers nums and a positive integer target, return the minimal length of a subarray whose sum is greater than or equal to target. If there is no such subarray, return 0 instead.

// A subarray is a contiguous non-empty sequence of elements within an array.

// Example 1:

// Input: target = 10, nums = [2,1,5,1,5,3]

// Output: 3
class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        // So in this solution we have to gradually Scale up the sliding window and so for that we are choosing two pointers left and right And also in We are defining the result Of integer type in which we are storing our length of the Minimum size sub array sum.
        int l=0;
        int sum=0;
        int result=INT_MAX;

        for(int r=0;r<nums.size();r++){
            total+=nums[r];
            while(total>=target){
                res = min(res , r-l+1);
                total -= nums[l];
                l++;
            }
        }

    }
};