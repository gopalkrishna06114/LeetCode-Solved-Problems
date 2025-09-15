class Solution {
public:
    void check(string s,string b,int &count){
        bool flag=false;
        for(int i=0;i<b.length();i++){
            for(int j=0;j<s.length();j++){
                if(b[i]==s[j]){
                    flag=true;
                    break;
                }
            }
            if(flag) break;
        }
        if(flag==false) count++;
    }
    int canBeTypedWords(string text, string brokenLetters) {
        vector<string>arr;
        int i=0;
        string s;
        while(i < text.length()) {
            if(text[i] == ' ') {
                if(!s.empty()) {
                    arr.push_back(s);
                    s = "";
                }
            } else {
                s += text[i];
            }
            i++;
        }

        // push last word if exists
        if(!s.empty()) arr.push_back(s);
        int count=0;
        for(int i=0;i<arr.size();i++){
            check(arr[i],brokenLetters,count);
        }
        return count;
    }
};