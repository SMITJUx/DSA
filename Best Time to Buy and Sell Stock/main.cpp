/*
 *
 *	Best Time to Buy and Sell Stock Question
 *	https://leetcode.com/problems/best-time-to-buy-and-sell-stock/
 *
 */

#include <vector>

using namespace std;

class Solution
{
      public:
        int maxProfit(vector<int> &prices)
        {
                int currentMin = prices[0];
                int maxProfit  = 0;

                for (const int &price : prices)
                {
                        currentMin = min(currentMin, price);
                        maxProfit  = max(maxProfit, price - currentMin);
                }

                return maxProfit;
        }
};

int main()
{
        return 0;
}
