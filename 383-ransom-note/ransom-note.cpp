class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        stack<char>s1,s2;
        sort(magazine.begin(),magazine.end());
        reverse(magazine.begin(),magazine.end());
        sort(ransomNote.begin(),ransomNote.end());
        reverse(ransomNote.begin(),ransomNote.end());
        for(int i=0;i<ransomNote.length();i++){
            s1.push(ransomNote[i]);
        }
        for(int i=0;i<magazine.length();i++){
            s2.push(magazine[i]);
        }
        if(s1.size()>s2.size()){
            return false;
        }
        int cnt=0;
        while(!s1.empty() && !s2.empty()){
            if(s1.top()!=s2.top()){
                s2.pop();
            }else{
                cnt++;
                s1.pop();
                s2.pop();
            }
        }
        if(cnt==ransomNote.length()){
            return true;
        }
        return false;
    }
};