/*
 *
 *	Longest Repeating Character Replacement Question
 *	https://leetcode.com/problems/longest-repeating-character-replacement/
 *
 */
#include <string>

using namespace std;

class Solution
{
      public:
        int characterReplacement(string s, int k)
        {
                int alphabet[26] = {0};
                int start        = 0;
                int end          = 0;
                int smax         = 0;

                while (end < s.size())
                {
                        alphabet[s[end] - 'A']++;

                        smax = max(smax, alphabet[s[end] - 'A']);
                        end++;

                        if (end - start - smax > k)
                        {
                                alphabet[s[start] - 'A']--;
                                start++;
                        }
                }

                return end - start;
        }
};

int main()
{
        return 0;
}
