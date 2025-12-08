class Solution {
public:
    string reverseStr(string s, int k) {
        int i=0,j=k-1,l=k-1;
        if(k>s.length()){
            reverse(s.begin(),s.end());
            return s;
        }
        while(j<s.length()){
            while(i<=j){
                swap(s[i],s[j]);
                i++;
                j--;
            }
            i=l+k+1;
            j=i+k-1;
            l=j;
        }
        if((s.length()-i)<k){
            int t=s.length()-1;
            while(i<=t){
                swap(s[i],s[t]);
                i++;
                t--;
            }
            return s;
        }
        return s;
    }
};