class Solution {
public:
    bool judgeCircle(string moves) {
        string up,down,left,right;
        for(int i=0;i<moves.length();i++){
            if(moves[i]=='U'){
                up.push_back('U');
            }else if(moves[i]=='D'){
                down.push_back('D');
            }else if(moves[i]=='L'){
                left.push_back('L');
            }else{
                right.push_back('R');
            }
        }

        return up.length()==down.length() && right.length()==left.length();
    }
};