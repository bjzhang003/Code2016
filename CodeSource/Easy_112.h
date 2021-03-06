/*
Given a binary tree and a sum, determine if the tree has a root-to-leaf path 
such that adding up all the values along the path equals the given sum.

For example:
Given the below binary tree and sum = 22,
      5
     / \
    4   8
   /   / \
  11  13  4
 /  \      \
7    2      1
return true, as there exist a root-to-leaf path 5->4->11->2 which sum is 22.
*/
#include"File_TreeNode.h"
using namespace std;
//success
class Path_Sum{
public:
	bool hasPathSum(TreeNode * root, int sum)
	{
		if (root != NULL)
		{
			if (root->left == NULL&&root->right == NULL&&sum == root->val)
			{
				return true;
			}
			else 
			{
				if (hasPathSum(root->left, sum - root->val))
					return true;
				if (hasPathSum(root->right, sum - root->val))
					return true;
			}
		}
		return false;
	}
};