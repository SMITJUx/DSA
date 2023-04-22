/*
 *
 *	Maximum Subarray Question
 *	https://leetcode.com/problems/maximum-subarray/
 *
 */

#include <vector>

using namespace std;

class Solution
{
      public:
        /*
         *      Maximum Subarray with Dynamic Programming
         */
        int maxSubArrayDP(vector<int> &nums)
        {
                int sum = nums[0], smax = nums[0];

                for (int i = 1; i < nums.size(); i++)
                {
                        sum  = max(0, sum) + nums[i];
                        smax = max(smax, sum);
                }

                return smax;
        }

        /*
         *	Maximum Subarray with Divide and Conquer
         *
         *      Note: The most tricky part of this algorithm is to handle the case
         *      with the maximum subarray is spread between two halves.
         */
        int maxSubArrayDC(vector<int> &nums)
        {
                return maxSubArrayDC(nums, 0, nums.size() - 1);
        }

      private:
        int maxSubArrayDC(vector<int> &nums, int l, int r)
        {
                if (l == r)
                {
                        return nums[l];
                }

                int m = (l + r) / 2;

                int lmax = maxSubArrayDC(nums, l, m);
                int rmax = maxSubArrayDC(nums, m + 1, r);

                int ml = nums[m], mr = nums[m + 1];

                for (int i = m - 1, sum = ml; i >= l; i--)
                {
                        sum = sum + nums[i];
                        ml  = max(ml, sum);
                }

                for (int i = m + 2, sum = mr; i <= r; i++)
                {
                        sum = sum + nums[i];
                        mr  = max(mr, sum);
                }

                return max(max(lmax, rmax), ml + mr);
        }
};

int main()
{
        return 0;
}
