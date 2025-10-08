class Solution {
    public int majorityElement(int[] nums) {
        HashMap<Integer,Integer> mpp = new HashMap<>();
        for(int i=0;i<nums.length;i++){
            if(mpp.containsKey(nums[i])){
                mpp.put(nums[i],mpp.get(nums[i])+1);
            }else{
                mpp.put(nums[i],1);
            }
        }
        System.out.println(mpp);
        int feq=-1;
        for(Map.Entry<Integer,Integer> entry:mpp.entrySet()){
            if(feq<entry.getValue()){
                feq=entry.getValue();
            }
        }
        for(Map.Entry<Integer,Integer> entry:mpp.entrySet()){
            if(feq==entry.getValue()){
                return entry.getKey();
            }
        }
        return -1;
    }
}