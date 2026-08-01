class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int n=nums.size();
        int i=0;

        // int j=n-1;

        int tsum=0;
        int rsum=0;
        

       

        for(int k=0; k<n; k++){
            tsum+=nums[k];

        }

        while(i<n){


            int lsum=0;

            for(int k=0; k<i;k++){
                lsum+=nums[k];
                
            }

            rsum=tsum-lsum-nums[i];

            
            if(lsum==rsum) return i ;


            i++;

            

        }

        return -1;
        

        
    }
};