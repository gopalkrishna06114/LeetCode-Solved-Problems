class Solution {
public:
    long long calculateScore(vector<string>& instructions, vector<int>& values) {
        long long sum = 0;
        int n = instructions.size();
        vector<int> visited(n, 0);
        int i = 0;

        while (i >= 0 && i < n) {
            if (visited[i] == 1) {
                break;   
            }
            visited[i] = 1;  
            if (instructions[i] == "jump") {
                i += values[i];
            } else {
                sum += values[i];
                i++;
            }
        }
        return sum;
    }
};