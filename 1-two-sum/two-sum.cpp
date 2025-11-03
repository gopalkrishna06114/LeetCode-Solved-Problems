class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        // vector<int>arr;
        // for(int i=0;i<nums.size()-1;i++){
        //     for(int j=i+1;j<nums.size();j++){
        //         if(nums[i]+nums[j]==target){
        //             arr.push_back(i);
        //             arr.push_back(j);
        //             break;
        //         }
        //     }
        // }

        map<int,int>mpp;
        vector<int>ans;
        for(int i=0;i<nums.size();i++){
            int check = target-nums[i];
            auto it = mpp.find(check);
            if(it!=mpp.end()){
                ans.push_back(it->second);
                ans.push_back(i);
            }else{
                mpp[nums[i]]=i;
            }
        }
        return ans;
    }
};