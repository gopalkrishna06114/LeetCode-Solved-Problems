class Solution {
public:
    vector<string> buildArray(vector<int>& target, int n) {
        vector<string>ans;
        int i=1;
        int idx=0;
        while(true){
            if(i==target[target.size()-1]){
                ans.push_back("Push");
                break;
            }
            if(i!=target[idx]){
                ans.push_back("Push");
                ans.push_back("Pop");
                i++;
            }else{
                ans.push_back("Push");
                i++;
                idx++;
            }
        }
        return ans;
    }
};