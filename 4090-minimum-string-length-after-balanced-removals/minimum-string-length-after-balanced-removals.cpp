class Solution {
public:
    int minLengthAfterRemovals(string s) {
        stack<char>s1,s2;
        for(int i=0;i<s.length();i++){
            if(s[i]=='a'){
                s1.push(s[i]);
            }else{
                s2.push(s[i]);
            }
        }
        while(!s1.empty() && !s2.empty()){
            if(s1.top()=='a' && s2.top()=='b'){
                s1.pop();
                s2.pop();
            }
        }
        if(s1.size()>s2.size()){
            return s1.size();
        }else{
            return s2.size();
        }
    }
};