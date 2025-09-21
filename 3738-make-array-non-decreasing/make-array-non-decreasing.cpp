class Solution {
public:
    int maximumPossibleSize(vector<int>& nums) {
        stack<int>s;
        for(int i=0;i<nums.size();i++){
            if(!s.empty()){
                if(nums[i]>=s.top()){
                    s.push(nums[i]);
                }
            }else{
                s.push(nums[i]);
            }
        }
        return s.size();
    }
};