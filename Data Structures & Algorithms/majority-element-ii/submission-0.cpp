Hash Maps - Counting element frequencies in a single pass for O(n) time solutions
Boyer-Moore Voting Algorithm - Understanding how candidate elimination works to find majority elements in O(1) space
Mathematical Reasoning - Recognizing that at most 2 elements can appear more than n/3 times, which constrains the solution space



class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        unordered_map<int, int> count;

        for (int num : nums) {
            count[num]++;

            if (count.size() > 2) {
                unordered_map<int, int> newCount;
                for (auto& entry : count) {
                    if (entry.second > 1) {
                        newCount[entry.first] = entry.second - 1;
                    }
                }
                count = newCount;
            }
        }

        vector<int> res;
        for (auto& entry : count) {
            int frequency = 0;
            for (int num : nums) {
                if (num == entry.first) frequency++;
            }
            if (frequency > nums.size() / 3) {
                res.push_back(entry.first);
            }
        }

        return res;
    }
};