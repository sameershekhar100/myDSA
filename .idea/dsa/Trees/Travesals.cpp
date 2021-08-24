//#include "bits/stdc++.h"
//#include "TreeNode.h"
//
//TreeNode<int> *takeLevelInput() {
//    int rootData;
//    cin >> rootData;
//    TreeNode<int> *root = new TreeNode<int>(rootData);
//    queue<TreeNode<int> *> q;
//    q.push(root);
//    while (!q.empty()) {
//        TreeNode<int> *front = q.front();
//        q.pop();
//        cout << "Enter no. of children of " << front->data << " th node" << endl;
//        int num;
//        cin >> num;
//        for (int i = 0; i < num; i++) {
//            int childData;
//            cout << "enter " << i << "th child of " << front->data << endl;
//            cin >> childData;
//            TreeNode<int> *child = new TreeNode<int>(childData);
//            front->children.push_back(child);
//            q.push(child);
//        }
//    }
//    return root;
//}
//
//void preorder(TreeNode<int> *root) {
//    if (root == NULL)
//        return;
//    cout << root->data << " ";
//    for (int i = 0; i < root->children.size(); i++) {
//        preorder(root->children[i]);
//    }
//}
//
//void postorder(TreeNode<int> *root) {
//    if (root == NULL)
//        return;
//
//    for (int i = 0; i < root->children.size(); i++) {
//        postorder(root->children[i]);
//
//    }
//    cout << root->data << " ";
//}
//
////to check weather a node is present in a given tree or not
//bool checkNode(TreeNode<int> *node, int k) {
//    bool b = 0;
//    if (node == NULL)
//        return -1;
//
//    if (node->data == k) {
//        return 1;
//    }
//    for (int i = 0; i < node->children.size(); i++) {
//        b = checkNode(node->children[i], k);
//    }
//    return b;
//}
//
////to find the node with maximum child sum
//pair<TreeNode<int>* ,int> solve(TreeNode<int> *node) {
//
//    pair<TreeNode<int>*,int> p ;
//    p.first=node;
//    p.second=node->data;
////    TreeNode<int> *res = node;
////    int sum = node->data;
//    for (int i = 0; i < node->children.size(); i++) {
//        p.second += node->children[i]->data;
//    }
//    for (int i = 0; i < node->children.size(); i++) {
//        pair<TreeNode<int>*,int> z  = solve(node->children[i]);
//        int xsum = z.second;
//
//        p.second = max(p.second, xsum);
//        if (p.second == xsum) {
//            p.first = z.first;
//        }
//    }
//    return p;
//}
//
//int main() {
//    TreeNode<int> *treeNode = takeLevelInput();
//
////  preorder(treeNode);
////  postorder(treeNode);
//    cout << solve(treeNode).first->data << endl;
//    delete treeNode;
//    return 0;
//
//}