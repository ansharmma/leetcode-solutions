class Solution {
public:
    int maxProfit(vector<int>& prices) {

        int n=prices.size();

        int minv=INT_MAX;

        int maxp=0;

        int profit;

        for(int i=0; i <n;i++){
            minv=min(minv,prices[i]);

            profit=prices[i]-minv;

            maxp=max(profit,maxp);
        }

        return maxp;
        
    }
};