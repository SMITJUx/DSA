/*
 *
 *	Invert Binary Tree Question
 *  https://leetcode.com/problems/invert-binary-tree/
 *
 */
#include <iostream>

using namespace std;

struct TreeNode
{
        int       val;
        TreeNode *left;
        TreeNode *right;
        TreeNode() : val(0), left(nullptr), right(nullptr)
        {
        }
        TreeNode(int x) : val(x), left(nullptr), right(nullptr)
        {
        }
        TreeNode(int x, TreeNode *left, TreeNode *right) : val(0), left(left), right(right)
        {
        }
};

class Solution
{
      public:
        TreeNode *invertTree(TreeNode *root)
        {
                if (root == nullptr)
                        return root;

                swap(root->left, root->right);

                root->left  = invertTree(root->left);
                root->right = invertTree(root->right);

                return root;
        }
};

int main()
{
        return 0;
}
