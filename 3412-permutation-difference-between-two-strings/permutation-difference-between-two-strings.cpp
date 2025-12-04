class Solution {
public:
    int findPermutationDifference(string s, string t) {
        map<char,int>mpp1,mpp2;
        for(int i=0;i<s.length();i++){
            mpp1[s[i]]=i;
        }
        for(int i=0;i<t.length();i++){
            mpp2[t[i]]=i;
        }
        int ans=0;
        for(auto it:mpp1){
            for(auto ig:mpp2){
                if(it.first==ig.first){
                    ans+=abs(it.second-ig.second);
                }
            }
        }
        return ans;
    }
};