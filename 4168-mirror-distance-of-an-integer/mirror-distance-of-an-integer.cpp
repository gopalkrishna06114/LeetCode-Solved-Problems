class Solution {
private:
    int findRev(int n){
        long long rev=0;
        while(n){
            int temp=n%10;
            rev = (rev*10)+temp;
            n=n/10;
        }
        return rev;
    }
public:
    int mirrorDistance(int n) {
        int rev = findRev(n);
        return abs(n-rev);
    }
};