class Solution {
public:
    string reverseWords(string s) {
        stack<char>st;
        string ans;
        for(int i=0;i<s.length();i++){
            if(s[i]==' '){
                while(!st.empty()){
                    ans.push_back(st.top());
                    st.pop();
                }
                ans.push_back(' ');
            }else{
                st.push(s[i]);
            }
        }
        while(!st.empty()){
            ans.push_back(st.top());
            st.pop();
        }
        return ans;
    }
};