class Solution {
public:
    bool validPalindrome(string s) {
        if(ispalindrome(s)) return true;

        for(int i=0;i<s.size()-1;i++){
            string newS=s.substring(0,i)+s.substring(i+1);
            if (ispalindrome(newS)) return true;
        }
        return false;
    }

private:
    bool ispalindrome(const string& s){
        int left =0 , right = s.size()-1;
        while (left<right){
            if(s[left]!=s[right]) return false;
        left++;
        right--;
        }
        return false;
    }

};