class Solution {
public:
    vector<string> sortPeople(vector<string>& names, vector<int>& heights) {
        vector<pair<string,int>>arr;
        for(int i=0;i<names.size();i++){
            arr.push_back({names[i],heights[i]});
        }
        sort(arr.begin(), arr.end(), [](const pair<string,int> &a, const pair<string,int> &b){
            return a.second > b.second;
        });
        names.clear();
        for(int i=0;i<arr.size();i++){
            names.push_back(arr[i].first);
        }
        return names;
    }
};