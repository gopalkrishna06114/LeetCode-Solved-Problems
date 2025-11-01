class Solution {
public:
    int finalValueAfterOperations(vector<string>& operations) {
        int x=0;
        for(int i=0;i<operations.size();i++){
            string str=operations[i];
            int j=0;
            if(str[j]=='-'){
                x=x-1;
            }else if(str[j]=='+'){
                x=x+1;
            }else if(str[j]=='X'){
                j++;
                if(str[j]=='-'){
                    x=x-1;
                }else{
                    x=x+1;
                }
            }
        }
        return x;
    }
};