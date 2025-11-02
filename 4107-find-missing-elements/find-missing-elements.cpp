class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int min=nums[0],max=nums[nums.size()-1];
        map<int,int>mpp;
        for(int i=0;i<nums.size();i++){
            mpp[nums[i]]++;
        }
        vector<int>arr;
        for(int i=min;i<=max;i++){
            auto it = mpp.find(i);
            if(it==mpp.end()){
                arr.push_back(i);
            }
        }
        return arr;
    }
};