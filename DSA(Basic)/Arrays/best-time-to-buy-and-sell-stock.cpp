class Solution {
public:
    int maxProfit(vector<int>& prices) {
      int n= prices.size();
      int buyprice = INT_MAX;
      int maxprofit = 0;
      for(int i=0;i<n;i++){
          buyprice = min(buyprice,prices[i]);
          maxprofit = max(maxprofit, prices[i]-buyprice);
      }
      return maxprofit;
    }
};
