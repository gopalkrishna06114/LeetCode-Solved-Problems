class Solution {
bool isAlphaNum(char ch){
    if(ch>='0' && ch<='9' || (ch>='a' && ch<='z')){
        return true;
    }
    return false;
}
public:
    bool isPalindrome(string s) {
        string str;
        for(int i=0;i<s.length();i++){
            char ch = tolower(s[i]);
            if(isAlphaNum(ch)){
                str.push_back(ch);
            }
        }
        int i=0,j=str.length()-1;
        while(i<=j){
            if(str[i]!=str[j]){
                return false;
            }
            i++;
            j--;
        }
        return true;
    }
};