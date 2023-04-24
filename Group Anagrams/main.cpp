/*
 *
 *	Group Anagrams Question
 *	https://leetcode.com/problems/group-anagrams/description/
 *
 */
#include <algorithm>
#include <string>
#include <unordered_map>
#include <vector>

using namespace std;

class Solution
{
      public:
        vector<vector<string>> groupAnagram(vector<string> &strs)
        {
                unordered_map<string, vector<string>> seen;
                vector<vector<string>>                ans;

                for (string str : strs)
                {
                        string sstr = str;

                        sort(sstr.begin(), sstr.end());

                        seen[sstr].push_back(str);
                }

                for (auto p : seen)
                {
                        ans.push_back(p.second);
                }

                return ans;
        }
};

int main()
{
        return 0;
}
