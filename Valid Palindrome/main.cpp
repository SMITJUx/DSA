/*
 *
 *	Valid Palindrome Question
 *	https://leetcode.com/problems/valid-palindrome/
 *
 */
#include <string>

using namespace std;

class Solution
{
      public:
        bool isPalindrome(string s)
        {
                int i = 0, j = s.size() - 1;

                while (i < j)
                {
                        while (i < s.size() && !isalnum(s[i]))
                                i++;

                        if (i >= j)
                                return true;

                        while (j > -1 && !isalnum(s[j]))
                                j--;

                        if (tolower(s[i]) != tolower(s[j]))
                                return false;

                        i++;
                        j--;
                }

                return true;
        }
};

int main()
{
        return 0;
}
