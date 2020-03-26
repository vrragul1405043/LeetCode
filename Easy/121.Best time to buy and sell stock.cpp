class Solution {
public:
    int maxProfit(vector<int>& prices) {
        
        int maxi = 0;
        int min = INT_MAX;
        
        for(int i=0;i<prices.size();i++)
        {
            if(prices[i]<min)
                min = prices[i];
            else
                maxi = std::max(maxi,prices[i]-min);
        }    
        return maxi;
    }
};