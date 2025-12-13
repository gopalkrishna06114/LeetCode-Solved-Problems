class Solution {
private: 
    bool isFound(string str,int n, vector<string>& key){
        string word=key[0];
        int cnt=0;
        for(int i=0;i<str.length();i++){
            for(int j=0;j<word.length();j++){
                if(tolower(str[i])==word[j]){
                    cnt++;
                    break;
                }
            }
        }
        if(cnt>=str.length()){
            return true;
        }

        word=key[1];
        cnt=0;
        for(int i=0;i<str.length();i++){
            for(int j=0;j<word.length();j++){
                if(tolower(str[i])==word[j]){
                    cnt++;
                    break;
                }
            }
        }
        if(cnt>=str.length()){
            return true;
        }

        word=key[2];
        cnt=0;
        for(int i=0;i<str.length();i++){
            for(int j=0;j<word.length();j++){
                if(tolower(str[i])==word[j]){
                    cnt++;
                    break;
                }
            }
        }
        if(cnt>=str.length()){
            return true;
        }

        return false;
    }
public:
    vector<string> findWords(vector<string>& words) {
        vector<string> key={"qwertyuiop","asdfghjkl","zxcvbnm"};
        vector<string>ans;
        for(int i=0;i<words.size();i++){
            if(isFound(words[i],words[i].length(),key)){
                ans.push_back(words[i]);
            }
        }
        for(string s:key){
            cout<<s<<" ";
        }
        return ans;
    }
};