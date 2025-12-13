class Solution {
public:
    bool detectCapitalUse(string word) {
        int isCapital=0;
        for(int i=0;i<word.length();i++){
            if(word[i]>='A' && word[i]<='Z'){
                isCapital++;
            }
        }
        if(isCapital==word.length()){
            return true;
        }
        int minsCapital=0;
        for(int i=1;i<word.length();i++){
            if(word[i]>='a' && word[i]<='z'){
                minsCapital++;
            }
        }
        if(minsCapital==word.length()-1 && word[0]>='A' && word[0]<='Z'){
            return true;
        }
        int isAllSmall=0;
        for(int i=0;i<word.length();i++){
            if(word[i]>='a' && word[i]<='z'){
                isAllSmall++;
            }
        }
        if(isAllSmall==word.length()){
            return true;
        }
        return false;
    }
};