class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<string>s;
        for(int i=0;i<tokens.size();i++){
            if(tokens[i]=="+" && !s.empty()){
                int t1=stoi(s.top());
                s.pop();
                int t2=stoi(s.top());
                s.pop();
                int val=t1+t2;
                s.push(to_string(val));
            }else if(tokens[i]=="-" && !s.empty()){
                int t1=stoi(s.top());
                s.pop();
                int t2=stoi(s.top());
                s.pop();
                int val=t2-t1;
                s.push(to_string(val));
            }else if(tokens[i]=="*" && !s.empty()){
                int t1=stoi(s.top());
                s.pop();
                int t2=stoi(s.top());
                s.pop();
                int val=t1*t2;
                s.push(to_string(val));
            }else if(tokens[i]=="/" && !s.empty()){
                int t1=stoi(s.top());
                s.pop();
                int t2=stoi(s.top());
                s.pop();
                int val=t2/t1;
                s.push(to_string(val));
            }else{
                s.push(tokens[i]);
            }
        }
        return stoi(s.top());
    }
};