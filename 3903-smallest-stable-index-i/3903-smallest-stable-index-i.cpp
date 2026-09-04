class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {

        int n=nums.size();

        int maxel=INT_MIN;
        
        vector <int> findmin(n);

        int minel=INT_MAX;

        for(int i=n-1;i>=0;i--){
            minel=min(minel,nums[i]);
            findmin[i]=minel;
        }



        for(int i=0; i <n;i++){
            maxel=max(maxel,nums[i]);

            if(maxel-findmin[i] <=k) return i;


        }

        return -1;


        
    }
};