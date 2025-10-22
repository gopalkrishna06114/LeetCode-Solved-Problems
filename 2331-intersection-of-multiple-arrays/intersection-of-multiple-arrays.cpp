class Solution {
public:
    vector<int> intersection(vector<vector<int>>& nums) {
        vector<int>arr;
        for(int i=0;i<nums.size();i++){
            for(int j=0;j<nums[i].size();j++){
                arr.push_back(nums[i][j]);
            }
        }
        map<int,int>mpp;
        for(int i=0;i<arr.size();i++){
            mpp[arr[i]]++;
        }
        arr.clear();
        for(auto it:mpp){
            if(it.second>=nums.size()){
                arr.push_back(it.first);
            }
        }
        return arr;
    }
};