/*
 *
 *	Valid Anagram Question
 *	https://leetcode.com/problems/valid-anagram/
 *
 */
#include <string>
#include <unordered_map>

using namespace std;

class Solution
{
      public:
        bool isAnagram(string s, string t)
        {
                if (s.size() != t.size())
                        return false;

                unordered_map<char, int> seen;

                for (int i = 0; i < s.size(); i++)
                {
                        seen[s[i]] += 1;
                        seen[t[i]] -= 1;
                }

                for (pair<char, int> p : seen)
                {
                        if (p.second != 0)
                                return false;
                }

                return true;
        }
};

int main()
{
        return 0;
}
