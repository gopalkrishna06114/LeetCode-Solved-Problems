class Solution {
public:
    int maxFreqSum(string s) {
        map<char,int>mpp1;
        map<char,int>mpp2;
        for(int i=0;i<s.length();i++){
            if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u'){
                mpp1[s[i]]++;
            }else{
                mpp2[s[i]]++;
            }
        }

        int max1=0,max2=0;
        for(auto it:mpp1){
            if(max1<it.second){
                max1=it.second;
            }
        }
        for(auto it:mpp2){
            if(max2<it.second){
                max2=it.second;
            }
        }
        return max1+max2;
    }
};