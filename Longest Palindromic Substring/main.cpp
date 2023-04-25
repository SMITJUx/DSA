/*
 *
 *	Longest Palindromic Substring Question
 *      https://leetcode.com/problems/longest-palindromic-substring/
 *
 */
#include <string>

using namespace std;

class Solution
{
      public:
        string longestPalindrome(string s)
        {
                int start = 0;
                int end   = 0;

                for (int i = 0; i < s.size(); i++)
                {
                        int l1   = expand(s, i, i);
                        int l2   = expand(s, i, i + 1);
                        int lmax = max(l1, l2);

                        if (lmax > end - start)
                        {
                                start = i - ((lmax - 1) / 2);
                                end   = i + (lmax / 2);
                        }
                }

                return s.substr(start, end - start + 1);
        }

      private:
        int expand(string s, int left, int right)
        {
                while (left > -1 && right < s.size() && s[left] == s[right])
                {
                        left--;
                        right++;
                }

                return right - left - 1;
        }
};

int main()
{
        return 0;
}
