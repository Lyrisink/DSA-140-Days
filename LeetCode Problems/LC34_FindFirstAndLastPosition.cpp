class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int start=0, end=nums.size()-1;
        int a=-1, b=-1;
        //Leftmost term:
        while(end>=start){
            int mid = start + (end-start)/2;
            if(nums[mid]==target){
                a=mid; end=mid-1;
            }
            else if(nums[mid]<target){
                start=mid+1;
            }
            else{
                end=mid-1;
            }
        }
        start=0; end=nums.size()-1;
        //Rightmost term:
        while(end>=start){
            int mid = start + (end-start)/2;
            if(nums[mid]==target){
                b=mid; start=mid+1;
            }
            else if(nums[mid]<target){
                start=mid+1;
            }
            else{
                end=mid-1;
            }
        }
        return {a,b};
    }
};