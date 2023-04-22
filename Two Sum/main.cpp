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
                // Simply using this map to keep a record of seen values with their index
                unordered_map<int, int> seen;

                for (int i = 0; i < nums.size(); i++)
                {
                        if (seen.find(target - nums[i]) != seen.end())
                        {
                                return {seen[target - nums[i]], i};
                        }
                        seen[nums[i]] = i;
                }

                return {};
        }
};

int main()
{
        return 0;
}
