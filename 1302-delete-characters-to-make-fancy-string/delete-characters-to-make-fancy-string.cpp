class Solution {
public:
    string makeFancyString(string s) {
        string str;
        for(int i=0;i<s.length();i++){
            if(str.length()>=2 && (str[str.length()-1]==str[str.length()-2]) && str[str.length()-1]==s[i]){
                continue;
            }else{
                str.push_back(s[i]);
            }
        }
        return str;
    }
};