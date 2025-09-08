class Solution {
public:
    vector<int> getNoZeroIntegers(int n) {
        vector<int>arr;
        for(int i=1;i<=n;i++){
            if(nonZero(i,n-i)){
                arr.push_back(i);
                arr.push_back(n-i);
                break;
            }
        }
        return arr;
    }
private:
    bool nonZero(int a,int b){
        bool flag1=true,flag2=true;
        while(a){
            int temp=a%10;
            if(temp==0){
                flag1=false;
                break;
            }
            a=a/10;
        }
        while(b){
            int temp=b%10;
            if(temp==0){
                flag2=false;
                break;
            }
            b=b/10;
        }
        if(flag1==false || flag2==false){
            return false;
        }else{
            return true;
        }
    }
};