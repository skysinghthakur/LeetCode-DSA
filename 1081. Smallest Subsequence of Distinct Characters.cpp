class Solution {
public:
    string smallestSubsequence(string s) {
        stack<char> st;
        int last_index[26] = {0};
        bool pushed[26] = {0};
        for(int i=0;i<s.size();i++){
            last_index[s[i]-'a'] = i;
        }
        for(int i=0;i<s.size();i++){
            if(pushed[s[i]-'a']){
                continue;
            }
            while(!st.empty() && st.top() > s[i] && i < last_index[st.top()-'a']) {
                pushed[st.top()-'a'] = 0;
                st.pop();
            }
            st.push(s[i]);
            pushed[s[i]-'a'] = 1;
        }
        s = "";
        while(!st.empty()){
            s = st.top() + s;
            st.pop();
        }
        return s;
    }
};