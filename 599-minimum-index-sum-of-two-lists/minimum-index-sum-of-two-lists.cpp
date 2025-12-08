class Solution {
public:
    vector<string> findRestaurant(vector<string>& list1, vector<string>& list2) {
        vector<pair<string,int>> arr;
        for(int i=0;i<list1.size();i++){
            for(int j=0;j<list2.size();j++){
                if(list1[i]==list2[j]){
                    arr.push_back({list1[i],i+j});
                }
            }
        }
        int min=INT_MAX;
        for(int i=0;i<arr.size();i++){
            if(min>arr[i].second){
                min=arr[i].second;
            }
        }
        vector<string> ans;
        for(int i=0;i<arr.size();i++){
            if(min==arr[i].second){
                ans.push_back(arr[i].first);
            }
        }
        return ans;
    }
};