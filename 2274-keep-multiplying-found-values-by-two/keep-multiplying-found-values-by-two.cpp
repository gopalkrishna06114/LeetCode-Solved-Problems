class Solution {
public:
    int findFinalValue(vector<int>& nums, int original) {
        while(true){
            bool flag =false;
            for(int i=0;i<nums.size();i++){
                if(nums[i]==original){
                    original=2*original;
                    flag=true;
                    break;
                }
            }
            if(flag==false){
                break;
            }
        }
        return original;
    }
};