class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        reverse(nums.begin(),nums.end());
        for(int i=nums.size()-1;i>=0;i--){
            if(nums[i]<=0){
                nums.pop_back();
            }
        }

        int target=1;
        reverse(nums.begin(),nums.end());
        for(int n:nums){
            if(n==target){
                target++;
            }else if(n>target){
                return target;
            }
        }
        return target;
    }
};