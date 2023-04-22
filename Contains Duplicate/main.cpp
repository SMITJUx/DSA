/*
 *
 *	Contains Duplicate Question
 *	https://leetcode.com/problems/contains-duplicate/
 *
 */

#include <unordered_map>
#include <vector>

using namespace std;

class Solution
{
      public:
        bool containsDuplicate(vector<int> &nums)
        {
                unordered_map<int, int> seen;

                for (const int &num : nums)
                {
                        seen[num] += 1;
                }

                for (const pair<int, int> p : seen)
                {
                        if (p.second != 1)
                                return true;
                }

                return false;
        }
};

int main()
{
        return 0;
}
