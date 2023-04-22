/*
 *
 *	Search in Rotated Sorted Array Question
 *	https://leetcode.com/problems/search-in-rotated-sorted-array/
 *
 */

#include <vector>

using namespace std;

class Solution
{
      public:
        int search(vector<int> &nums, int target)
        {
                int l = 0, r = nums.size() - 1;

                while (l <= r)
                {
                        int m = (l + r) / 2;

                        if (nums[m] == target)
                        {
                                return m;
                        }

                        if (nums[m] < nums[r])
                        {
                                if (nums[m] < target && target <= nums[r])
                                {
                                        l = m + 1;
                                }
                                else
                                {
                                        r = m - 1;
                                }
                        }
                        else
                        {
                                if (nums[m] > target && target >= nums[l])
                                {
                                        r = m - 1;
                                }
                                else
                                {
                                        l = m + 1;
                                }
                        }
                }

                return -1;
        }
};

int main()
{
        return 0;
}
