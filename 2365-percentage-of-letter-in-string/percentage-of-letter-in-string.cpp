class Solution {
public:
    int percentageLetter(string s, char letter) {
        int freq=0;
        for(auto it:s){
            if(it==letter){
                freq++;
            }
        }
        return (freq*100)/s.length();
    }
};