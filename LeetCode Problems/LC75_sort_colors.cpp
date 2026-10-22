class Solution {
public:
    void sortColors(vector<int>& nums) {
        int n = nums.size();
        vector<int>col (3);
        for(int i=0; i<n; i++){
            col[nums[i]]++;
        }

       for(int i=0; i<n; i++) nums[i]=0;

        for(int i=0,j=0; i<3; i++){
            while(col[i]>0){
                nums[j]=i; col[i]--;j++;
            }
        }

    
        
    }
};