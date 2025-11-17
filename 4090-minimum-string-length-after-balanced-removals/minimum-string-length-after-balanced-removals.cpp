class Solution {
public:
    int minLengthAfterRemovals(string s) {
        sort(s.begin(),s.end());
        int i=0,j=s.length()-1;
        int cnt=0;
        while(i<=j){
            if(s[i]==s[j]){
                return (j-i)+1;
            }
            i++;
            j--;
        }
        return 0;
    }
};