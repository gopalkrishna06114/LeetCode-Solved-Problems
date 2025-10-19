class Solution {
public:
    vector<string> uncommonFromSentences(string s1, string s2) {
        vector<string>arr;
        int idx=0;
        string str;
        int i=0;
        while(i<s1.length()){
            if(s1[i]==' '){
                arr.push_back(str);
                str="";
                i++;
            }else{
                str.push_back(s1[i]);
                i++;
            }
        }
        arr.push_back(str);
        str="";
        i=0;
        while(i<s2.length()){
            if(s2[i]==' '){
                arr.push_back(str);
                str="";
                i++;
            }else{
                str.push_back(s2[i]);
                i++;
            }
        }
        arr.push_back(str);
        map<string,int>mpp;
        for(int i=0;i<arr.size();i++){
            mpp[arr[i]]++;
        }
        arr.clear();
        for(auto it:mpp){
            if(it.second==1){
                arr.push_back(it.first);
            }
        }
        return arr;
    }
};