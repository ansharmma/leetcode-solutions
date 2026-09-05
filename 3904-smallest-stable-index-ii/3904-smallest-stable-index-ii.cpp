class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        int n=nums.size();

        int maxel=INT_MIN;
        int minel=INT_MAX;

        vector <int> minact(n);

        for(int i=n-1; i >=0; i--){
            minel=min(minel,nums[i]);
            minact[i]=minel;

        }

        for(int i=0; i <n;i++){
            maxel=max(maxel,nums[i]);

            if(maxel-minact[i] <=k){
                return i;
            }
        }

        return -1;
    }

};