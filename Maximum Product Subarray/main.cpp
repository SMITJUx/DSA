/*
 *
 * 	Maximum Product Subarray Question
 *	https://leetcode.com/problems/maximum-product-subarray/
 *
 */

#include <vector>

using namespace std;

class Solution
{
      public:
        int maxProduct(vector<int> &nums)
        {
                int currentMin = nums[0], currentMax = nums[0];
                int pmax = nums[0];

                for (int i = 1; i < nums.size(); i++)
                {
                        if (nums[i] < 0)
                        {
                                swap(currentMin, currentMax);
                        }

                        currentMin = min(nums[i], nums[i] * currentMin);
                        currentMax = max(nums[i], nums[i] * currentMax);
                        pmax       = max(currentMax, pmax);
                }

                return pmax;
        }
};

int main()
{
        return 0;
}
