/*
 *
 *	Letter Combinations of a Phone Number Question
 *      https://leetcode.com/problems/letter-combinations-of-a-phone-number/
 *
 */
#include <string>
#include <unordered_map>
#include <vector>

using namespace std;

class Solution
{
      private:
        const unordered_map<char, string> M = {{'2', "abc"},
                                               {'3', "def"},
                                               {'4', "ghi"},
                                               {'5', "jkl"},
                                               {'6', "mno"},
                                               {'7', "pqrs"},
                                               {'8', "tuv"},
                                               {'9', "wxyz"}};

      public:
        vector<string> letterCombinations(string digits)
        {
                vector<string> res  = vector<string>();
                string         buff = "";

                combine(digits, buff, 0, res);

                return res;
        }

      private:
        void combine(const string &digits, string &buff, int idx, vector<string> &res)
        {
                if (digits.empty())
                        return;

                if (idx == digits.size())
                {
                        res.push_back(buff);
                        return;
                }

                string str = M.at(digits[idx]);

                for (int i = 0; i < str.size(); i++)
                {
                        buff.push_back(str[i]);
                        combine(digits, buff, idx + 1, res);
                        buff.pop_back();
                }
        }
};

int main()
{
        return 0;
}
