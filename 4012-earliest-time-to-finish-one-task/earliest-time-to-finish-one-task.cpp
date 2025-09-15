class Solution {
public:
    int earliestTime(vector<vector<int>>& tasks) {
        vector<int>arr;
        for(int i=0;i<tasks.size();i++){
            int sum=0;
            for(int j=0;j<tasks[0].size();j++){
                sum+=tasks[i][j];
            }
            arr.push_back(sum);
        }
        sort(arr.begin(),arr.end());
        return arr[0];
    }
};