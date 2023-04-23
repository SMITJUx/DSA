/*
 *
 *	Valid Parentheses Question
 *	https://leetcode.com/problems/valid-parentheses/
 *
 */
#include <stack>
#include <string>
#include <unordered_map>

using namespace std;

class Solution
{
      public:
        bool isValid(string s)
        {
                stack<char>               seen;
                unordered_map<char, char> m = {{'(', ')'}, {'[', ']'}, {'{', '}'}

                };

                for (char &c : s)
                {
                        if (m.find(c) != m.end())
                        {
                                seen.push(c);
                        }
                        else
                        {
                                if (seen.empty() || m[seen.top()] != c)
                                        return false;

                                seen.pop();
                        }
                }

                return seen.empty();
        }
};

int main()
{
        return 0;
}
