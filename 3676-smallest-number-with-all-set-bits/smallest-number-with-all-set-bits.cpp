class Solution {
public:
    int smallestNumber(int n) {
        long long power=0,i=1;
        while(power<=n){
            power=pow(2,i);
            i++;
        }
        return --power;
    }
};