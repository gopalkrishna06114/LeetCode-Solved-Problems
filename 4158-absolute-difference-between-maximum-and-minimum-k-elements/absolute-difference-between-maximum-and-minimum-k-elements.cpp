class Solution {
public:
    int absDifference(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        int small=0,larg=0;
        for(int i=0;i<k;i++){
            small+=nums[i];
        }
        for(int i=nums.size()-1;i>=0;i--){
            if(k==0){
                break;
            }else{
                larg+=nums[i];
                k--;
            }
        }
        return abs(larg-small);
    }
};