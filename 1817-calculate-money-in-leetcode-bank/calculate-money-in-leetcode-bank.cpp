class Solution {
public:
    int totalMoney(int n) {
        int sum=0;
        int i=1,day=1,cnt=1;
        while(n){
            if(day==8){
                i=cnt+1;
                cnt++;
                day=1;
            }
            sum+=i;
            i++;
            day++;
            n--;
        }
        return sum;
    }
};