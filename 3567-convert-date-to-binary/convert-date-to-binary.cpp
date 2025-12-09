class Solution {
private:
    string decToBin(int num){
        string ans;
        if(num==0){
            return "0";
        }
        while(num>0)
        {
            ans.push_back((num%2)+'0');
            num/=2;
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
public:
    string convertDateToBinary(string date) {
        string year,month,day;
        for(int i=0;i<4;i++){
            year.push_back(date[i]);
        }
        for(int i=5;i<7;i++){
            month.push_back(date[i]);
        }
        for(int i=8;i<date.length();i++){
            day.push_back(date[i]);
        }
        int y=stoi(year),m=stoi(month),d=stoi(day);
        string newYear,newMonth,newDay;
        newYear=decToBin(y);
        newYear.push_back('-');
        newMonth=decToBin(m);
        newMonth.push_back('-');
        newDay=decToBin(d);
        newYear+=newMonth;
        newYear+=newDay;
        
        return newYear;
    }
};