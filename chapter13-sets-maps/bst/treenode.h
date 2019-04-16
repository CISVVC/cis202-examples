#ifndef TREENODE_H
#define TREENODE_H
class TreeNode
{
   ...
private:
   string data;
   TreeNode* left;
   TreeNode* right;
friend class BinarySearchTree;
}; 
#endif
