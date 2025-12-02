class Solution {
public:
    int maxDistinct(string s) {
        map<char,int>mpp;
        for(int i=0;i<s.length();i++){
            mpp[s[i]]++;
        }
        return mpp.size();
    }
};