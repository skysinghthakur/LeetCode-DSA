class Solution {
public:
    bool isAlphaNum(char c){
        return (c<='Z' && c>='A') || (c<='z' && c>='a') || (c<='9' && c>='0');
    }
    bool isPalindrome(string s) { 
        int i=0,j=s.length()-1;
        while(i<=j){
            if(!isAlphaNum(s[i])) {
                i++;
                continue;
            }
            if(!isAlphaNum(s[j])){
                j--;
                continue;
            }
            if (tolower(s[i]) != tolower(s[j]))
                return false;
            i++;
            j--;
        }
        return true;
    }
};