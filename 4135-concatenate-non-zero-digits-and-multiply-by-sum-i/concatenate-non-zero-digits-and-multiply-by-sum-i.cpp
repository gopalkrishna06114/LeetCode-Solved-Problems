class Solution {
public:
    long long sumAndMultiply(int n) {
        long long digit=0;
        vector<int>arr;
        int x=n;
        while(x){
            int temp=x%10;
            if(temp!=0){
                arr.push_back(temp);
            }
            x=x/10;
        }
        reverse(arr.begin(),arr.end());


        for(int i=0;i<arr.size();i++){
            digit=(digit*10)+arr[i];
        }


        long long sum=0;
        while(n){
            int temp=n%10;
            sum+=temp;
            n=n/10;
        }

        
        return digit*sum;
    }
};