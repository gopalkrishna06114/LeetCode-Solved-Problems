class Solution {
public:
    string frequencySort(string s) {
        map<char,int>mpp;
        for(int i=0;i<s.length();i++){
            mpp[s[i]]++;
        }

        vector<pair<char,int>> vec(mpp.begin(), mpp.end());

        sort(vec.begin(), vec.end(), [](auto &p1, auto &p2) {
            if (p1.second == p2.second) 
                return p1.first < p2.first;  // alphabetical order
            return p1.second > p2.second;    // higher frequency first
        });

        string ans;
        for(auto it:vec){
            int a=it.second;
            while(a--){
                ans+=it.first;
            }
        }
        return ans;
    }
};