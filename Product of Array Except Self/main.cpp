/*
 *
 *	Product of Array Except Self Question
 *	https://leetcode.com/problems/product-of-array-except-self/
 *
 */

#include <vector>

using namespace std;

class Solution
{
      public:
        vector<int> productExceptSelf(vector<int> &nums)
        {
                int         size = nums.size();
                vector<int> ans  = vector<int>(size);

                // We first multiply by the numbers on the left
                ans[0] = 1;
                for (int i = 1; i < size; i++)
                {
                        ans[i] = ans[i - 1] * nums[i - 1];
                }

                // We then multiply by the numbers on the right
                int accu = 1;
                for (int i = size - 1; i >= 0; i--)
                {
                        ans[i] = ans[i] * accu;
                        accu   = accu * nums[i];
                }

                return ans;
        }
};

int main()
{
        return 0;
}
