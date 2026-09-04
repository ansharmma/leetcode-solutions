class Solution {
public:
    bool uniformArray(vector<int>& nums1) {
        int min=nums1[0];
        int n=nums1.size();

        for(int i=0;i<n;i++){
            if(nums1[i]<min) min=nums1[i];
        }

        bool even = true;
        bool odd = true;

        for(int i=0; i<n; i++){
            if(nums1[i]%2==0){
                odd=false;
            }

            else if (nums1[i]%2!=0){
                even = false;
            }

        }

        bool result=even||odd;

        if(result==true){
            return true;
        }

        else{
            
        if(min%2==0) return false;

        else return true;
        }
    }

};