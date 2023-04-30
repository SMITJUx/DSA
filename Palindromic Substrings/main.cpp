/*
 *
 *	Palindromic Substrings Question
 *	https://leetcode.com/problems/palindromic-substrings/
 *
 */
#include <string>

using namespace std;

class Solution
{
      public:
        int countSubstrings(string s)
        {
                int res = 0;

                for (int i = 0; i < s.size(); i++)
                {
                        expand(s, i, i, res);
                        expand(s, i, i + 1, res);
                }

                return res;
        }

      private:
        void expand(string s, int left, int right, int &res)
        {
                while (left > -1 && right < s.size() && s[left] == s[right])
                {
                        left--;
                        right++;
                        res++;
                }
        }
};

int main()
{
        return 0;
}
