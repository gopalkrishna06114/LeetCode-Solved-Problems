class Solution {

private:
    bool leapYear(int year){
        if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
            return true;
        } 
        return false;
    }
public:
    int dayOfYear(string date) {
        int dayCount=0;
        int monthCount=0;
        int totalCount=0;

        vector<int>arr={31,28,31,30,31,30,31,31,30,31,30,31};
        int year=0;
        for(int i=0;i<4;i++){
            year=(year*10)+date[i]-'0';
        }
        if(leapYear(year)){
            arr[1]=29;
        }
        // to find out the month
        monthCount = (monthCount*10)+date[5]-'0';
        monthCount = (monthCount*10)+date[6]-'0';
      

        // datCount
        dayCount = (dayCount*10)+date[8]-'0';
        dayCount = (dayCount*10)+date[9]-'0';


        // tocalculate the total count
        if(monthCount>=2){
            for(int i=0;i<monthCount-1;i++){
                totalCount+=arr[i];
            }
        }
        totalCount+=dayCount;

        // if(leapYear(year)){
        //     if(monthCount>=2){
        //         totalCount++;
        //     }
        // }
        return totalCount;
    }
};