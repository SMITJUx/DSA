/*
 *
 *	Longest Substring Without Repeating Characters Question
 *	https://leetcode.com/problems/longest-substring-without-repeating-characters/description/
 *
 */
#include <string>
#include <unordered_map>

using namespace std;

class Solution
{
      public:
        int lengthOfLongestSubstring(string s)
        {
                unordered_map<char, int> seen;

                int lMax = 0, currentLMax = 0, lastCut = -1;

                for (int i = 0; i < s.size(); i++)
                {
                        if (seen.find(s[i]) != seen.end())
                        {
                                if (seen[s[i]] > lastCut)
                                {
                                        currentLMax = i - seen[s[i]];
                                        lastCut     = i;
                                }
                                else
                                {
                                        currentLMax = currentLMax + 1;
                                }
                        }
                        else
                        {
                                currentLMax = currentLMax + 1;
                        }

                        seen[s[i]] = i;
                        lMax       = max(lMax, currentLMax);
                }

                return lMax;
        }
};

int main()
{
        return 0;
}
