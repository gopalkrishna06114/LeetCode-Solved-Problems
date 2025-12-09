class Solution {
public:
    string truncateSentence(string s, int k) {
        string ans;
        int i=0;
        for(char c:s){
            if(c==' '){
                i++;
                if(i==k) break;
            }
            ans+=c;
        }
        return ans;
    }
};