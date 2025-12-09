class Solution {
public:
    int finalPositionOfSnake(int n, vector<string>& commands) {
        vector<vector<int>>arr(n, vector<int>(n,0));
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                arr[i][j]=(i*n)+j;
            }
        }
        int i=0,j=0,l=0;
        while(l<commands.size()){
            if(commands[l]=="RIGHT"){
                j++;
                l++;
            }else if(commands[l]=="LEFT"){
                j--;
                l++;
            }else if(commands[l]=="UP"){
                i--;
                l++;
            }else if(commands[l]=="DOWN"){
                i++;
                l++;
            }
        }
        return arr[i][j];
    }
};