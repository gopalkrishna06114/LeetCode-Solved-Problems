class Solution {
public:
    int lengthOfLastWord(string s) {
        vector<string>arr;
        int i=0;
        string temp;
        while(i < s.length()) {
            if(s[i] == ' ') {
                if(!temp.empty()) {
                    arr.push_back(temp);
                    temp = "";
                }
            } else {
                temp += s[i];
            }
            i++;
        }

        // push last word if exists
        if(!temp.empty()) arr.push_back(temp);
        temp=arr[arr.size()-1];
        return temp.length();
    }
};