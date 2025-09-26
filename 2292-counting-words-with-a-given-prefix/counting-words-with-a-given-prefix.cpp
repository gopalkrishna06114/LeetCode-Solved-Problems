class Solution {
public:
    int prefixCount(vector<string>& words, string pref) {
        int cnt=0;
        for(int i=0;i<words.size();i++){
            string str=words[i];
            int j=0;
            bool flag=false;
            while(j<pref.length()){
                if(str[j]!=pref[j]){
                    flag=true;
                    break;
                }
                j++;
            }
            if(flag==false){
                cnt++;
            }
        }
        return cnt;
    }
};