/*
 *
 *	Minimum Window Substring Question
 *      https://leetcode.com/problems/minimum-window-substring/
 *
 */
#include <string>
#include <unordered_map>

using namespace std;

class Solution
{
      public:
        string minWindow(string s, string t)
        {
                unordered_map<char, int> seen;

                for (int i = 0; i < t.size(); i++)
                        seen[t[i]] += 1;

                int start = 0;
                int end   = 0;
                int count = 0;
                int smin  = 0;
                int lmin  = s.size() + 1;

                while (end < s.size())
                {
                        if (seen[s[end]] > 0)
                                count += 1;

                        seen[s[end]] -= 1;

                        if (count == t.length())
                        {
                                while (start < end && seen[s[start]] < 0)
                                {
                                        seen[s[start]] += 1;
                                        start += 1;
                                }

                                if (lmin > end - start + 1)
                                {
                                        smin = start;
                                        lmin = end - start + 1;
                                }

                                count -= 1;
                                seen[s[start]] += 1;
                                start += 1;
                        }

                        end += 1;
                }

                if (lmin < s.size() + 1)
                        return s.substr(smin, lmin);
                return "";
        }
};

int main()
{
        return 0;
}
