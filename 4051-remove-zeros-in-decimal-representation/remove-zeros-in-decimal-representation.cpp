class Solution {
public:
    long long removeZeros(long long n) {
        stack<long long>s;
        while(n){
            long long temp=n%10;
            if(temp!=0){
                s.push(temp);
            }
            n=n/10;
        }
        long long ans=0;
        while(s.size()>0){
            ans=(ans*10)+s.top();
            s.pop();
        }
        return ans;
    }
};