class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int n=nums.size();

        vector <int> result;

        for(int i=0; i <n ; i++){
            int num=abs(nums[i]);
            int idx=num;

            if(nums[idx]<0){
                result.push_back(num);
            }

            else{ nums[idx]*=-1;}

        }

        int ans=result.back();

        return ans;
        
    }
};