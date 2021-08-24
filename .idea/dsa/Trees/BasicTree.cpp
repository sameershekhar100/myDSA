//#include "bits/stdc++.h"
//#include "TreeNode.h"
//
//using namespace std;
//
////taking the input levelwise
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
//
////recursive way of taking input
//TreeNode<int> *takeInput() {
//    int rootData;
//    cout << "enter data" << endl;
//    cin >> rootData;
//    TreeNode<int> *root = new TreeNode<int>(rootData);
//    int n;
//    cout << "enter number of children of " << rootData << endl;
//    cin >> n;
//    for (int i = 0; i < n; i++) {
//        TreeNode<int> *child = takeInput();
//        root->children.push_back(child);
//    }
//    return root;
//}
//
////level-wise printing
//void printLevelTree(TreeNode<int> *root) {
//    queue<TreeNode<int> *> queue;
//    queue.push(root);
//    while (!queue.empty()) {
//        TreeNode<int> *t = queue.front();
//        queue.pop();
//        cout << t->data << " : ";
//        for (int i = 0; i < t->children.size(); i++) {
//            cout << t->children[i]->data << " , ";
//            queue.push(t->children[i]);
//
//        }
//        cout << endl;
//    }
//}
//
////recursive way of printing
//void printTree(TreeNode<int> *root) {
//    if (root == NULL) {
//        return;
//    }
//    cout << root->data << " : ";
//    for (int i = 0; i < root->children.size(); i++) {
//        cout << root->children[i]->data << " , ";
//    }
//    cout << endl;
//    for (int i = 0; i < root->children.size(); i++) {
//        printTree(root->children[i]);
//    }
//
//}
//
////prints maximum value in the tree
//int max(TreeNode<int> *node) {
//    int s = node->data;
//    for (int i = 0; i < node->children.size(); ++i) {
//        int z;
//        z = max(node->children[i]);
//        s = max(s, z);
//    }
//
//    return s;
//}
//
////to calculate the height of the tree
//int height(TreeNode<int> *node) {
//    int z = 0;
//    for (int i = 0; i < node->children.size(); i++) {
//        int q = height(node->children[i]);
//        z = max(q, z);
//    }
//    return z + 1;
//}
//
////to calculate a certain depth of the tree
//
//void depth(TreeNode<int> *node, int k) {
//    if (node == NULL)
//        return;
//    if (k == 0) {
//        cout << node->data << endl;
//        return;
//    }
//    for (int i = 0; i < node->children.size(); i++) {
//        depth(node->children[i], k - 1);
//    }
//}
//
////to calculate number of leaf node in the tree
//int calculateLeaves(TreeNode<int>* node){
//    int p=0;
//    if(node==NULL){
//        return 0;
//    }
//    if(node->children.size()==0){
//        p=1;
//    }
//    for(int i=0;i<node->children.size();i++){
//        p+= calculateLeaves(node->children[i]);
//    }
//    return p;
//}
//int main() {
//    TreeNode<int> *treeNode = takeLevelInput();
////    TreeNode<int> *node1 = new TreeNode<int>(2);
////    TreeNode<int> *node2 = new TreeNode<int>(3);
////    TreeNode<int> *node3 = new TreeNode<int>(4);
////
////
////    treeNode->children.push_back(node1);
////    treeNode->children.push_back(node2);
////    treeNode->children.push_back(node3);
////    printLevelTree(treeNode);
////    depth(treeNode, 3);
//        cout<<calculateLeaves(treeNode);
//}