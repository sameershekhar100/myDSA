//#include "bits/stdc++.h"
//#include "C:\Users\LENOVO\CLionProjects\myDSA\.idea\dsa\Trees\BinaryTrees\BinaryTreeNode.h"
//#include "C:\Users\LENOVO\CLionProjects\myDSA\.idea\dsa\LinkedList\Node.h"
//#include "BSTclass.h"
//
//using namespace std;

//TreeNode *lowestCommonAncestor(TreeNode *root, TreeNode *p, TreeNode *q) {
//    if (root == NULL || root == p || root == q) {
//        return root;
//    }
//    TreeNode *l = lowestCommonAncestor(root->left, p, q);
//    TreeNode *r = lowestCommonAncestor(root->right, p, q);
//
//    if (l && r) {
//        return root;
//    } else if (l) {
//        return l;
//    } else if (r) {
//        return r;
//    } else {
//        return NULL;
//    }
//}

//int main() {
//    BST b;
//    b.insertData(6);
//    b.insertData(2);
//    b.insertData(8);
//    b.insertData(0);
//    b.insertData(4);
//    b.insertData(7);
//    b.insertData(9);
//    b.insertData(3);
//    b.insertData(5);
//
//    BinaryTree<int> *n1 = new BinaryTree<int>(2);
//    BinaryTree<int> *n2 = new BinaryTree<int>(8);
//    BST *ans = solve(b, n1, n2);
//}