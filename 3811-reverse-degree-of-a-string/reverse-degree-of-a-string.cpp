class Solution {
public:
    int reverseDegree(string s) {
        map<char,int>mpp;
        mpp['a']=26;
        mpp['b']=25;
        mpp['c']=24;
        mpp['d']=23;
        mpp['e']=22;
        mpp['f']=21;
        mpp['g']=20;
        mpp['h']=19;
        mpp['i']=18;
        mpp['j']=17;
        mpp['k']=16;
        mpp['l']=15;
        mpp['m']=14;
        mpp['n']=13;
        mpp['o']=12;
        mpp['p']=11;
        mpp['q']=10;
        mpp['r']=9;
        mpp['s']=8;
        mpp['t']=7;
        mpp['u']=6;
        mpp['v']=5;
        mpp['w']=4;
        mpp['x']=3;
        mpp['y']=2;
        mpp['z']=1;
        int sum=0;
        for(int i=0;i<s.length();i++){
            char ch=s[i];
            for(auto it:mpp){
                if(ch==it.first){
                    sum+=((i+1)*it.second);
                }
            }
        }
        return sum;
    }
};