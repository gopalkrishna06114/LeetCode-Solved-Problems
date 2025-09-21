class Solution {
public:
    int thirdMax(vector<int>& nums) {
        if(nums.size()<=2){
            sort(nums.begin(),nums.end());
            return nums[nums.size()-1];
        }
        map<int,int>mpp;
        sort(nums.begin(),nums.end());
        int k=3;
        for(int i=0;i<nums.size();i++){
            mpp[nums[i]]++;
        }
        vector<int>arr;
        for(auto it:mpp){
            arr.push_back(it.first);
        }
        if(arr.size()<=2){
            return arr[arr.size()-1];
        }
        reverse(arr.begin(),arr.end());
        return arr[2];
    }
};