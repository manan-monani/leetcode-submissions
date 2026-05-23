class Solution {
public:
    bool isPalindrome(string s) {
        int r=s.lenght()-1;

        for(int l=0;l<r;){
            if(isalnum(s[l])) {
                l++;
                continue;

            }
            if(isalnum(s[r])){
                r--;
                continue;
            }
            if(tolower(s[l])!=tolower(s[r])) return false;
                l++;
                r--;
        }
            return true;   
    }
};
