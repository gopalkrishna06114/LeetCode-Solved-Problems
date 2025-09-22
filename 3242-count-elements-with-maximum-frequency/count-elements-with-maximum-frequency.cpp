class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        map<int,int>mpp;
        for(int i=0;i<nums.size();i++){
            mpp[nums[i]]++;
        }
        vector<int>arr;
        int maxFreq=INT_MIN;
        for(auto it:mpp){
            if(maxFreq<it.second){
                maxFreq=it.second;
            }
        }
        int cnt=0;
        for(auto it:mpp){
            if(it.second==maxFreq){
                cnt+=it.second;
            }
        }
        return cnt;
    }
};