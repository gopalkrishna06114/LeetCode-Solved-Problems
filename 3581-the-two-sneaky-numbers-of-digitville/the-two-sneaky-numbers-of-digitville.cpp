class Solution {
public:
    vector<int> getSneakyNumbers(vector<int>& nums) {
        vector<int>arr;
        map<int,int>mpp;
        for(int i=0;i<nums.size();i++)
        {
            mpp[nums[i]]++;
        }
        for(auto it:mpp){
            if(it.second>=2){
                arr.push_back(it.first);
            }
        }
        return arr;
    }
};