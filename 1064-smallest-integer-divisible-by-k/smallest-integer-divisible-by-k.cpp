class Solution {
public:
    int smallestRepunitDivByK(int k) {

        if (k % 2 == 0 || k % 5 == 0) 
            return -1;

        unordered_set<int> seen;
        int rem = 1 % k;
        int cnt = 1;

        while (true) {
            if (rem == 0) 
                return cnt;

            if (seen.count(rem)) 
                return -1;

            seen.insert(rem);

            rem = (rem * 10 + 1) % k;
            cnt++;
        }
    }

};