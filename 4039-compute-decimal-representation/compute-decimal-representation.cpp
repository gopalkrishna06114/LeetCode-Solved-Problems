class Solution {
public:
    vector<int> decimalRepresentation(int n) {
        vector<int>ans;
        long long base=1;
        while(n){
            int temp=n%10;
            if(temp==0){
                base*=10;
                n=n/10;
                continue;
            }
            ans.push_back(temp*base);
            base*=10;
            n=n/10;
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};