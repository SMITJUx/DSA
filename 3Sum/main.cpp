/*
 *
 *	3Sum Question
 *	https://leetcode.com/problems/3sum/
 *
 */
#include <algorithm>
#include <set>
#include <vector>

using namespace std;

class Solution
{
      public:
        vector<vector<int>> threeSum(vector<int> &nums)
        {
                vector<vector<int>> ans;
                set<vector<int>>    s;

                sort(nums.begin(), nums.end());

                for (int i = 0; i < nums.size(); i++)
                {
                        int j = i + 1, k = nums.size() - 1;

                        while (j < k)
                        {
                                int sum = nums[i] + nums[j] + nums[k];
                                if (sum == 0)
                                {
                                        s.insert({nums[i], nums[j], nums[k]});
                                        j++;
                                        k--;
                                }
                                else if (sum < 0)
                                {
                                        j++;
                                }
                                else
                                {
                                        k--;
                                }
                        }
                }

                for (vector<int> v : s)
                {
                        ans.push_back(v);
                }

                return ans;
        }
};

int main()
{
        return 0;
}
