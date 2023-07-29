/*
 *
 *	Merge Two Sorted Lists Question
 *	https://leetcode.com/problems/merge-two-sorted-lists/
 *
 */
#include <algorithm>

using namespace std;

struct ListNode
{
        int       val;
        ListNode *next;
        ListNode() : val(0), next(nullptr)
        {
        }
        ListNode(int x) : val(x), next(nullptr)
        {
        }
        ListNode(int x, ListNode *next) : val(x), next(next)
        {
        }
};

class Solution
{
      public:
        ListNode *mergeTwoLists1(ListNode *list1, ListNode *list2)
        {
                if (list1 == nullptr)
                        return list2;

                if (list2 == nullptr)
                        return list1;

                if (list1->val < list2->val)
                {
                        list1->next = mergeTwoLists1(list1->next, list2);
                        return list1;
                }
                else
                {
                        list2->next = mergeTwoLists1(list1, list2->next);
                        return list2;
                }
        }

        ListNode *mergeTwoLists2(ListNode *list1, ListNode *list2)
        {
                if (!list1 || (list2 && list1->val < list2->val))
                        swap(list1, list2);

                if (list1)
                        list1->next = mergeTwoLists2(list1->next, list2);

                return list1;
        }
};

int main()
{
        return 0;
}
