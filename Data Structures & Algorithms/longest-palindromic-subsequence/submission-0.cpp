class Solution {
public:
    int longestPalindromeSubseq(string s) {
        string reversedS = s;
        reverse(reveresedS.begin(),reversedS.end());
        return LCS(s, reversedS);
    }
};