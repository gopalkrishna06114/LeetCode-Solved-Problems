class Solution {
public:
    int alternateDigitSum(int n) {
        stack<int>s;
        while(n!=0){
            int temp=n%10;
            s.push(temp);
            n=n/10;
        }
        int sum=0;
        int i=0;
        while(!s.empty()){
            if(i%2!=0){
                sum-=s.top();
                s.pop();
                i++;
            }else{
                sum+=s.top();
                s.pop();
                i++;
            }
        }
        return sum;
    }
};