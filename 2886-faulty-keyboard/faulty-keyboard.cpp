class Solution {
public:
    string finalString(string s) {
        string ans;
        for(int i=0;i<s.length();i++){
            if(s[i]=='i'){
                int j=0,k=ans.length()-1;
                while(j<=k){
                    swap(ans[j],ans[k]);
                    j++;
                    k--;
                }
            }else{
                ans.push_back(s[i]);
            }
        }
        return ans;
    }
};