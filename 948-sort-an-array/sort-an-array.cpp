class Solution {
private:
    void merge(vector<int>& arr,int s,int e){
        int mid=s+(e-s)/2;

        int len1=mid-s+1;
        int len2=e-mid;

        int *first = new int[len1];
        int *second = new int[len2];

        //copy values
        int mainArrayIndex=s;
        for(int i=0;i<len1;i++){
            first[i]=arr[mainArrayIndex++];
        }

        mainArrayIndex=mid+1;
        for(int i=0;i<len2;i++){
            second[i]=arr[mainArrayIndex++];
        }

        //merge 2 sorted arrays
        int index1=0;
        int index2=0;
        mainArrayIndex=s;

        while(index1<len1 && index2<len2){
            if(first[index1]<second[index2]){
                arr[mainArrayIndex++]=first[index1++];
            }
            else{
                arr[mainArrayIndex++]=second[index2++];
            }
        }

        while(index1<len1){
            arr[mainArrayIndex++]=first[index1++];
        }

        while(index2<len2){
            arr[mainArrayIndex++]=second[index2++];
        }

        delete []first;
        delete []second;
    }
    void mergeSort(vector<int>& nums,int s,int e){
        if(s>=e){
            return;
        }
        int mid=s+(e-s)/2;
        mergeSort(nums,s,mid);
        mergeSort(nums,mid+1,e);

        merge(nums,s,e);
    }
public:
    vector<int> sortArray(vector<int>& nums) {
        mergeSort(nums,0,nums.size()-1);
        return nums;
    }
};