class Solution {
public:
    vector<int> maxKDistinct(vector<int>& nums, int k) {
        map<int,int>mpp;
        sort(nums.begin(),nums.end());
        for(int i:nums){
            mpp[i]++;
        }
        vector<int>arr;
        for(auto it:mpp){
            arr.push_back(it.first);
        }
        nums.clear();
        int i=arr.size()-1;
        while(k--){
            if(i>=0){
                nums.push_back(arr[i]);
                i--;
            }else{
                break;
            }
        }
        return  nums;
    }
};