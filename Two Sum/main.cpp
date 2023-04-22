/*
 *
 *	Two Sum Question
 *	https://leetcode.com/problems/two-sum/
 *
 */

#include <unordered_map>
#include <vector>

using namespace std;

class Solution
{
      public:
        vector<int> twoSum(vector<int> &nums, int target)
        {
                unordered_map<int, size_t> seen;

                for (size_t i = 0; i < nums.size(); i++)
                {
                        const int remain = target - nums[i];

                        if (seen.find(remain) != seen.end())
                        {
                                return vector<int>{(int) seen[remain], (int) i};
                        }
                        seen[nums[i]] = i;
                }

                return vector<int>{};
        }
};

int main()
{
        return 0;
}
