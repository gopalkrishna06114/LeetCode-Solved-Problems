class Solution {
public:
    int countPrefixes(vector<string>& words, string s) {
        int cnt=0;
        for(int i=0;i<words.size();i++){
            string str=words[i];
            int j=0;
            bool flag=false;
            while(j<str.length()){
                if(str[j]!=s[j]){
                    flag=true;
                    break;
                }
                j++;
            }
            if(flag==false)cnt++;
        }
        return cnt;
    }
};