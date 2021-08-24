//#include "bits/stdc++.h"
//#include "BinaryTreeNode.h"
//
//using namespace std;
//
//void printBT(BinaryTree<int> *root) {
//    if (root == NULL)
//        return;
//    cout << root->data << " : ";
//    if (root->left != NULL)
//        cout << "L" << root->left->data;
//    if (root->right != NULL)
//        cout << " R" << root->right->data;
//    cout << endl;
//    printBT(root->left);
//    printBT(root->right);
//
//}
//
////level order printing
//void printlevelBT(BinaryTree<int>* node) {
//    if (node == NULL)
//        return;
//    queue<BinaryTree<int> *> q;
//    q.push(node);
//    while (!q.empty()) {
////        int count=q.size();
////        while (count>0) {
//            BinaryTree<int> *root = q.front();
//            q.pop();
//            cout << root->data << " : ";
//            if (root->left != NULL) {
//                cout << "L" << root->left->data;
//                q.push(root->left);
//            } else
//                cout << "L" << -1;
//            if (root->right != NULL) {
//                q.push(root->right);
//                cout << "R" << root->right->data;
//            } else
//                cout << "R" << -1;
//
////            count--;
////        }
//        cout<<endl;
//    }
//}
////recursive and bakwaas way of taking input of BT
//BinaryTree<int> *takeInput() {
//    int data;
//    cin >> data;
//    if (data == -1) {
//        return NULL;
//    }
//    BinaryTree<int> *root = new BinaryTree<int>(data);
//    BinaryTree<int> *nodeleft = takeInput();
//    BinaryTree<int> *noderight = takeInput();
//    root->left = nodeleft;
//    root->right = noderight;
//    return root;
//}
//
////taking level order input
//BinaryTree<int> *takeLevelInput() {
//    int data;
//    cout << "enter root data" << endl;
//    cin >> data;
//    if (data == -1) {
//        return NULL;
//    }
//    BinaryTree<int> *root = new BinaryTree<int>(data);
//    queue<BinaryTree<int> *> q;
//    q.push(root);
//    while (!q.empty()) {
//        BinaryTree<int> *front = q.front();
//        q.pop();
//
//        cout << "enter left child of " << front->data << endl;
//        int leftData;
//        cin >> leftData;
//        if (leftData != -1) {
//            BinaryTree<int> *leftNode = new BinaryTree<int>(leftData);
//            front->left = leftNode;
//            q.push(leftNode);
//        }
//        cout << "enter right child of " << front->data << endl;
//        int rightData;
//        cin >> rightData;
//        if (rightData != -1) {
//            BinaryTree<int> *rightNode = new BinaryTree<int>(rightData);
//            front->right = rightNode;
//            q.push(rightNode);
//        }
//    }
//    return root;
//}
//
//
////to count number of nodes in a bt
//int numNodes(BinaryTree<int>* root){
//    if(root==NULL){
//        return 0;
//    }
//    return 1+ numNodes(root->left)+ numNodes(root->right);
//}
//
////to check weather a nde is present or not in a bt
//bool checkNode(BinaryTree<int>* root,int k){
//    if(root==NULL){
//        return false;
//    }
//    bool b= false;
//    if(root->data==k){
//        return true;
//    }
//    if(checkNode(root->left,k)|| checkNode(root->right,k)){
//        b= true;
//    }
//    return b;
//}
////to find the height of a BT
//int height(BinaryTree<int>* root){
//    if(root==NULL){
//        return 0;
//    }
//    return 1+ max(height(root->left),height(root->right));
//}
//
//int main() {
////    BinaryTree<int> *root = new BinaryTree<int>(1);
////    BinaryTree<int> *node1 = new BinaryTree<int>(2);
////    BinaryTree<int> *node2 = new BinaryTree<int>(3);
////
////    root->left = node1;
////    root->right = node2;
//
//    BinaryTree<int> *root = takeLevelInput();
//
//    printlevelBT(mirrorTree(root));
//
//    delete root;
//}